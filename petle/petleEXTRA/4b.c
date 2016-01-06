#include <stdio.h>
#include "helper.h"

// n =4
// suma = 1 + 2 + 3 + 4 = 10
// n = 1
// suma = 10

int main() {
  int n, suma = 0;
  size_t i; // zmienna na kolejne liczby od 1 do n

  wczytaj_liczbe_calkowita(&n);

for (i = 1; i <= n; i++) {
    suma += i;
  }
  printf("Suma: %d\n", suma);
}
