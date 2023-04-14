#include<unistd.h>
#include<stdio.h>

void put_nbr(int i)
{
    int n;
    if (i >= 0 && i <= 9)
    {
        n = i + '0';
        write(1,&n,1);
    }
    else
    {
        put_nbr(i/10);
        put_nbr(i%10);
    }
}

int ft_atoi(char *str)
{
    int res;

    res = 0;
    while((*str == ' ') || (*str == '\t'))
    {
        str++;
    }
    while(*str)
    {
        res = res * 10 + (*str) - '0';
        str++;
    }
    return (res);
}

int main(int ac, char **av)
{
    int i = 1;
    int num = ft_atoi(av[1]);
    if(ac == 2)
    {
        while(i < 10)
        {
            put_nbr(i); write(1," x ", 3); put_nbr(num); write(1, " = ",3); put_nbr(i*num);
            write(1,"\n",1);
            i++;
        }
    }
    else
        write(1,"\n",1);
}