#include"libft.h"
#include<string.h>
#include<stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;
	size_t i;
	d = (char *) dest;
	s = (const char *) src;
	i = 0;
	if(d > s)
		while(i < n)
		{
			d[n - 1] = s[n - 1];
			n--;
               }
	else
		while(i < n)
	   	{
	     	d[i] = s[i];
		i++;
		}
return(dest);
}

int main(void)
{
	char str1[50];
	char str2[50] = "mahmudul hasan";
	char *ret;

	ret = ft_memmove(str1, str2, 11);
	printf("%s", ret);
	return (0);
}
