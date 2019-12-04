/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:48:12 by slupe             #+#    #+#             */
/*   Updated: 2019/12/04 16:32:23 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int			i;
	int			fd;
	char		*line;
	line = 0;

	if (argc == 2)
	{
		i = 0;
		fd = open(argv[1], O_RDONLY);
		while ((get_next_line(fd, &line)) == 1)
		{
			line_analysis(line);
			ft_putchar('\n');
		}
		close(fd);
	}
	return (0);
}

