#include <stdio.h>

int main() {
  int n = 8;
  int t[n];

  printf("Podaj %d liczb calkowitych:\n", n);
  scanf("%d %d %d %d %d %d", &t[0], &t[1], &t[2], &t[3], &t[4], &t[5]);

  printf("Wczytano: %d %d %d %d %d %d\n", t[0], t[1], t[2], t[3], t[4], t[5]);
  printf("Od konca: %d %d %d %d %d %d\n", t[5], t[4], t[3], t[2], t[1], t[0]);
}
