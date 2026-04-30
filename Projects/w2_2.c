#include <stdio.h>

enum Mode {
    MODE_IDLE,
    MODE_SETTINGS,
    MODE_RUNNING
};

void print_mode(enum Mode mode)
{
    switch (mode) {
        case MODE_IDLE:
            printf("Current mode: MODE_IDLE\n");
            break;

        case MODE_SETTINGS:
            printf("Current mode: SETTINGS\n");
            break;    
        
        case MODE_RUNNING:
            printf("Current mode: MODE_RUNNING\n");
            break;    
        
        default:
            printf("Unknown mode\n");
            break;
    } 
}

int main(void)
{
    enum Mode currentMode = MODE_IDLE;
    int choice;
    int running = 1;

    while(running) {
    printf("\n");
    print_mode(currentMode);

    printf("\nMenu:\n");
    printf("1 = go to settings\n");
    printf("2 = start running\n");
    printf("3 = stop\n");
    printf("4 = exit\n");
    printf("Enter choice: ");

    scanf("%d", &choice);

    switch (choice) {
        case 1:
            currentMode = MODE_SETTINGS;
            break;
        
        case 2:
            currentMode = MODE_RUNNING;
            break;

        case 3:
            currentMode = MODE_IDLE;
            break;
        
        case 4:
            running = 0;
            break;
        
        default:
            printf("Invalid Choice\n");
            break;
        } 
    }
    
    return 0;
}

// executing sequence is 1) Print current mode -> 2) Show Menu -> 3) User enters choice -> 4) switch(choice) changes currentMode -> 5) Loop repeats -> 6) print_mode(currentMode) prints the new mode