#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main()
{
    int pid = fork();
    if (pid < 0){
        printf("An error occured!\n");
        return 1;
    }
    else if (pid == 0){
        printf("hello ");
    }
    else {
        wait(0);
        printf("goodbye");
    }
    return 0;
}
