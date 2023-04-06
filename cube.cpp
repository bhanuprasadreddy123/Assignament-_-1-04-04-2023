#include<stdio.h>

int cube(int num) {
	return num*num*num;
}
int main() {
	int num;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	int result = cube(num);
	
	printf("The cube of number is %d : %d",num,result);
	
	return 0;
}