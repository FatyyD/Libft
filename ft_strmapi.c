
#include<stdio.h>
#include<stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int i;

	if(s != NULL && f != NULL)
		return(NULL);

	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!str)
			return(NULL);

	i = 0;
	while(s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return(str);
}

//char my_func(unsigned int i, char str)
{
 	printf("My inner function: index = %d and %c\n", i, str);
 	return str - 32;
}

int main()
{
 	char str[10] = "hello.";
	printf("The result is %s\n", str);
 	char *result = ft_strmapi(str, my_func);
 	printf("The result is %s\n", result);
 	return 0;
}
//

