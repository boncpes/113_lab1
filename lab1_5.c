#include <stdio.h>
int main()
{
    int N=0,i=0,MAX=0;
    scanf("%d",&N);
    int NUM[N];
    for(i=0; i<N; i++)
    {
        scanf("%d",&NUM[N]);
        if(i=0)
            MAX=NUM[0];
        else if(NUM[N]>MAX)
            MAX=NUM[N];
    }


    return 0;
}
