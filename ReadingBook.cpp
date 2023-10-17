#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	long long N, X; //book pages, go to page
	
	for(int i = 0;i < T; i++) {
		long long flip = 0;
		scanf("%lld %lld", &N, &X); getchar();
		long long pageB= N, pageF = 1;
		
		if(X != 1 && X != N) {
			while(pageF < X && pageB > X) {
				pageF += 2;
				pageB -= 2;
				flip++;
			}
		} else {
			flip = 0;
		}
		
		if(X != 1 && X != N && N % 2 != 0 && (N-1) == X) {
			flip = 0;
		} 
		
		printf("Case #%d: %lld\n", i + 1, flip);
	}

	return 0;
}
