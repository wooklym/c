#include <stdio.h>

int main() {
  int i = 0;
  int j;

  while (i < 10) {
    printf("i: %d\n", i);

    j = 0;
    while (j < 10) {
      if (j == 7) {
        j++;
        continue;
      }
      printf("  j: %d\n", j);
      j++;
    }

    i++;
  }

  return 0;
}
