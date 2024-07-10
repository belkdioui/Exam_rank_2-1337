#include<unistd.h>
#include<stdlib.h>

int mini_atoi(char *str)
{
	int res;

	res = 0;
	while(*str)
	{
		res = res * 10 + (*str) - '0'; 
		str++;
	}
	return (res);
}	

void put_nbr(int num)
{
	char *str="0123456789";
	if(num >= 0 && num <= 9)
	{
		write(1,&str[num],1);
	}
	else
	{
		put_nbr(num/10);
		put_nbr(num%10);
	}	
}

int main(int ac, char **av)
{
	int num;
	int num1;
	int res;
	int check;
	int i ;

	check = 0;
	if (ac == 2)
	{
		num = mini_atoi(av[1]);
		res = 0;
		if(num == 0 || num == 1)
		{
			write(1,"0\n",2);
			exit(0);
		}
		while(num >= 2)
		{
			i = 2;
			check=0;
			num1 = num;
			while(i<num1)
			{
				if(num1 % i == 0)
					check =1;	
				i++;
			}
			if(check != 1)
				res = res+num;
			num--;
		}
		put_nbr(res);
		write(1,"\n",1);
		return (0);
	}
	write(1,"0\n",2);
}
