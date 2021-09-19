
#include "libft.h"

static int		ft_count(int n)
{
	int res;

	res = 0;
	if (n < 0)
	{
		n *= -1;
		res++;
	}
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		res++;
	}
	return (res);
}

char			*ft_itoa(int n)
{
	char			*s;
	unsigned int	len;

	len = ft_count(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(s = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	s[len] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
	}
	while (n)
	{
		s[len - 1] = (n % 10) + '0';
		len--;
		n /= 10;
	}
	return (s);
}
