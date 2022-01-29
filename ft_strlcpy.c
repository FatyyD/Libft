#include"libft.h"

size_t strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int i;

	i = 0; 
	if(!dest[i] || !src[i])
		return(0);
	if(size > 0)
		{
			while(size && src[i])
			{	dest[i] = src[i];
				i++;
				size--;
			}
		dest[i] = '\0';	
	}
	while(src[i])
		i++;
return(i)
}
