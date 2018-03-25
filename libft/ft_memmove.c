#include "libft.h"

void	*ft_memmove(void *str, const void *tmp, size_t len)
{
	size_t		i;

	if (str == tmp)
		return (str);
	if (str > tmp)
	{
		i = len;
		while (i-- > 0)
			((char *)str)[i] = ((char *)tmp)[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)str)[i] = ((char *)tmp)[i];
			i++;
		}
	}
	return (str);
}