#include <unistd.h>
#include <stdio.h>


int main()
{
    int x = 100;
    int pid = fork();
    if (pid < 0){
        fprintf(stderr,"An error occured!\n");
        return 1;
    }
    else if (pid == 0){
        printf("In child: %d\n", x);
    }
    else {
        x = 50;
        printf("In parent: %d\n", x);
    }
    return 0;
}
