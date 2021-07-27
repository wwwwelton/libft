/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:24:45 by wleite            #+#    #+#             */
/*   Updated: 2021/07/27 19:24:46 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = 0;
	while (dst[dstlen] && dstlen < dstsize)
		dstlen++;
	if (dstlen == dstsize)
		return (dstlen + srclen);
	ft_strlcpy(&dst[dstlen], src, dstsize - dstlen);
	return (dstlen + srclen);
}
