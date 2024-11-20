#include <stdio.h>
#include "temperature_conversor.h"

int main()
{
    float temperature;
    char initialTemp, finalTemp;
    float finalTemperature;
    scanf("%f %c %c", &temperature, &initialTemp, &finalTemp);

    if (initialTemp == 'c')
    {
        if (finalTemp == 'k')
        {
            finalTemperature = convert_temperature(temperature, convert_celsius_to_kelvin);
        }

        if (finalTemp == 'f')
        {
            finalTemperature = convert_temperature(temperature, convert_celsius_to_fahrenheit);
        }
    }

    else if (initialTemp == 'f')
    {
        if (finalTemp == 'c')
        {
            finalTemperature = convert_temperature(temperature, convert_fahrenheit_to_celsius);
        }

        if (finalTemp == 'k')
        {
            finalTemperature = convert_temperature(temperature, convert_fahrenheit_to_kelvin);
        }
    }

    else if (initialTemp == 'k')
    {
        if (finalTemp == 'c')
        {
            finalTemperature = convert_temperature(temperature, convert_kelvin_to_celsius);
        }

        if (finalTemp == 'f')
        {
            finalTemperature = convert_temperature(temperature, convert_kelvin_to_fahrenheit);
        }
    }

    printf("Temperature: %.2f", finalTemperature);
    switch (finalTemp)
    {
    case 'c':
        printf("Cº");
        break;
    case 'f':
        printf("Fº");
        break;
    case 'k':
        printf("K");
        break;

    default:
        break;
    }
}