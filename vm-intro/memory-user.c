#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sz = atoi(argv[1]);
    int time = atoi(argv[2]);
    char arr[sz];
    int index = 0;
    while(time--){
        if (index == sz){
            index = 0;
        }
        arr[index] = 1;
        index += 1;
    }
}
