
#include <stdio.h>
#include<math.h>


int convertBinaryTodecimal(long long n);

int main()
{
    long long n;
    int result=0;

    printf( "Enter a binary number : ");
    scanf("%lld",&n);

    result = convertBinaryTodecimal(n);
    printf("%lld in binary = %d in decimal",n , result );

    return 0 ;
}

/*
Any numbering system can be summarised by the following relationship:

N = bi qi
            where:	N is a real positive number
            b is the digit
            q is the base value
            and integer (i) can be positive, negative or zero

*/
int convertBinaryTodecimal(long long n){

   int decimalNumber =0, i=0,remainder =0;

    while(n!=0)
    {
        remainder =n%10;
        n=n/10;
        decimalNumber+= remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;

}
