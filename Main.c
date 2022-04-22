#include <stdio.h>

int Num = 0;
int count = 0;

int New_number(int N){
    int N1, N10;
    int temp;

    N1 = N % 10;
    N10 = N / 10;
    temp = (N1 + N10) % 10;

    int new_num = (N1*10) + temp;
    count++;
    
    if(new_num == Num){
        return count;
    } else {
        return New_number(new_num);
    }
}

int main(){
    scanf("%d", &Num);
    if(Num<10){
        Num = Num*10;
    }
    
    printf("%d",New_number(Num));

    return 0;
}