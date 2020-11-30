#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

/* Notes
- Name rules
- Data Type
- Declaring variable  :type  var-name
- initializing variable   ==> int x =21
- variable type :
        int -------> 1 bytes  ---> signed
        float -------> 4 bytes  ---->
        double -------> bytes ---->  used when float not sufficient
        char -------> 2 bytes
        bool -------> 1 bytes


*/


int main ()
{
    printf("#############################################\n");
    printf("\n##########  Variable and Data Types  ########\n");
    printf("\n#############################################\n\n\n");


    int jason = 5;
    float  J = 23.333;
    double  d= 55.5555555555;
    _Bool  mybool =1;//in C89
     bool  boolVariable = true;  // in C99



    return 0;
}
