#include <stdio.h> 

int main() {
	int  T; //testcases
	unsigned long long K, d = 1, distance =0; 
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		scanf("%llu", &K);
		
		while(distance < K){
			d++;
			distance = (d * (d + 1)) / 2;
		}
		
		printf("Case #%d: %llu\n", i + 1, d);
	}
	return 0;
}
