/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 17:40:30 by slupe             #+#    #+#             */
/*   Updated: 2019/11/27 17:40:30 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../libft/includes/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUFF_SIZE 128

int		get_next_line(const int fd, char **line);
int		str_process(char *input, char **result);
void	ft_strzero(char *input, int len);
void	ft_strchr0(char *s, int c);

