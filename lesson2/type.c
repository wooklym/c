#include <stdio.h>

int main() {
  char c = 'A';
  int i = 123;
  float f = 123.4;
  double d = 123123.43254;

  printf("%c\n", c);
  printf("%d\n", i);
  printf("%10.2f\n", f);
  printf("%10.2f\n", d);

  d = i;
  printf("%d\n", d);
  
  return 0;
}
