#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    int sleep_duration = 0; // variable to store sleep duraiton in seconds

    // implement error check first
    if (argc < 2) // user only input "sleep" instead of "sleep X"
    {
        fprintf(2,"Error: input a sleep duration");
        exit(1);
    }

    // change from string input of argv[1] to integer.
    sleep_duration = atoi(argv[1]);

    // call the sleep function
    if (pause(sleep_duration) < 0) // check if pause() returns an error
    {
        fprintf(2,"Error: sleep failed");
        exit(1);
    }
    else
    {
        exit(0); // exit with success
    }
}