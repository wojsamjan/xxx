/* 6. Napisz program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy, a następnie wyszuka
i wypisze największą i najmniejszą liczbę umieszczoną w tej tablicy. */

#include <stdio.h>
int main() {
  float tablica[6];

  printf("Podaj 6 liczb rzeczywistych: \n");
  scanf("%f %f %f %f %f %f", &tablica[0], &tablica[1], &tablica[2], &tablica[3], &tablica[4], &tablica[5]);

  float min = tablica[0];
  float max = tablica[0];
  for (int x = 0; x < 6; x++) {
    float tab = tablica[x];
    if (tab > max) {
      max = tab;
    }
    else if (tab < min) {
      min = tab;
    }
  }
  printf("min = %f\nmax = %f\n", min, max);
}
