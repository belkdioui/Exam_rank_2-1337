#include<stdio.h>

size_t ft_strspn(const char *s, const char *accept)
{
    int i;
    int j;
    size_t len_af;
    size_t len_be;

    i = 0;
    len_af = 0;
    len_be = 0;
    while(s[i])
    {
        j = 0;
        len_be = len_af;
        while(accept[j])
        {
            if(s[i] == accept[j])
                len_af++;
            j++;
        }
        if(len_af == len_be)
            break;
        i++;
    }
    return len_af;
}