#include <stdio.h>

int main() {
  for (int i = 0, j = 0; i < 100 && j < 10; i += 2, j += 3) {
    printf("%d, %d\n", i, j);
  }
  return 0;
}
