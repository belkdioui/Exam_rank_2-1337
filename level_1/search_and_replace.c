#include<unistd.h>
int main(int ac, char **av)
{
	int i;
	int c;

	i = 0;
	c = 0;
	if (ac == 4)
	{
		while (av[2][i])
		{
			c++;
			i++;
		}
		i = 0;
		while (av[3][i])
		{
			c++;
			i++;
		}
		if (c != 2)
		{
			write(1,"\n",1);
			return (0);
		}
		i = 0;
		while(av[1][i])
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
