#include <stdio.h>

int main() {
	int N, M;
	
	scanf("%d %d", &N, &M);
	char n[N];
	int m[M];
	
	for(int i = 0; i < N; i++) {
		scanf("%s", n[i]);
	}
	
	for(int i = 0; i < M; i++) {
		scanf("%s", m[i]);
	}
	
	int* ptr = &m;
	for(int i = 0; i < M; i++) {
		scanf("%s", m[i]);
	}                            
	
}
