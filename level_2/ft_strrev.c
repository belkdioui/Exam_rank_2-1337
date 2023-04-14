#include<stdlib.h>
#include<string.h>
#include<stdio.h>
char *ft_strrev(char *str)
{
	int i;
	int len;
	char c;
	
	i=0;
	len = 0;
	while(str[len])
		len++;
	while(len--)
	{
		c = str[len];
		str[len] = str[i];
		str[i] = c;
		i++;
	}
	return str;
}
