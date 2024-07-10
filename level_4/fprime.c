#include<stdio.h>
#include<stdlib.h>

int main(int ac, char **av)
{
	int num;
	int i;
	int check;

	i = 2;
	if (ac == 2)
	{
		num = atoi(av[1]);
		if(num == 1)
			printf("%d",1);
		else if(num>1)
		{
			while(num>1)
			{
				check = 0;
				if(num%i == 0)
				{
					printf("%d ",i);
					num=num/i;
					check = 1;
				}
				if(check == 0)
					i++;
			}
		}
	}
	printf("\n");
}
