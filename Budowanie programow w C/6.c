/* 6. Napisz program, który wczyta liczbę rzeczywistą i wypisze jej pierwiastek
kwadratowy. W wypadku podania liczby ujemnej, program powinien wypisać
komunikat o błędzie oraz zakończyć działanie. */

#include <stdio.h>
#include <math.h>
int main() {
  double x;
  printf("Podaj liczbe rzeczywista, dla ktorej zostanie wyliczony pierwiastek kwadratowy: ");
  scanf("%lf", &x);

  if(x < 0) {
    printf("Error: Liczba mniejsza od zera, brak pierwiastka kwadratowego\n");
  }
  else {
    double p = sqrt(x);
    printf("Pierwiastek z liczby %.4f to %.4f\n", x, p);
  }
}
