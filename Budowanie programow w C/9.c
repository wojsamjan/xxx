/* 9. Napisać program, który wypisze tabelkę wartości pierwiastka kwadratowego.
Program ma pytać o

    wartość poczatkową
    wartość końcową
    krok dla argumentu

i wypisywać tabelkę w podanym zakresie. Liczby powinny być wypisywane
z dokładnością czterech miejsc po przecinku. Na przykład, jeżeli podamy 1 jako
wartość poczatkową, 2 jako końcową i 0.5 jako krok, powinismy dostać:

1.0000  1.0000
1.5000  1.2247
2.0000  1.4142
*/

#include <stdio.h>
#include <math.h>
int main() {
  float wp, wk, ka;
  printf("Podaj wartosc poczatkowa: \n");   // wp
  scanf("%f", &wp);
  printf("Podaj wartosc koncowa: \n");      // wk
  scanf("%f", &wk);
  printf("Podaj krok dla argumentu: \n");   // ka
  scanf("%f", &ka);
  while ( wp <= wk) {
    printf("%.4f  %.4f  \n", wp, sqrt(wp));
    wp = wp + ka;
  }
}
