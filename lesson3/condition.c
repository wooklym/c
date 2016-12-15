#include <stdio.h>

int main() {
  if (!(1 > 4)) {
    printf("1 is not greater than 4\n");
  } else if (!0) {
    printf("0 if false\n");
  } else if (1) {
    printf("1 is true\n");
  } else {
    printf("else\n");
  }

  return 0;
}
