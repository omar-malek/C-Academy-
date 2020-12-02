#include <stdio.h>


int main(){

    unsigned long long  sum = 0LL;
    unsigned int count =0;

    printf("\n Enter the number of integer you want to sum: ");
    scanf("%u", &count);

    unsigned int i;


    for(i=1 ; i <= count ; ++i)
    {
       sum+=i;
       printf("inside loop %d\n ", sum);
    }


return 0;
}
