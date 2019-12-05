/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:38:31 by dhojt             #+#    #+#             */
/*   Updated: 2018/01/27 15:38:33 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *i;

	i = str;
	while (*i)
	{
		if (*i >= 'a' && *i <= 'z')
			*i = *i - 32;
		i++;
	}
	return (str);
}
