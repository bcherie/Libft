
#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		x;
	int		i;

	x = 0;
	i = 0;
	while (src[x] != '\0')
		x++;
	dest = (char *)malloc(sizeof(*dest) * (x + 1));
	if (dest == NULL)
		return (NULL);
	while (i <= x)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
