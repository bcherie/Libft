
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *s;

	s = malloc(count * size);
	if (s == 0)
		return (NULL);
	ft_memset(s, 0, count * size);
	return (s);
}
