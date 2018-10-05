#include "libft.h"

size_t		ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (*s != '\n')
	{
		s++;
		len++;
	}
	return (len);
}
