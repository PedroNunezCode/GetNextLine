#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *s2;

	s2 = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (s2)
	{
		return(ft_strcpy(s2, (char *) s1));
	}
	return(0);
}
