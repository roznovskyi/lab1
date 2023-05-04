#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void fm1(int ** arr, int arrsize){
    int size, x;

    *arr = malloc(sizeof(int) * arrsize);

    for (int i=0; i<arrsize; i++) {
        scanf("%d\n", &x);
        (*arr)[i] = x;
    }

}


void f1(int arr[], int size){

    int x1=0, x2=0, y1=1, y2=1;
    for (int i = 0; i < size; i++){
        if (arr[i] > 0){
            x1 += arr[i];
            y1 *= arr[i];
        }
        if (arr[i] < 0){
            x2 += arr[i];
            y2 *= arr[i];
        }

    }
    printf("sum of pos. numbers: %d\nsum of neg. numbers: %d\nmultipication of pos. numbers: %d\nmultiplication of neg. numbers: %d\n", x1, x2, y1, y2);
}

void f2(int arr[], int size){

    int max=0, max_pos;
    for (int i = 0; i < size; i++){
        if (arr[i]%3 == 0){
            for ( ; i < size; i++){

                if (arr[i]>max){
                    max = arr[i];
                    max_pos = i;
                }
            }
            printf("\nPosition: %d\nNumber: %d", max_pos, max);
            return;
        }

    }

}

void f3(int arr[], int size) {

    int arrr[size], m = 0;



    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                if (count >= 3) {
                    arrr[m] = arr[i];
                    m++;
                    break;





                }
            }
        }
    }

    printf("\n\n");

    int max = 0;

    for (int hh = 0; hh < m; hh++) {
        if (max<arrr[hh])
            max = arrr[hh];

    }
    printf("\nmax is %d", max);
}

void f4(int arr[], int size){

    int trig = 0;

    for(int i = 0; i < size; i++){
        if (arr[i]<0){
            arr[i] *= -1;
        }
    }

    for(int i = 0; i < size; i++){
        if (arr[i] > arr [i+1]){
            trig = 1;
            break;
        }
    }
    if(trig == 0){
        printf("the function is nondecreasing");
    }
    else{
        printf("the function is not nondecreasing");
    }
}

void f5(int arr[], int size){

}

int main() {
    int ** arr, size, wh=0, num;

    printf("\nselect a task: ");
    scanf("%d", &num);
    printf("\nselect a size of array: ");
    scanf("%d", &size);
    switch (num){
        case 1:
            printf("Знайти суму і добуток додатніх та від'ємних чисел\n");
            fm1(&arr, size);
            f1(arr, size);
            free(arr);
            break;
        case 2:
            printf("Знайти перше максимальне число після першого елемента, кратного 3\n");
            fm1(&arr, size);
            f2(arr, size);
            free(arr);
            break;
        case 3:
            printf("Знайти максимальний елемент серед тих, що повторуюються більше 3 разів\n");
            fm1(&arr, size);
            f3(arr, size);
            free(arr);
            break;
        case 4:
            printf("Чи є послідовність неспадною\n");
            fm1(&arr, size);
            f4(arr, size);
            free(arr);
            break;
        default:
            printf("does not exist");
    }


    return 0;
}