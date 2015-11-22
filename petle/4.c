/* 4. Napisz program, który wyliczy sumę liczb naturalnych od 1 do liczby n
 podanej przez użytkownika. Kiedy użytkownik poda liczbę mniejszą niż 1,
to program powinien wypisać stosowny komunikat o błędzie. */

/* int y = a + 1;
while (y < b) {
  printf("%d ", y);
  y = y + 1;
}
printf("\n"); */

#include <stdio.h>
int main() {
  int n;
  int Suma = 0;

  printf("Podaj liczbe n: ");
  scanf("%d", &n);

  if (n < 1) {
    printf("Error: Podana liczba jest mniejsza od 1\n");
  }
  else {
    int y = 1;
    while (y <= n) {
      printf("%d ", y);
      Suma += y;
      y = y + 1;
    }
    printf("\nSuma = %d\n", Suma);
  }
}
