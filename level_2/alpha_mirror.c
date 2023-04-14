#include <unistd.h>
#include <stdio.h>
int main(int ac, char **av)
{
	int i;
	int diff;
	char c;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'm')
			{
				diff = av[1][i] - 'a';
				c = 'z' - diff;
				write(1, &c, 1);
			}
			else if (av[1][i] >='n' && av[1][i] <= 'z')
			{
				diff = 'z' - av[1][i];
				c = 'a' + diff;
				write(1, &c, 1);
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'M')
			{
				diff = av[1][i] - 'A';
				c = 'Z' - diff;
				write(1, &c, 1);
			}
			else if (av[1][i] >= 'N' && av[1][i] <= 'Z')
			{
				diff = 'Z' - av[1][i];
				c = 'A' + diff;
				write(1, &c, 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
