/* 7. Napisz program, który wczyta liczbę rzeczywistą i wypisze jej odwrotność
oraz jej pierwiastek kwadratowy. Program nie powinien obliczać odwrotności
liczby 0 oraz pierwiastka z liczby ujemnej. W takiej sytuacji zamiast obliczeń
program powinien wypisać odpowiedni komunikat. */

#include <stdio.h>
#include <math.h>
int main() {
  double x;
  printf("Podaj liczbe rzeczywista: ");
  scanf("%lf", &x);

  if(x < 0) {
    printf("Error: Liczba mniejsza od zera, brak pierwiastka kwadratowego\n");
  }
  else {
    double p = sqrt(x);
    printf("Pierwiastek z liczby %.4f to %.4f\n", x, p);
  }

  if(x == 0) {
    printf("Error: LIczba równa 0, brak liczby odwrotnej\n");
  }
  else {
    double odw = pow(x, -1.00);
    printf("Odwrotnosc liczby %.4f to %.4f \n", x, odw);
  }
}
