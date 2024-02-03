#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main()
{
    int pid = fork();
    if (pid < 0){
        printf("An error occured\n");
    }
    else if (pid == 0){
        printf("In child! %d\n", getpid());
    }
    else {
        printf("%d\n", wait(0));
        printf("parent!\n %d\n", getpid());
    }
    return 0;
}
