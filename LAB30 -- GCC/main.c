
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>



enum color { red, yellow , blue , black , green };
char  broild;


int main(void)
{
    printf("#############################################\n");
    printf("\n##########  Variable and Data Types  ########\n");
    printf("\n#############################################\n\n\n");

    enum color  my_color = black;

    broild ='\n';
    printf(" value = %d\n", my_color);

    printf(" text= \"%s \" \a \n", &broild);
return 0;
}
