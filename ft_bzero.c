#include"libft.h"
#include<strings.h>
#include<stdio.h>
#include<stdlib.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char *st;

	st = (unsigned char *)s;
	while(n > 0)
	{
		*st++ = 0;
		n--;
		
	}
}

int main(void)
{
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	ft_bzero(str, 2);
	puts(str);
	return (0);
}
