#include "get_next_line.h"

static int      ft_check_str(char **str, char **line)
{
	char *tmp;

	tmp = ft_strsearch(*str, LINE);
	if (tmp)
	{
		*line = ft_strsub(*str, 0, tmp - *str);
		ft_memmove(*str, tmp + 1, ft_strlen(tmp));
		tmp = NULL;
		return (1);
	}
	return (0);
}

static int ft_get_line(int fd, char **str, char **line)
{
	char    buf[BUFF_SIZE + 1];
	char    *tmp;
	int     ret;

	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		buf[ret] = '\0';
		tmp = NULL;
		if (*str)
		{
			tmp = ft_strdup(*str);
			ft_memdel((void **)str);
			*str = ft_strjoin(tmp, buf);
			ft_memdel((void **)&tmp);
		}
		else
			*str = ft_strdup(buf);
		if (ft_check_str(str, line))
			return (1);
	}
	return (0);
}

int             ft_get_next_line(const int fd, char **line)
{
	static char     *str[4864];
	int             result;

	if (!line || fd < 0 || fd > 4864)
		return (-1);
	if (str[fd] && ft_check_str(&str[fd], line))
		return (1);
	result = ft_get_line(fd, &str[fd], line);
	if (result != 0)
		return (result);
	if (str[fd] == NULL || str[fd] == '\0')
		return (0);
	*line = str[fd];
	str[fd] = NULL;
	return (1);
}