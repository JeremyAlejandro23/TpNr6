#include <stdLib.h>
#include <stdio.h>

int main() {
	int n = 7;
	int vec[7];
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &vec[i]);
	}
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (vec[j] > vec[j + 1]) {
				int temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d ", vec[i]);
	}
	
	return 0;
}
