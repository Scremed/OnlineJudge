#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int IP[12];
		int check = 0;
		
		scanf("%d.%d.%d.%d.%d.%d", IP[0], IP[1], IP[2], IP[3], IP[4], IP[5], IP[6]);
		
		for(int j = 0; j < 12; j++) {
			while(IP[j] == 46 && j % 2 == 1) {
				check = 1;
			} 
			while(j % 2 == 0 && IP[j] <= 57 && IP[j] >=48) {
				check = 1;
			}
		}
		
		if(check == 1) {
			printf("Case #%d: YES\n", i+1);
		} else {
			printf("Case #%d: NO\n", i+1);
		}
		
	}
	
	return 0;
} 
