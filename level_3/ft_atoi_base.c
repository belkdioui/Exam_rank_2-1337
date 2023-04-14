
int get_index(char str, int base)
{
    int i;

    i = 0;
    char *base_hexa_1="0123456789ABCDEF";
    char *base_hexa_2="0123456789abcdef";
    while(i <= base-1)
    {
        if(str == base_hexa_1[i] || str == base_hexa_2[i])
            return i;
        i++;
    }
    return -1;
}

int ft_atoi_base(const char *str, int str_base)
{
    int res;
    int index;
    int sign;

    sign = 1;
    res = 0;
    while(*str == ' ' && *str == '\t')
    {
        str++;
    }
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if(*str == '+')
        str++;
    while(*str)
    {
        index = get_index(*str, str_base);
        if(index < 0)
            break;
        res= res * str_base + index;
        str++;
    }
    return (res * sign);
}

int main()
{
    int res;
    res = ft_atoi_base("Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base.", 16);
    printf("%d", res);
}