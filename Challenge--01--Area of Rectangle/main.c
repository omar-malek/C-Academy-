

#include <stdint.h>
#include <stdio.h>





int main()
{
  float H, W;

  printf("ENTER the Hight of rectangle \n");
  scanf("%f",&H);
  printf("ENTER the Width of rectangle \n");
  scanf("%f",&W);

  printf("The  perimeter = %.2f \n",((H+W)*2));
  printf("The  area = %.2f\n",((H*W)));

    return 0;

}
