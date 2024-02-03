#include <unistd.h>
#include <stdio.h>
int main()
{
    int pid = fork();
    if (pid < 0){
        printf("An error occured\n");
    }
    else if (pid == 0){
        execl("/bin/ls", "ls", NULL);
    }
    else {
        printf("parent!\n");
    }
    return 0;
}
