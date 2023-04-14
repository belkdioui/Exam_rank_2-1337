#include <stdlib.h>

char *strdup(char *s1)
{
	int i;
	char *str;

	i = 0;
	while (s1[i])
		i++;
	str = malloc(sizeof(char) * (i+1));
	i = 0;
	while (s1[i])
	{
		str[i]=s1[i];
		i++;
	}
	str[i] = '\0';
	return str;
}
