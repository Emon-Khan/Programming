#include<stdio.h>
enum days_of_week{
    sun=1, mon, tue, wed, thu, fri, sat
};
int main()
{
    enum days_of_week day1, day2;
    day1 = sat;
    day2 = tue;
    int diff = day2-day1;
    printf("%d\n", day1);
    printf("%d\n", day2);
    printf("%d\n", abs(diff));
}
