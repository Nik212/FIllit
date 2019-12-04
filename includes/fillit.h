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
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void dynamic_array_print(char **A, size_t N, size_t M);
t_list	*put_in_list(void);
char ** dynamic_array_alloc(size_t N, size_t M);
void dynamic_array_free(char **A, size_t N);
char** dynamic_array_test(size_t N, size_t M);
