#include<stdio.h>
#define TARGET_AGE 88
    int year1, year2;
    int calcYear (int year1);
int main(void)
{
    printf("What flippin heckin  year was the subject born? \n");
    printf("Enter as a 4 digit year (YYYY): ");
    scanf("%d", &year1);

    year2 = calcYear(year1);

    printf("somebody born in %d will be %d in %d.", year1, TARGET_AGE, year2);

    return 0;
}
int calcYear(int year1)
{
    return(year1+TARGET_AGE);
}
