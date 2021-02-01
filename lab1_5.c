#include <stdio.h>
int main()
{
    int n,i,max,local;
    scanf("%d",&n);
    int num[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
        if(i==0)
            max=num[i];
        else if(num[i]>max)
            max=num[i];
    }
    for(i=0; i<n; i++)
    {
        if(max==num[i])
        {
            local=i+1;
            break;
        }
    }
    printf("%d %d",local,max);
    return 0;
}
