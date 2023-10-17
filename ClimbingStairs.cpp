#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	
	int A[N];
	for(int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	
	int count = 0, num[1000];
	for(int i = 0; i < N; i++) {
		int a = A[i+1];
		if(A[0] == 1) {
			count = 1;
		}
		if(a == (A[i] + 1)) {
			count ++;
		} else {
			num[i] = A[i];
			printf("%d\n", i)
		}
	}
	for(int i = 0; i < N; i++) {
		printf("%d ", num[i]);
	}
}
