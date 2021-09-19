
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*f;
	unsigned char	*s;

	i = 0;
	f = (unsigned char *)s1;
	s = (unsigned char *)s2;
	while (i < n)
	{
		if (f[i] != s[i])
			return (f[i] - s[i]);
		i++;
	}
	return (0);
}
