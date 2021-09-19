
#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	char	*b;
	size_t	i;

	b = (char *)s;
	i = 0;
	while (i < n)
	{
		b[i] = 0;
		i++;
	}
	return (b);
}
