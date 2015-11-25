/* 8. Napisz program, który prosi użytkownika o wprowadzenie trzech liczb
z klawiatury, a następnie wypisze sumę, iloczyn, najmniejszą i największą
z wprowadzonych liczb.

Dialog na terminalu powinien wyglądać tak:

Wprowadź trzy liczby całkowite: 1 2 3
Suma wynosi: 6
Iloczyn wynosi: 6
Najmniejsza liczba to: 1
Największa liczba to: 3 */

#include <stdio.h>
#include <math.h>

int main () {
  double n1, n2, n3, min, max, suma, iloczyn;
  printf("Wprowadz trzy liczby: ");
  scanf("%lf%lf%lf", &n1, &n2, &n3);

  min = n1;
  max = n1;
  if(n2 < n1) {
    min = n2;
  }
  else {
    max = n2;
  }

  if(n3 < min) {
    min = n3;
  }

  if(n3 > max) {
    max = n3;
  }
  suma = n1 + n2 + n3;
  iloczyn = n1 * n2 * n3;
  printf("Suma wynosi: %.4f\n", suma);
  printf("Iloczyn wynosi: %.4f\n", iloczyn);
  printf("Najmniejsza liczba to: %.4f\n", min);
  printf("Największa liczba to: %.4f\n", max);
}
