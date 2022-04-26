#include <stdio.h>

int main(){
    int num1, num2;
    int arr[10] = {0, };
    int count = 0;

    for(int i=0; i<=9; i++){
        scanf("%d", &arr[i]);
        arr[i] %= 42;
    }

    for(int j=0; j<10; j++){
        for(int k=0; k<42; k++){
            if(arr[j] == k){
                count += 1;
            }
        }
    }

    printf("%d", count);

    return 0;
}