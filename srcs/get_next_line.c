/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:10:11 by slupe             #+#    #+#             */
/*   Updated: 2019/12/05 20:43:48 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	put_null_char(char *input, int len)
{
	while (len--)
		input[len] = 0;
}

void	replacer(char *src)
{
	while (*src != '\n' && *src != '\0')
		src++;
	if (*src == '\n')
		*src = '\0';
}

int		check_if_its_line(char *buffer, char **line)
{
	char *buffer_copy;
	char *line_copy;

	if (ft_strchr(buffer, '\n'))
	{
		buffer_copy = ft_strdup(buffer);
		buffer = ft_strcpy(buffer, &ft_strchr(buffer, '\n')[1]);
		replacer(buffer_copy);
		line_copy = *line;
		*line = ft_strjoin(*line, buffer_copy);
		free(buffer_copy);
		free(line_copy);
		return (1);
	}
	else
	{
		line_copy = *line;
		*line = ft_strjoin(*line, buffer);
		free(line_copy);
		put_null_char(buffer, BUFF_SIZE);
		return (0);
	}
}

int		get_next_line(const int fd, char **line)
{
	int			we_read;
	static char	*buffer[MAX_FD];

	if (fd < 0 || fd >= MAX_FD || line == NULL || BUFF_SIZE <= 0)
		return (-1);
	if (!(*line = ft_strnew(0)))
		return (-1);
	if (!buffer[fd])
		buffer[fd] = ft_strnew(BUFF_SIZE);
	if (*buffer[fd])
		if (check_if_its_line(buffer[fd], line) == 1)
			return (1);
	put_null_char(buffer[fd], BUFF_SIZE);
	while ((we_read = read(fd, buffer[fd], BUFF_SIZE)))
	{
		if (we_read < 0)
			return (-1);
		if (check_if_its_line(buffer[fd], line) == 1)
			return (1);
	}
	if (**line == 0)
		return (0);
	return (1);
}
