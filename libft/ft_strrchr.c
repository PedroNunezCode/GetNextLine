#include "libft.h"

char	*ft_strsearch(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len > 0 && s[len] != c)
		len--;
	if (s[len] == c)
		return (&((char *)s)[len]);
	return (NULL);
}