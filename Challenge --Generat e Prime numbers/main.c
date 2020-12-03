
#include <stdio.h>
#include  <stdint.h>
#include <stdbool.h>




int mai()

{
    int p;
    int i;
    bool isPrime;

    int primes [50]= {0};
    int primeIndex =2;

    //hardcode prime number
    primes[0]=2;
    primes[1]=3;

    for ( p=5; p<100; p=p+2)
    {

        isPrime =true;
        for(i=0; isPrime && p / primes[i]>= primes)
    }


    return 0;
}
