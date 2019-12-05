/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:48:12 by slupe             #+#    #+#             */
/*   Updated: 2019/12/05 20:55:02 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		h_count(char *line)
{
	int count;

	count = 0;
	if (!line)
		return (0);
	while (*line)
	{
		if (*line == '#')
			count++;
		line++;
	}
	return (count);
}


int		read_one(char *line)
{
	int n_line;
	int count;

	n_line = 0;
	count = 0;
	while (n_line < 4)
	{
		count += h_count(line);
		if (ft_strlen(line) != 4 || count > 4) //|| !chk_char(line))
		{
			printf("FAIL 1: count = %d, strlen = %ld\n", count, ft_strlen(line));
			exit(EXIT_FAILURE);

		}
		n_line++;
	}
	if (count < 4)
	{
		printf("FAIL 2");
		exit(EXIT_FAILURE);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int			fd;
	char		*line;
	line = 0;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (1)
		{
			/*if (get_next_line(fd, &line) == 1)
			{
				read_one(line);
				ft_putstr(line);
				ft_putchar('\n');
			}*/
			else
				break ;
		}
		close(fd);
	}
	return (0);
}

