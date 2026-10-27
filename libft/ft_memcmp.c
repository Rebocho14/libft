#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t			i;
	unsigned char	*byte1;
	unsigned char	*byte2;

    i = 0;
	byte1 = (unsigned char *)s1;
	byte2 = (unsigned char *)s2;
	while (i < size)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}