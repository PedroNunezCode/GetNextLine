#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = (char *)malloc((size + 1) * sizeof(char));
	if (str)
	{
		ft_bzero(str, size + 1);
		return (str);
	}
	return (NULL);
}