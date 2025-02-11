#include <stdio.h>

// First implementation of the Temperature Converter which asks for user input then converts the temperature to Fahrenheit and Kelvin

//A function to Convert Temprature from Celsius to Fahreinheit and Kelvin;
void convertTemperature (float temp, char unit) 
{
    if (unit == 'C' || unit == 'c') {
        printf("\n%.2f°C is %.2f°F", temp, (temp * 9.0 / 5.0) + 32.0);
        printf("\n%.2f°C is %.2f°K", temp, temp + 273.15);
    } else if (unit == 'F' || unit == 'f') {
        printf("\n%.2f°F is %.2f°C", temp, (temp - 32.0) * 5.0 / 9.0);
        printf("\n%.2f°F is %.2f°K", temp, (temp - 32.0) * 5.0 / 9.0 + 273.15);
    } else if (unit == 'K' || unit == 'k') {
        printf("\n%.2f°K is %.2f°C", temp, temp - 273.15);
        printf("\n%.2f°K is %.2f°F", temp, (temp - 273.15) * 9.0 / 5.0 + 32.0);
    } else {
        printf("\nInvalid unit. Use 'C', 'F', or 'K' for Celsius, Fahreinheit, or Kelvin respectively.");
    }
}

int main () 
{

    float temp;
    char unit;

    printf("Enter Temperature (e.g 100 C for Celsius): ");
    scanf("%f %c", &temp, &unit);

    convertTemperature(temp, unit);

    return 0;
}