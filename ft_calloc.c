#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *str;
 	int i;

	i = 0;
	str = malloc(nmemb * size);
	if (str == NULL)
		return (0);
	while (i < nmemb * size)
	{
		str[i] = 0;
		i++;	
	}
	
	return (str);
}
