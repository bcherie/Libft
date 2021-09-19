
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t num)
{
	size_t i;

	i = 0;
	if (!dest || !src)
		return (0);
	if (num == 0)
		return (ft_strlen(src));
	while (i < num - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
