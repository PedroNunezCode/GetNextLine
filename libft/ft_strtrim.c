#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char				*new;
	int					start;
	unsigned int		i;

	if (!s)
		return (NULL);
	i = 0;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		i++;
	start = i;
	if (s[start] == '\0')
	{
		new = ft_strnew(0);
		new[0] = '\0';
		return (new);
	}
	while (s[i])
		i++;
	i--;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		i--;
	if (!(new = (ft_strsub(s, start, i - start + 1))))
		return (NULL);
	return (new);
}