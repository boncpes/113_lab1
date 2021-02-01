#include <stdio.h>
int main()
{
    float t;
    int h,m,hour,i;
    int p[11]={1,2,3,4,5,6,7,8,9,10,11};
    int n[11]={13,14,15,16,17,18,19,20,21,22,23};
    scanf("%f",&t);
    h = (int)t;
    m = (t-h)*100;
    if( h==0 )
    {
        hour = 12;
        printf("%d:%d0 a.m.",hour,m);
        printf("\taaaaaaaaaaaa");
    }
    else if( h==12 )
    {
        hour = 12;
        printf("%d:%d0 p.m.",hour,m);
        printf("\taaaaaaaaaaaa");
    }
    else if( h>0 || h<12 )
    {
        hour=p[h-1];
        printf("%d:%d a.m.",hour,m);
        printf("\taaaaaaaaaaaa");
    }
    else if( h>12 || h<24 )
    {
        for(i=1;i<12;i++)
        {
            if(n[i-1]==h)
            {
               printf("%d:%d p.m.\n",i,m);
               printf("aaaaaaaaaaaa");
            }
        }
    }

    return 0;
}
