#include<unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    int k;
    int p;

    i=0;
    j=0;
    k=0;
    p=0;
    if (ac == 3)
    {
        while(av[1][i])
        {
            p=0;
            if(i != 0)
            {
                j=i-1;
                while(av[1][j])
                {
                    if(av[1][i] == av[1][j])
                        p = 1;
                    j--;
                }
            }
            if (p == 0)
                write(1,&av[1][i],1);
            i++;
        }
        i=0;
        j=0;
        while(av[2][i])
        {
            p=0;
            k=0;
            if(i != 0)
            {
                j=i-1;
                while(av[2][j])
                {
                    if(av[2][i] == av[2][j])
                        p = 1;
                    j--;
                }
            }
            while(av[1][k])
            {
                if(av[1][k] == av[2][i])
                    p=1;
                k++;
            }
            if (p == 0)
                write(1,&av[2][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}