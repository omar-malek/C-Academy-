#include <stdio.h>
#include <stdint.h>






int main()
{
    struct date{
        int month;
        int day;
        int year;
    };

    struct date today;
    struct date *datePtr;
    datePtr =&today;

    datePtr->month=12;
    datePtr->day=31;
    datePtr->year=2020;

    printf("Today's date is %i/%i/%i.\n", datePtr->month,datePtr->day,datePtr->year);


 return 0;
}





///*declaration  of structure */
//struct date{
//int month;
//int day;
//int year;
//};
//int main(){
//
///*today is variable of type date*/
////struct date today={7,2,2015};
//
//struct date today=
//{
// .month =8,
// .day=13,
// .year=2020
//};
//printf("%d", today.month);
//
//
//
//return 0;
//}
