#include <stdio.h>

int factorial(int n) {
  int fact = 1;

  for (int i = 1; i <= n; i++) {
    fact *= i;
 }

  return fact;
}

int main() {
for (int i = 0; i <= 10; i++) {
  printf("factorial(%d) = %d\n", i, factorial(i));
  }
}
