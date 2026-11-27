#include <stdio.h>

// 1. Define the enumeration for traffic light colors
enum TrafficLight {
    RED,    // 0
    YELLOW, // 1
    GREEN   // 2
};

int main() {
    // 2. Declare an enum variable and set its value
    enum TrafficLight signal = RED;

    // 3. Print the action based on the enum value
    switch (signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid signal\n");
    }

    return 0;
}
