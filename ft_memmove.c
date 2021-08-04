/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:24:28 by wleite            #+#    #+#             */
/*   Updated: 2021/08/04 02:40:57 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dest = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	if ((!dst && !src) || !len)
		return (dst);
	if ((char *)dst < (char *)src)
	{
		i = -1;
		while (++i < len)
			ptr_dest[i] = ptr_src[i];
	}
	else
	{
		i = len;
		while (i--)
			ptr_dest[i] = ptr_src[i];
	}
	return (dst);
}
