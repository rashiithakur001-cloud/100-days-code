//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter the temperature in celsius");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9 / 5) + 32;
    
    printf("The temperature in Fahrenheit=%.f\n", fahrenheit);
    
    return 0;
}  