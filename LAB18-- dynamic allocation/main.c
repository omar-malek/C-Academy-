#include <stdio.h>
#include "string.h"
#include <stdlib.h>
#include <stdint.h>











int main(){

char *str =NULL;
/*initial memory allocation */
str=(char*)malloc(15*sizeof(char));
strcpy(str,"omar");
printf("String = %s  ,  Address =%p\n",str ,str);
/*Reallocating the memory */
str=(char*)realloc(str,60*sizeof(char));
strcat(str,".com");
printf("String = %s  ,  Address =%p\n",str,str);

free(str);
return 0;
}
