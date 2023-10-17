#include <stdio.h>

int Exchange(int B, int emptyBottles, int total) {
	if(emptyBottles >= B) {
		emptyBottles -= B;
		total++;
		emptyBottles++;
	} else {
		return (total + emptyBottles);
	}
	Exchange(B, emptyBottles, total);
	return total;
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int A, B;
		int emptyBottles, total;
		
		scanf("%d %d", &A, &B);
		total = A;
		emptyBottles = A;
		
		for(int i = A; i >= 0; i -= B) {
			total++;
		}
		
		Exchange(B, emptyBottles, total);
		
		printf("Case #%d: %d\n", i + 1, total);
	}
	return 0;
}
