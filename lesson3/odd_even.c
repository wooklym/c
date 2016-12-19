#include <stdio.h>

int main() {
  int i = 0;
  while (i <= 100) {
    printf("%d is ", i);

    if (i % 2 == 0) {
      printf("even");
    } else {
      printf("odd");
    }

    printf(" number\n");

    i += 1;
  }
  return 0;
}
