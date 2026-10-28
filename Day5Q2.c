#include<stdio.h>
int main()
{
int total_seconds, hours, minutes, seconds;

    printf("Enter time in total seconds: ");
    scanf("%d", &total_seconds);

    
    hours = total_seconds / 3600;

    minutes = (total_seconds % 3600) / 60;

    seconds = total_seconds % 60;

    
    printf("\nTime is -> %d hours, %d minutes, and %d seconds\n", hours, minutes, seconds);

    return 0;
}