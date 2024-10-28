// #include <stdio.h>

// int sum(int arr[], int size);

// int main(){
//     int arr[10];
//     printf("Welcome to Sum and Average on Array \n");
//     for(int i = 0; i<10; i++){
//         printf("Please enter %dth elemant", (i+1));
//         scanf(" %d", &arr[i]);
//     }
//     int addition = sum(arr, 10);
//     float avg = addition / 10;
//     printf("The sum of the number is %d and theire are average is %2f", addition, avg);
// }

// int sum (int arr[], int size){
//     int addition = 0;
//     for(int i =0; i<size; i++){
//         addition += arr[i];
//     }
//     return addition;
// }

// #include <stdio.h>

// int occurrences(int arr[], int size, int element);

// int main(){
//     int arr[] = {3, 12, 42, 54, 2, 3, 2, 6, 42, 12};
//     printf("Welcome to finding element occurrences \n");

//     int result = occurrences(arr, 10, 3);
//     printf("\nThe number of occurrences of 3 %d", result);
//     result = occurrences(arr, 10, 2);
//     printf("\nThe number of occurrences of 2 %d", result);
//     result = occurrences(arr, 10, 12);
//     printf("\nThe number of occurrences of 12 %d", result);
//     result = occurrences(arr, 10, 42);
//     printf("\nThe number of occurrences of 42 %d", result);
// }

// int occurrences(int arr[], int size, int element){
//     int counter = 0;
//     for(int i = 0; i<size; i++){
//         if(arr[i]== element){
//             counter++;

//         }
//     }
//     return counter;
// }

#include <stdio.h>

int main(){
    int arr[10];
    printf("Welcome to max and min of array \n");

    for(int i = 0; i < 10; i++){
        printf("Please enter the %d element: ", (i + 1));
        scanf(" %d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i<10; i++){
        if(max <arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("%d max element array %d min element of array", max, min);
}