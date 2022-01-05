#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sa, i = 0;
    double arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    sa = sizeof(arr)/sizeof(double);
    printf("kol-vo %d \n", sa);

    for (i; i < sa; i++){
        printf("arr[%d]= %lf \n", i+1, arr[i]);
    }

    return(0);
}
