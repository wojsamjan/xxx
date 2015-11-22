/* 5. Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy,
a następnie wypisze zawartość tej tablicy od początku i od końca. */

#include <stdio.h>
int main() {
  int a, b, c, d, e, f;
  int tablica[6] = {a, b, c, d, e, f};

  printf("Podaj 6 licz calkowitych: \n");
  scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

  /* int y = a + 1;
  while (y < b) {
    printf("%d ", y);
    y = y + 1;
  }
  printf("\n"); */

  printf("%d %d %d %d %d %d\n", a, b, c, d, e, f);
  printf("%d %d %d %d %d %d\n", f, e, d, c, b, a);
}
