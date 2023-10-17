#include <stdio.h>

int main() {
	int T;
	double R, H;
	double pi = 3.14;
	
	scanf("%d", &T);
	double total[T];
	
	for(int i = 0; i < T; i++) {
		scanf("%lf %lf", &R, &H);
		total[i] = (2.0 * pi * R * H) + (2.0 * pi * (R*R));
	}
	
	for(int i = 0; i < T; i++) {
		printf("Case #%d: %.2lf\n", i+1, total[i]);
	}
	
	return 0;
}
