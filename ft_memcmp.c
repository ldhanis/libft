#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *deref_str1;
	unsigned char *deref_str2;

	deref_str2 = str2;
	deref_str1 = str1;
	while (n--)
	{
		if (*deref_str1 != *deref_str2)
		{
			return (*deref_str1 - *deref_str2);
		}
		deref_str1++;
		deref_str1++;
	}
	return (0);
}
