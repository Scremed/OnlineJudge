#include <stdio.h>

bool isSubsetSum(int n[], int N, int sum) { //recursive, to find if its possible to find equal sum
    if (sum == 0) {
        return 1;
    }
    if (N == 0 && sum != 0) {
        return 0;
    }
    if (n[N - 1] > sum) {
        return isSubsetSum(n, N - 1, sum);
    }
    return isSubsetSum(n, N - 1, sum) || isSubsetSum(n, N - 1, sum - n[N - 1]);
}

int main() {
	int T, N;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		scanf("%d", &N);
		int n[N];
		
		int sum;
		for(int j = 0; j < N; j++) {
			scanf("%d", &n[j]);
			sum += n[j];
		}
		
		for(int j = 0; j < N; j++) {
			n[j] = n[j];
			if(sum % 2 != 0) { //if even, split is possible
				if(isSubsetSum(n, N, sum/2)) {
					printf("Case #%d: Yes\n", i+1);
				} else {
					printf("Case #%d: No\n", i+1);
				}
			}
		}
		
		
	}
	return 0;
}
