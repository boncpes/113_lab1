#include <stdio.h>
int main()
{
    int n,m,k=0,i,c=0;
    signed long int t;
    char f,ans;
    scanf("%d %d %li",&n,&m,&t);
    fflush(stdin);
    scanf("%c",&f);
    if(f=='L')
    {
        for(i=1; i<t+1; i++)
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
        for(i=1; i<t+1; i++)
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
