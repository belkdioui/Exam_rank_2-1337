#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	if (str[i] && str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] && str[i] == '+')
		i++;
	while (str[i] && str[i] >= '1' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

