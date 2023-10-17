#include <stdio.h>

void swap(int j, int k) {
	if(j > k) {
		int temp = j;
		j = k;
		k = temp;
	}
}

int main() {
	int T;
	scanf("%d", &T);
	int alp[T], ch[T],lex;
	
	for(int i = 0; i < T; i++) {
		scanf("%d", &alp[i]); getchar();
		ch[i] = alp[i] + 96;
	}
	
	printf("Case #1: ");
    printf("%c", alp[0] + 96);
    printf("\n");
	
	bool swapped = true;
	for(int i = 0; i < T - 1; i++) {
		swapped = false;
		for(int j = 0; j < T - i - 1; j++) {
			int m = ch[j], n = ch[j+1];
			swap(m, n);
			swapped = true;
			
			printf("Case #%d: ", j + 2);
	        for (int k = 0; k <= j; k++) {
		        printf("%c", ch[k]);
		    }
		        printf("\n");
			}
			
		if(swapped == false) {
			break;
		}
	}
	
	return 0;
}
