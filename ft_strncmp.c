/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:24:55 by wleite            #+#    #+#             */
/*   Updated: 2021/07/27 19:24:56 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (len == 0)
		return (0);
	i = 0;
	while ((str1[i] == str2[i]) && str1[i] && str2[i] && i < len)
		i++;
	if (i < len)
		return (str1[i] - str2[i]);
	return (0);
}
