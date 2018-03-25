#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *new;

	if (s1 && s2)
	{
		if(!(new = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
			return (NULL);
		new = ft_strncpy(new, s1, ft_strlen(s1));
		new = ft_strncpy(new, s2, ft_strlen(s2));
		return (new);
	}
	return (NULL);
}