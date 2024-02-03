#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int fd = open("hello.txt", O_RDWR);
    int pid = fork();
    if (pid < 0){
        printf("An error occured!\n");
        return 1;
    }
    else if (pid == 0){
        printf("In child: %d\n", fd);
        write(fd, "hello from child 1\n", strlen("hello from child 1\n"));
    }    
    else {
        printf("In parent: %d\n", fd);
        write(fd, "hello from parent 1\n", strlen("hello from parent 1\n"));
    }
    return 0; 
}
