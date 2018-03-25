#include "libft.h"

char			**ft_strsplit(char *str, char c)
{
	int		y;
	int		x;
	int		i;
	char	**new;

	x = 0;
	i = 0;
	new = str ? (char **)malloc((ft_wordcount(str, c)) * sizeof(char *)) : NULL;
	if (!new || !ft_wordcount(str, c))
		return (NULL);
	while (str[i])
	{
		y = 0;
		while (str[i] == c && str[i])
			i++;
		if (ft_strsubcount(str, i, c) != 0)
		{
			new[x] = ft_strnew(ft_strsubcount(str, i, c));
			while (str[i] != c && str[i])
				new[x][y++] = str[i++];
			new[x++][y] = '\0';
		}
	}
	new[x] = 0;
	return (new);
}