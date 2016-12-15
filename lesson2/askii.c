#include <stdio.h>

int main() {
  int i, j;
  for (i = 0; i < 100; i++) {
    for (j = 0; j < 26; j++) {
      printf("%c", j + 65);
    }
    printf("\n");
  }

  return 0;
}
