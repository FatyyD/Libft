#include"libft.h"

char *ft_strdup(char *src)
{
	char *cpy;
	int len;

	len = 0;
	while(src[len])
		len++;
	if (!(cpy = (char *) malloc (sizeof(char) * (len +1))))
		return (NULL);
	len = 0;
	while(src[len])
	{
		cpy[len] = src[len];
			len++;
	}	
	cpy[len] = '\0';
	return (cpy);
}
