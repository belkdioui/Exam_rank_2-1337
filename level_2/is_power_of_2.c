
int is_power_of_2(unsigned int i)
{
    unsigned int n;

    n=2;
    while(n < i)
    {
        n=n*2;
    }
    if (n == i)
        return 1;
    return 0;
}