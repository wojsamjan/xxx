/* Napisz program wyświetlający poniższą szachownicę:

* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *

*/

#include <stdio.h>

int main() {
  for(int i = 0; i < 4; i++) {
    puts("* * * * * * * *");
    puts(" * * * * * * * *");
  }
}
