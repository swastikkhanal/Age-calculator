#include <stdio.h>

int main()
{
    int age;
    long long days, hours, minutes;

    printf("Enter your age in years: ");
    scanf("%d", &age);

    // Approximate calculation
    days = age * 365;
    hours = days * 24;
    minutes = hours * 60;

    printf("\nYou have lived approximately:\n");
    printf("Days    = %lld days\n", days);
    printf("Hours   = %lld hours\n", hours);
    printf("Minutes = %lld minutes\n", minutes);

    return 0;
}
