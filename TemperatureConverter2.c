#include <stdio.h>

// Second implementation of the Temperature Converter which prints a conversion table for Celsius, Fahrenheit, and Kelvin


//A function to Convert Temprature from Celsius to Fahreinheit and Kelvin;
void printConversionTable ()
{
    printf("\nTemperature Conversion Table\n");
    printf("-----------------------------\n");
    printf("| Celsius | Fahrenheit | Kelvin |\n");

    for (float celsius = -100.0; celsius <= 100.0; celsius += 10.0) {
        printf("| %7.2f | %10.2f | %7.2f |\n", celsius, (celsius * 9.0 / 5.0) + 32.0, celsius + 273.15);
    }

    printf("-----------------------------\n");
}

int main ()
{
    printConversionTable();

    return 0;
}