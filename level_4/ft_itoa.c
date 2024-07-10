#include<stdio.h>
#include<stdlib.h>

char *ft_itoa(int nbr)
{
	int len;
	char *str;
	int sign;
	int num;

	sign = 0;
	len = 0;
	if(nbr < 0)
	{
		sign = 1;
		nbr = nbr*(-1);
		len++;
	}
	else if(nbr == 0)
		len++;
	num = nbr;
	if(nbr > 0)
	{
		while(nbr>0)
		{
			nbr/=10;
			len++;
		}
	}
	str = malloc(sizeof(char) * (len+ 1));
	if(!str)
		return(0);
	str[len] = '\0';
	len--;
	if(num == 0)
		str[0] = '0';
	if(sign > 0)
		str[0] = '-';
	while(num >= 1)
	{
		str[len] = num % 10 + '0';
		num/=10;
		len--;
	}
	return (str);
}
#include<limits.h>
int main()
{
	printf("%s",ft_itoa(-2147483648));
}
