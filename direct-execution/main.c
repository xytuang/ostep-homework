#include <sys/time.h>
#include <stdio.h>

int main()
{
    struct timeval tv1;
    struct timeval tv2;
    gettimeofday(&tv1, NULL);
    gettimeofday(&tv2, NULL);
    printf("%d\n", tv2.tv_usec - tv1.tv_usec);
    return 0;
}
