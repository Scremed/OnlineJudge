#include <stdio.h>

int main() {
	int T, N;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++){
		scanf("%d", &N);
		long long cmp[N], min[N], X[N], diff = 0;;
		
		for(int j = 0; j < N; ++j) {
			scanf("%lld", &X[j]);
			
			for(int k = 0; k < j; k++) {
				if(X[k] < X[k + 1]) {
					X[k] -= X[k+1];
					diff = X[k];
					cmp[k] = diff;
					
				} else  if(X[k] > X[k + 1]) {
					X[k] -= X[k+1];
					diff = X[k];
					cmp[k] = diff;
					
				} else {
					cmp[k] = 0;
				} 
				
			}
		}
		
		for(int j = 0; j < N; j++) {
			if(cmp[j] <= cmp [j+1]) {
				min[j] = cmp[j];
			} else {
				min[j] = cmp[j+1];
			}
		}
		printf("Case #%d: %lld\n", i + 1, min[i]);
	}
}
