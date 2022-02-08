#include"libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char *str;
	
	if (s1 != '\0' && s2 != '\0')
		return(NULL);
	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1 ));
		if (str == NULL)
			return (NULL);
	while(s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return(str); 
}

/*
 int main()
 {
 	char s1[10] = "String 1.";
 	char s2[10] = "String 2.";
 	char *result = ft_strjoin(s1, s2);
 	printf("The result is %s\n", result);
 	printf("s1 doesn't change: %s\n", s1);
 	printf("s2 doesn't change: %s\n", s2);
 	return 0;
}
*/
