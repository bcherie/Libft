
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (new == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		new[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2) && j != ft_strlen(s1) + ft_strlen(s2))
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	return (new);
}
