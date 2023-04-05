#include<stdio.h>
int main(){
	int start, end;
	printf("Enter starting number: ");
	scanf("%d", &start);
	printf("Enter end number: ");
	scanf("%d", &end);
	
	for (int num = start; num <= end; num++)  {
		if (num % 5 == 0) {
			printf("%d ", num);
		}
	}
	
	return 0;
}