#include <stdio.h>
int main() {
    char date[11]; 
    
    char months[13][4] = { 
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" 
    }; 

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%10s", date); 


    int monthNum = (date[3] - '0') * 10 + (date[4] - '0'); 


    printf("Formatted Date: %c%c-", date[0], date[1]); 

    if (monthNum >= 1 && monthNum <= 12) {
        printf("%s-", months[monthNum]);
    } else {
        printf("Invalid-");
    }

    printf("%c%c%c%c\n", date[6], date[7], date[8], date[9]); 

    return 0;
}