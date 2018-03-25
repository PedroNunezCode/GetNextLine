#include "libft.h"

int	ft_isdigit(const int c)
{
	if ((unsigned int)c >= '0' && (unsigned int)c <= '9')
		return (1);
	else
		return (0);
}