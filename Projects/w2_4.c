#include <stdio.h>
#include <unistd.h> // for sleep() on Linux/macOS

enum states {
    RED,    // RED = 0
    GREEN,  // GREEN = 1
    YELLOW  // YELLOW = 2
};

void print_states(enum states state)
{
    switch (state) {
        case RED:
            printf("RED\n");
            break;

        case GREEN:
            printf("GREEN\n");
            break;

        case YELLOW:
            printf("YELLOW\n");
            break;

        default:
            printf("Unknown state\n");
            break;
    }
}

int main(void)
{
    enum states currentState = RED;

    while (1) {
        print_states(currentState);

        sleep(2); // wait 2 seconds before changing state

        switch (currentState) {
            case RED: //if the current state is red then next currentState is GREEN
                currentState = GREEN;
                break;

            case GREEN:
                currentState = YELLOW;
                break;

            case YELLOW:
                currentState = RED;
                break;

            default:
                currentState = RED;
                break;
        }
    }

    return 0;
}