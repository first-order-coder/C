#include <stdio.h>

enum CarType
{
    CAR_ELECTRIC,
    CAR_GAS
};

struct Car
{
    /* Attributes common to all cars */
    char model[30];
    int year;
    int numberOfPassengers;
    float maximumSpeed;

    /* Identfies which union member is currently valid */
    enum CarType type; //so the union knows which to pick correctly
    
    union
    {
        struct 
        {
            float chargingTime;
            float batteryCapacity;
            float electricRange;
        } electric;

        struct
        {
            float fuelTankCapacity;
            float fuelEfficiency;
            float engineCapacity;
        } gas;

    } powerSource;
};

void printCar(const struct Car *car)
{
    printf("Model: %s\n", car->model);
    printf("Year: %d\n", car->year);
    printf("Passengers: %d\n", car->numberOfPassengers);
    printf("Maximum Speed: %.1f km/h\n", car->maximumSpeed);

    if (car->type == CAR_ELECTRIC)
    {
        printf("Type: Electric\n");
        printf("Charging time: %.1f hours\n", car->powerSource.electric.chargingTime);
        printf("Battery Capacity: %.1f kWh\n", car->powerSource.electric.batteryCapacity);
        printf("Electric range: %.1f km\n", car->powerSource.electric.electricRange);
    }
    else if (car->type == CAR_GAS)
    {
        printf("Type: Gas-powered\n");
        printf("Fuel tank capacity: %.1f liters\n", car->powerSource.gas.fuelTankCapacity);
        printf("Fuel efficiency: %.1f km/litre\n", car->powerSource.gas.fuelEfficiency);
        printf("Engine capacity: %.1f litres\n", car->powerSource.gas.engineCapacity);
    }
}

int main(void)
{
    struct Car electricCar =
    {
        .model = "Tesla Model 3",
        .year = 2025,
        .numberOfPassengers = 5,
        .maximumSpeed = 225.0f,
        .type = CAR_ELECTRIC,

        .powerSource.electric =
        {
            .chargingTime = 7.5f,
            .batteryCapacity = 75.0f,
            .electricRange = 500.0f
        }
    };

    struct Car gasCar =
    {
        .model = "Toyota Corolla",
        .year = 2024,
        .numberOfPassengers = 5,
        .maximumSpeed = 190.0f,
        .type = CAR_GAS,

        .powerSource.gas =
        {
            .fuelTankCapacity = 50.0f,
            .fuelEfficiency = 17.0f,
            .engineCapacity = 1.8f
        }
    };

    printf("Electric car\n");
    printf("------------\n");
    printCar(&electricCar);

    printf("\nGas-powered car\n");
    printf("---------------\n");
    printCar(&gasCar);

    return 0;
}