//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float CP, SP, profit, loss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &CP);

    printf("Enter Selling Price: ");
    scanf("%f", &SP);

    if (SP > CP) {
        profit = SP - CP;
        percentage = (profit / CP) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    } 
    else if (CP > SP) {
        loss = CP - SP;
        percentage = (loss / CP) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    } 
    else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}