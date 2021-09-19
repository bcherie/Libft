
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	char *b;

	b = (char*)dest;
	while (n-- > 0)
		*b++ = c;
	return (dest);
}
