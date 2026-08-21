//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit 

#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    // Prompt user for input
    printf("Enter units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input. Units must be a positive integer.\n");
        return 1;
    }

    // Tiered calculation logic
    if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    } 
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    } 
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    // Output formatting without decimal points for exact matches
    printf("Bill: \xE2\x82\xB9%.0f\n", bill);

    return 0;
}
