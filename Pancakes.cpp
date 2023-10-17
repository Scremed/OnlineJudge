#include <stdio.h>

int main() {
	int T, N[10000], total[10000];
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int cuts = 0, temp = 1;
		scanf("%d", &N[i]);
		for(int j = 0; j <= N[i]-1; j++) {
			temp += j;
			total[j] = temp;
		}
	}
	
	for(int i = 0; i < T; i++) {
		printf("Case #%d:", i+1);
		
		for(int j = 0; j <= N[i]-1; j++) {
			printf(" ");
			printf("%d", total[j]);
		}
		printf("\n");
	}
	return 0;
}
