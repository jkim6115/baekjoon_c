#include <stdio.h>

double Operation(int arr[], int N){
	int i;
	double temp = 0;
	double average;
	int max = arr[0];

	for(i=1; i<N; i++){ //최댓값 찾기
		if(max < arr[i]){
			max = arr[i];
		}
	}

	for(int j=0; j<N; j++){
		temp += arr[j] / (double)max * 100;
	}

	average = temp/(double)N;

	return average;
}

int main() {
	int N;
	scanf("%d", &N);
	int arr[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	printf("%lf\n", Operation(arr, N));

	return 0;
}