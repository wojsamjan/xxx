/* Napisz program, który wypisuje kolejne potęgi liczby 2
nie przekraczające 2010. */

#include <stdio.h>
int main() {
    int y = 1;
    while (y<=2010) {
        printf("%d\n", y);
        y = y * 2;
    }
}
