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
