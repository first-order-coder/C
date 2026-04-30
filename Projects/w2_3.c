#include <stdio.h>

enum Mode { //enum is stored as an integer
    MODE_OFF,
    MODE_STANDBY,
    MODE_ACTIVE,
    MODE_ERROR
};

void print_mode(enum Mode mode)
{
    switch(mode){ // we use switch when we have one variable and many exact values to go through
        case MODE_OFF:
            printf("Current Mode: MODE_OFF\n");
            break;
        case MODE_STANDBY:
            printf("Current Mode: MODE_STANDBY\n");
            break;
        case MODE_ACTIVE:
            printf("Current Mode: MODE_ACTIVE\n");
            break;
        case MODE_ERROR:
            printf("Current Mode: MODE_ERROR\n");
            break;
    }
}

void print_menu(void)
{
    printf("\nMenu:\n");
    printf("1 = power on\n");
    printf("2 = start active mode\n");
    printf("3 = go to standby\n");
    printf("4 = trigger error\n");
    printf("5 = reset error\n");
    printf("6 = power off\n");
    printf("7 = exit program\n");
    printf("\n");
    printf("Enter choice: ");
}

int main(void)
{
    enum Mode currentMode = MODE_OFF;
    int choice;
    int running = 1;

    while(running){
        print_mode(currentMode);
        print_menu();

        scanf("%i", &choice);

        switch(choice)
        {
            case 1: //if choice is equal to 1 then the preceeding code will execute
                currentMode = MODE_STANDBY;
                break;   
            case 2:
                currentMode = MODE_ACTIVE;
                break;   
            case 3:
                currentMode = MODE_STANDBY;
                break;   
            case 4:
                currentMode = MODE_ERROR;
                break;  
            case 5:
                currentMode = MODE_STANDBY;
                break;   
            case 6:
                currentMode = MODE_OFF;
                break;  
            case 7:
                running = 0;
                break;

            default:
                printf("Invalid Character\n");
                break;
        }
    }

    printf("Program exited.\n");
    
    return 0;
}
