/* 7. Napisz program, który ze stdin wczyta 6 liczb rzeczywistych do tablicy,
a następnie wypisze liczbę liczb dodatnich w niej zawartych. */

#include <stdio.h>
int main() {
  float tablica[6];

  printf("Podaj 6 liczb rzeczywistych: \n");
  scanf("%f %f %f %f %f %f", &tablica[0], &tablica[1], &tablica[2], &tablica[3], &tablica[4], &tablica[5]);

  int dodatnie = 0;
  int niedodatnie = 0;
  for (int i = 0; i < 6; i++) {
    float tab = tablica[i];
    if (tab > 0) {
      dodatnie = dodatnie + 1;
    }
    else if (tab <= 0) {
      niedodatnie = niedodatnie + 1;
    }
  }
  printf("Liczba liczb dodatnich tablicy wynosi: %d\n", dodatnie);
}
