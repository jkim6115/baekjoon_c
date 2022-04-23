#include <stdio.h>

int N = 0;

void Min_Max(int *arr, int length){
    int min = arr[0];
    int max = arr[0];

    for(int i=1; i<=length; i++){
        if(min > arr[i]){
            min = arr[i];
        } else if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("%d %d", min, max);
}

int main(){
    scanf("%d", &N);    
    int arr[N];
    int length = N-1;        

    for(int i=0; i<=length; i++){
        scanf("%d",&arr[i]);
    }

    Min_Max(arr, length);

    return 0;
}