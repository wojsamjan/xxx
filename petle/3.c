/* Program ten wczytuje dwie liczby calkowite a i b (a<b) a nastepnie
wypisuje wszystkie liczby calkowite pomiedzy a i b. */

#include <stdio.h>
int main() {
  int a, b;

  printf("Podaj liczbe calkowita a: ");
  scanf("%d", &a);
  printf("Podaj liczbe calkowita b: ");
  scanf("%d", &b);

      int y = a + 1;
      /* #include <stdio.h>
      int main() {
          int y = 1;
          while (y<=2010) {
              printf("%d\n", y);
              y = y * 2;
          }
      } ściagawka petli z innego zadania*/
      while (y < b) {
        printf("%d ", y);
        y = y + 1;
      }
      printf("\n");
}
