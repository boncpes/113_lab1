#include <stdio.h>
int main()
{
    unsigned int n,m,k=0,i,c=0;
    unsigned long int t;
    char f,ans;
    scanf("%u %u %li %c",&n,&m,&t,&f);
    if(f=='L')
    {
        for(i=1; i<t; i++)
        {
            k=k+n;
            if(k>t)
            {
                ans='L';
                break;
            }
            k=k+m;
            if(k>t)
            {
                ans='R';
                break;
            }
        }
    }
    else if(f=='R')
    {
        for(i=1; i<t; i++)
        {
            k=k+m;
            if(k>t)
            {
                ans='R';
                break;
            }
            k=k+n;
            if(k>t)
            {
                ans='L';
                break;
            }
        }
    }
    printf("%c",ans);
    return 0;
}
