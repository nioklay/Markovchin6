#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {6, 7, 8, 9, 0};
    int i = 0, k = 1, *pArr;

    //проверка типа по размеру

    if (sizeof(int) == sizeof(arr[0]))
        printf("type int \n");
    else if (sizeof(float) == sizeof(arr[0]))
        printf("type float \n");
    else if (sizeof(double) == sizeof(arr[0]))
        printf("type double \n");
    else
        printf("type undefined \n");

    //вывод адресов

    for (i; i<5; i++){
        printf("&arr[%d] = %p \n", i, &arr[i]);
    }
    i = 0;//обнуление для следующего цикла

    //редактирование по адресам

    for (i; i<5; i++){
        pArr = &arr[i];
        *pArr = k;
        k += 1;
        printf("%d \n", arr[i]);
    }

    return(0);
}
