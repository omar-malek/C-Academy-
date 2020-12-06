
#include <stdio.h>




int main(){
int num, position , newNum, bitStatus;


printf( "Enter any number : ");
scanf("%d",&num);

/* Input number fro user */
printf("Enter nth bit to checks and set (0-31): ");
scanf("%d",&position);

/* Right shift num, postion times and perform bitwise and with 1*/
bitStatus=(num>>position)&1;
printf("The %d bit is set to %d \n",position,bitStatus);


/*Leftshif 1, n times and perform bitwise OR with num*/
  newNum=(1<<position)|num;


  printf("Number before setting %d bit: %d (in decimal)\n",position, num);
  printf("Number after setting  %d bit: %d (in decimal)\n",position, newNum);




return 0;
}
