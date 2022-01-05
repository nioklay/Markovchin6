#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = -1, i;

    int x[3], y[3];

    for (int i = 0; i <= 2; i++)
    {
        printf("Input x[%d]: ", i+1);
        scanf("%d", &x[i]);
        printf("Input y[%d]: ", i+1);
        scanf("%d", &y[i]);
    }

    printf("Input x[4]: ");
    scanf("%d", &x[3]);
    printf("Input y[4]: ");
    scanf("%d", &y[3]);

    //ошибки компил€ции нет, запись "четвертого" элемента в массив происходит посредством замены нулевого элемента

    printf("%d %d %d \n", x[0], x[1], x[2]);
    printf("%d %d %d \n", y[0], y[1], y[2]);
    return 0;
}
