#include <stdio.h>
#include <string.h>

int main() {
    char vehicle[10]; //Vehicle as a string
    float distance, cost;

    printf("Enter Vehicle Type (car/bike): ");
    scanf("%s", vehicle);

    printf("Enter Total Distance (Km): ");
    scanf("%f", &distance);

    if (strcmp(vehicle, "car") == 0) {
        cost = distance * 50;
        printf("Total Cost: %.2f BDT\n", cost);
    }
    else if (strcmp(vehicle, "bike") == 0) {
        cost = distance * 20;
        printf("Total Cost: %.2f BDT\n", cost);
    }
    else {
        printf("INVALID TYPE OF VEHICLE.\n");
    }

    return 0;
}
