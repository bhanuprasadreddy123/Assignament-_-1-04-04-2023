#include <stdio.h>

int sum(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n + sum(n-1);
  }
}

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

int lcm(int a, int b) {
  return (a * b) / gcd(a, b);
}

int main() {
  int n, num;
  
  printf("Enter a positive integer N: ");
  scanf("%d", &n);

  printf("The sum of the first %d natural numbers is %d.\n", n, sum(n));
  
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  
  printf("The LCM of %d and the sum of the first %d natural numbers is %d.\n", num, n, lcm(num, sum(n)));
  
  return 0;
}