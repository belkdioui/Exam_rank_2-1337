#include<unistd.h>

int ft_atoi(char *str)
{
    int res;

    res=0;
    while(*str)
    {
        res = res * 10 + (*str) - '0';
        str++;
    }
    return res;
}
#include<stdio.h>
#include<stdlib.h>
void put_nbr(int base)
{
    char *hex="0123456789abcdef";
    if(base >= 0 && base <= 16)
    {
        write(1,&hex[base],1);
    }
    else
    {
        put_nbr(base/16);
        put_nbr(base%16);
    }
}

int main(int ac, char **av)
{
    int num;

    if (ac == 2)
    {
        num = ft_atoi(av[1]);
        put_nbr(num);  
    }
    write(1,"\n",1);
}