#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N, cor = 0, fal = 0;
		scanf("%d", &N); getchar();
		char ans[N], key[N];
		
		for(int j = 0; j < N; j++) {
			scanf("%[^\n]c", ans[j]); getchar();
		}
		
		for(int k = 0; k < N; k++) {
			scanf("%[^\n]s", key[k]); getchar();
		}
		
		
		for(int l = 0; l < N; l++) {
			if(ans[l] == key[l]){
				cor++;
			} else {
				fal++;
			}
		}
		
		int tot = cor+fal;
		int score = cor/tot * 100;
		
		printf("Case #%d: %d\n", i+1, score);
	}
}
