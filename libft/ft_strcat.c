#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		x;

	x = ft_strlen(s1);
	while (*s2 != '\0')
		s1[x++] = *s2++;
	s1[x] = '\0';
	return (s1);
}