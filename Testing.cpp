#include <stdio.h>

int main() {
	int a[10], min, max, sum;
	
	for(int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	
	int* ptr;
	for(ptr = a; ptr <= &a[10] ; ptr++) {
		sum += *ptr;
//		if(ptr+i < *ptr+10-i){
//			max = *ptr+1;
//		} else {
//		min = *ptr;
//		}
	} 
	
	printf("%d %d %d", sum);
}
