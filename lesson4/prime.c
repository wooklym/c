#include <stdio.h>

int main() {
  int i, j;

  i = 2;
  while (i < 100) {
    j = 2;
    while (j < i) {
      if (i % j == 0) {
        break;
      }
      j++;
    }

    if (i == j) {
      printf("%d\n", i);
    }

    i++;
  }
  return 0;
}
