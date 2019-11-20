#include<stdio.h>
#include<time.h>
int Fibr(int);

int main()
{
    clock_t t;
    t=clock();
    int Fibr(int);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;

    int n, i = 0, c;

    scanf("%d",&n);

    printf("Fibonacci series\n");

    for ( c = 1 ; c <= n ; c++ )
    {
        printf("%d\n", Fibr(i));
        i++;
    }
    printf("Fibr() took %f seconds to execute \n", time_taken);

    return 0;
}

int Fibr(int n)
{
    if ( n == 0 )
        return 0;
    else if ( n == 1 )
        return 1;
    else
        return ( Fibr(n-1) + Fibr(n-2) );
}