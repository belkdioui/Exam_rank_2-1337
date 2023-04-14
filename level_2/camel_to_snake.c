#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int main(int ac, char **av)
{
	int cap_let;
	int i;
	int j;
	char *str;
	int n;

	cap_let = 0;
	i = 0;
	j = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				cap_let++;
			i++;
		}
		str = malloc (sizeof(char) * (cap_let + i +1));
		n = i + cap_let;
		i = 0;
		while(n > j)
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				str[j] = '_';
				j++;
				str[j] = av[1][i]+32;
				j++;
				i++;
			}
			else
			{
				str[j] = av[1][i];
			   	j++;
		   		i++;	   
			}
		}
		str[j] = '\0';
		j = 0;
		while (str[j])
		{
			write(1, &str[j], 1);
			j++;
		}
		free(str);
	}
	write(1, "\n", 1);
}
