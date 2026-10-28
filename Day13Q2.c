#include <stdio.h>

int main() 
{
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d are:\n", n);
    
    // A loop that starts at 1, runs as long as i <= n, and adds 1 each time (i++)
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    
    printf("\n"); // Prints a newline at the end

    return 0;
}