
int		max(int* tab, unsigned int len)
{
    int i;
    if (len)
    {
        i = tab[len];
        while(len)
        {
            if(tab[len] < tab[len - 1])
            {
                i = tab[len-1];
            }
            len--;
        }
        return i;
    }
    return 0;
}
