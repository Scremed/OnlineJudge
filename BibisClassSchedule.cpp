#include <stdio.h>

int main() {
    char x[5][11];
    long long a[5], b[5], c[5], d[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%10s %lld:%lld-%lld:%lld", 
		x[i], &a[i], &b[i], &c[i], &d[i]); 
		getchar();
    }

    for (int j = 0; j < 5; j++) {
        a[j] -= 1; c[j] -= 1;
        printf("%s %.2lld:%.2lld-%.2lld:%.2lld\n", 
		x[j], a[j], b[j], c[j], d[j]);
    }

    return 0;
}
