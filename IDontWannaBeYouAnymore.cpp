#include <stdio.h>

int main() {
	int T, N;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		scanf("%d", &N); getchar();
		char S[N], s[N];
		scanf("%[^\n]s", &S); getchar();
		int n = N, k = 0;
		
		for(int j = 0; j < N; j++) {
			if(S[j] >= 61 && S[j] <= 122) {
				s[k++] = S[j];
				n--;
			}
		}
		s[k] = '\0';
		
		printf("Case #%d: %s\n", i + 1, s);
	}
}
