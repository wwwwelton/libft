/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:24:28 by wleite            #+#    #+#             */
/*   Updated: 2021/07/27 19:24:28 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if ((!dest && !src) || !n)
		return (dest);
	if ((char *)dest <= (char *)src)
	{
		i = -1;
		while (++i < n)
			ptr_dest[i] = ptr_src[i];
	}
	else
	{
		i = n;
		while (i--)
			ptr_dest[i] = ptr_src[i];
	}
	return (dest);
}
