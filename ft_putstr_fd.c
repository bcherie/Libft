
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		x;
	char	c;

	x = 0;
	if (!s)
		return ;
	while (s[x] != '\0')
	{
		c = s[x];
		write(fd, &c, 1);
		x++;
	}
}
