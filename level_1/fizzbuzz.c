#include<unistd.h>
#include<stdio.h>

void print_number(int num)
{
	char str[10] = "0123456789";
	
	if (num > 9)
		print_number(num / 10);
	write(1, &str[num % 10], 1);
}

int main()
{
	int num;

	num = 0;
	while (num++ < 100)
	{
		if (num % 5 == 0 && num % 3 == 0)
			write(1, "fizzbuzz", 8);
		else if (num % 5 == 0)
			write(1, "buzz", 4);
		else if (num % 3 == 0)
			write(1, "fizz", 4);
		else
			print_number(num);
		write(1, "\n", 1);
	}
}
