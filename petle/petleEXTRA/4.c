#include <stdio.h>
#include <stdlib.h>

void wczytaj_liczbe_calkowita(int *n_p) {
  printf("Podaj liczbe calkowita wieksza od 0: ");
  scanf("%d", n_p);

  if (*n_p <= 0) {
    printf("Liczba musi byc wieksza od 0.\n");
    exit(1);
  }
}

int main() {
  int n, suma = 0;
  int i;

  wczytaj_liczbe_calkowita(&n);

  i=1;
  while (i <= n) {
    suma += i;
    i++;
  }
  printf("Suma: %d\n", suma);
}
