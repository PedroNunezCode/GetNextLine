#include "libft.h"

void	ft_putendl_fd(char const *str, int fd)
{
	if (str)
	{
		while (*str)
			write(fd, (*&str)++, 1);
		write(fd, "\n", 1);
	}
}