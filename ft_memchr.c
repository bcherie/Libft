
#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	char *s1;

	s1 = (char *)arr;
	while (n--)
	{
		if (*s1++ == (char)c)
			return ((void *)(s1 - 1));
	}
	return (0);
}
