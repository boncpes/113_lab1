#include <stdio.h>
int main()
{
    signed long int n=0;
    scanf("%li",&n);
    printf("%li %li", n%3, n%11);
    return 0;
}
