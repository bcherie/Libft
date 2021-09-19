
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t nlen;

	nlen = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (*haystack != '\0' && len-- >= nlen)
	{
		if (ft_strncmp(haystack, needle, nlen) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
