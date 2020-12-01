#include <stdio.h>
#include <stdint.h>





int main ()

{
    int MIN;
    double DAYS,YEARS;

    printf("Enter the number of Minutes \n");
    scanf("%d",&MIN);

    double MinuteInYears= 60*24*365;

    printf("THE number of minutes = %d \n", MIN);
    printf("THE number of days = %d \n", (MIN/60/24));
    printf("THE number of years = %f \n", (MIN/MinuteInYears));



    return 0;
}
