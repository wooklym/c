#include <stdio.h>

int main() {
  int i = 1;

  while (i < 1000) {
    if (i % 2 == 0) {
      printf("%d\n", i);
    }
    i = i + 1;
  }
  return 0;
}
