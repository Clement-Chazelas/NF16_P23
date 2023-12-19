#include <stdio.h>
#include <stdlib.h>

void puissance(int x, int n)
{
    if(n == 0)
        return 1;
    else{
        return x*puissance(x, n-1);
    }
}

void puissancev2(float x, int n)
{
    if(n == 0){
        return 1
    }
    else if(n%2 == 0){
        return puissancev2(n/2,x*x);
    }
    else{
        return x*puissancev2(n/2,x*x)
    }
}
