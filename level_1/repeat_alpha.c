#include<unistd.h>

int main(int ac, char **av)
{
	int i;
	int rep;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 97 && av[1][i] <= 122)
			{
				rep = av[1][i] - 96;
				while (rep)
				{
					write(1, &av[1][i], 1);
					rep--;
				}
			}
			else if (av[1][i] >= 65 && av[1][i] <= 90)
			{
				rep = av[1][i] - 64;
				while (rep)
				{
					write(1,&av[1][i], 1);
					rep--;
				}	
			}
			else
				write(1,&av[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);	
}
