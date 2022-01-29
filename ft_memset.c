#include"libft.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *str;
	str = (unsigned char *)s;
 	while( n> 0)
	{
	    *(str++) = (unsigned char)c;
          n--;
}

return(s);
}

int main(void)
{
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	ft_memset(str, '$', 5);
	puts(str);
	return (0);
}
