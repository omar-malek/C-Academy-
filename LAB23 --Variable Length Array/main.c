#include <stdio.h>


void array(int size){
char alpha [size];
int x=0;

while(x<size){
    alpha[x]='A'+x;
    printf("alpha is %c:\n",alpha[x]);
    x++;
}
}





int main(){



array(5);
array(20);
array(9);

return 0;

}




///*Variable length array */
//int main()
//{
//    size_t size =0;
//    printf("enter the number of element you want to store ;");
//    scanf("%zd",&size);
//
//
//    float value[size];
//
//    return 0;
//
//}
