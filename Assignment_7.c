#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void BubbleSortCount(int * arr, int n){

    for(int i=0; i<n-1; i++){
        int num_swaps=0;
        for(int j= 0; j<n-1-i;j++){

            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                num_swaps++;
            } 
        }

        printf("Iteration #%d: %d\n", i, num_swaps);
    }
}

int main(void){

    int * arr= (int*)malloc(sizeof(int)*9);

    arr[0]= 97;
    arr[1]= 16;
    arr[2]= 45;
    arr[3]= 63;
    arr[4]= 13;
    arr[5]= 22;
    arr[6]= 7;
    arr[7]= 58;
    arr[8]= 72;

    BubbleSortCount(arr,9);

    for (size_t i = 0; i < 9; i++)
    {
        printf("%d , ", arr[i]);
        
    }
}