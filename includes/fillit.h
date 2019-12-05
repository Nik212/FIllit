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

<<<<<<< HEAD
# include "./libft/includes/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUFF_SIZE 128

int		get_next_line(const int fd, char **line);
int		str_process(char *input, char **result);
void	ft_strzero(char *input, int len);
void	ft_strchr0(char *s, int c);

=======
# include "../libft/includes/libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# define MAX_FD 4096
# define BUFF_SIZE 100

int		get_next_line(const int fd, char **line);
void	put_null_char(char *input, int len);
void	replacer(char *src);
int		check_if_its_line(char *buffer, char **line);
void dynamic_array_print(char **A, size_t N, size_t M);
t_list	*put_in_list(void);
char ** dynamic_array_alloc(size_t N, size_t M);
void dynamic_array_free(char **A, size_t N);
char** dynamic_array_test(size_t N, size_t M);
>>>>>>> 94b92d530dc4a5f65617f7abc9a388ac953a52a7
