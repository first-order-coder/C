#include <stdio.h>
#include <stddef.h>

typedef enum
{
    STATE_OFF,
    STATE_ON
} State;

typedef enum
{
    LIGHT_STOP,
    LIGHT_GO
} LightType;

typedef enum
{
    RELAY_DIRECTION,
    RELAY_ARM
} RelayType;

typedef enum
{
    COMMAND_LIGHT,
    COMMAND_RELAY,
    COMMAND_SLEEP
} CommandType;

typedef struct
{
    LightType light;
    State state;
} LightCommand;

typedef struct
{
    RelayType relay;
    State state;
} RelayCommand;

typedef struct
{
    unsigned int seconds;
} SleepCommand;

typedef union
{
  LightCommand lightCommand;
  RelayCommand relayCommand;
  SleepCommand sleepCommand;  
} CommandData;

typedef struct 
{
    CommandType type;
    CommandData data;
} Command;

void executeCommand(const Command *command)
{
    if (command == NULL)
    {
        return;
    }
    switch (command->type)
    {
    case COMMAND_LIGHT:
        if (command->data.lightCommand.light == LIGHT_STOP)
        {
            printf("STOP light");
        }
        else
        {
            printf("60 light");
        }

        if (command->data.lightCommand.state == STATE_ON)
        {
            printf(" -> ON\n");
        }
        else
        {
            printf(" -> OFF\n");
        }

        break;
    
    case COMMAND_RELAY:

        if (command->data.relayCommand.relay == RELAY_DIRECTION)
        {
            printf("DIRECTION relay");
        }
        else
        {
            printf("ARM relay");
        }

        if (command->data.relayCommand.state == STATE_ON)
        {
            printf(" -> ON\n");
        }
        else
        {
            printf(" -> OFF\n");
        }

        break;
    case COMMAND_SLEEP:
        printf("Wait for %u seconds\n", command->data.sleepCommand.seconds);

        break;
    
    default:
        printf("Unknow command\n");
        break;
    }
}

int main(void)
{
    Command stopToGoCommands[] = 
    {
        {
            .type = COMMAND_LIGHT,
            .data.lightCommand = 
            {
                .light = LIGHT_STOP,
                .state = STATE_OFF
            }
        },

        {
            .type = COMMAND_LIGHT,
            .data.lightCommand = 
            {
                .light = LIGHT_GO,
                .state = STATE_ON
            }
        },

        {
            .type = COMMAND_RELAY,
            .data.relayCommand = 
            {
                .relay = RELAY_DIRECTION,
                .state = STATE_ON
            }
        },

        {
            .type = COMMAND_RELAY,
            .data.relayCommand = 
            {
                .relay = RELAY_ARM,
                .state = STATE_ON
            }
        },

        {
            .type = COMMAND_SLEEP,
            .data.sleepCommand = 
            {
                .seconds = 3
            }
        },

        {
            .type = COMMAND_RELAY,
            .data.relayCommand = 
            {
                .relay = RELAY_ARM,
                .state = STATE_OFF
            }
        },

        {
            .type = COMMAND_RELAY,
            .data.relayCommand = 
            {
                .relay = RELAY_DIRECTION,
                .state = STATE_OFF
            }
        }
    };

    size_t numberOfCommands = 
        sizeof(stopToGoCommands) / sizeof(stopToGoCommands[0]);
    
    for (size_t i = 0; i < numberOfCommands; i++)
    {
        executeCommand(&stopToGoCommands[i]);
    }

    return 0;
}
