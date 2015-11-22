/* 8. Napisz program rozmieszczający poniższe wzory oddzielnie jeden pod drugim.
Użyj pętli for do generowania wzorów. Do wypisywania gwiazdek należy użyć instrukcji
putchar('*') (powodującej wyświetlanie ich obok siebie). Uwaga: dwa ostatnie
wzory wymagają, by każdy wiersz zaczynał się od odpowiedniej liczby spacji.

*       ****    ****       *
**      ***      ***      **
***     **        **     ***
****    *          *    ****
*/

#include <stdio.h>

void print_pattern1(int ile_gwiazdek) {
  for(int i = 1; i <= ile_gwiazdek; i++) {
    putchar('*');
  }
  printf("\n");
}

void print_pattern2(int ile_gwiazdek) {
  for(int i = 1; i <= ile_gwiazdek; i++) {
    putchar('*');
  }
  printf("\n");
}

void print_pattern3(int ile_gwiazdek) {
  for(int i = 1; i <= ile_gwiazdek; i++) {
    if (ile_gwiazdek == 4) {
      putchar('****');
    }
    else if (ile_gwiazdek == 3) {
      putchar('***');
    }
    else if (ile_gwiazdek == 2) {
      putchar('**');
    }
    else if (ile_gwiazdek == 1) {
      putchar('*');
    }
  }
  printf("\n");
}

void print_pattern4(int ile_gwiazdek) {
  for(int i = 1; i <= ile_gwiazdek; i++) {
    putchar('*');
  }
  printf("\n");
}

int main() {
  int n = 4;
  for(int i = 1; i <= n; i++) {
    print_pattern1(i);
  }

  for(int i = 4; i >= 1; i--) {
    print_pattern2(i);
  }

  for(int i = 4; i >= 1; i--) {
    print_pattern3(i);
  }

  for(int i = 1; i <= n; i++) {
    print_pattern4(i);
  }
}
