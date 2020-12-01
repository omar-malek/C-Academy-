#include <stdio.h>
#include "stdint.h"
#include "stdbool.h"

/* Bitwise
has single    & |
position value in byte
& | ^ ~ <<  >>
*/


int main ()

{
    unsigned int a  = 60; //  0011 1100
    unsigned int b  = 13; //  0000 1101

    int result;

    result=~a;

    printf("result is %d",result);

    return 0;

}
