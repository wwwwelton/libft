/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 23:19:39 by wleite            #+#    #+#             */
/*   Updated: 2021/07/28 01:07:28 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	char		*src;
	size_t		start;
	size_t		end;

	if (!s1 || !set)
		return (NULL);
	src = (char *)s1;
	start = 0;
	while (src[start] && ft_strchr(set, src[start]))
		start++;
	end = ft_strlen(src) - 1;
	while (src[end] && ft_strchr(set, src[end]))
		end--;
	str = ft_substr(src, start, end - start + 1);
	return (str);
}
