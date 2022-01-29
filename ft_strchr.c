#include"libft.h"
#include<string.h>
#include<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char *str;
	str = (char * ) s;

	while(*str != c)
	{
		if(*str =='\0')
		{
			return (NULL);
		}
	str++;
	}
return(str);
}

int main()
{
	char str[] = "http://www.tutorialspoint.com";
	char ch = '.';
	char *ret;

	ret = ft_strchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}
