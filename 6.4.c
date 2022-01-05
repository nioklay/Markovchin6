#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, y[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int vozr_10(int x[10]){
        int a = 1, i = 0;
        for (i; i < 9; i++){
            if (x[i] < x[i + 1])
                a *= 1;
            else if (x[i] >= x[i+1])
                a *= 0;
        }

        if (a == 1)
            printf("true");
        else
            printf("false");
    }

    vozr_10(x); // перебирает элементы массива, при несоблюдении условия (исключительное возрастание) зануляет маркер "а", что провоцирует вывод "false"

    int index_10(int arr[10]){
        int a = -1, x, i = 0;
        scanf("%d", &x);
        for (i; i<10; i++){
            if (x == arr[i])
                break;
        }

        a = i;
        printf("%d", a);
    }

    index_10(x); // перебирает элементы массива, останавливая цикл на первом совпадении

    float proizv_10(int arr[10]){
        int k = 8, i, j, p = 1;
        float sum;
        for (i = 0; i < 10; i++) {
            if (arr[i] < 0){
                k = i;
                break;
            }
        }
        for (i = 0; i < k; i++) {
            for (j = 0; j <= i; j++) p *= arr[i];
            sum += p;
        }
        printf("%f", sum);
        }

    proizv_10(x);

    int task_4(int arr[20]){
        int max = arr[0] + arr[19];
        for (int i = 1; i < 10; i++)
            if (arr[i] + arr[19 - i] > max)
                max = arr[i] + arr[19 - i];
        printf("%d", max);
    }

    task_4(y);

    int task_5(int arr[20]){
        int min = arr[0] * arr[1];
        for (int i=1; i < 19; i++) {
            if (arr[i] * arr[i+1] < min)
                min = arr[i] * arr[i+1];
        }
    printf("%d", min);
    }

    task_5(y);

    return(0);
}
