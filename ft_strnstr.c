#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	litsize;

	litsize = ft_strlen(little);
	if (!litsize)
		return ((char *)big);
	while (*big && litsize <= len--)
	{
		if (!ft_strncmp(big, little, litsize))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
