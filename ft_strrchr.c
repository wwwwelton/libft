#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	n;

	n = ft_strlen(s);
	str = (char *)s + n;
	while (n--)
	{
		if (*str == (char)c)
			return (str);
		str--;
	}
	if (*str == (char)c)
		return (str);
	return (NULL);
}
