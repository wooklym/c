#include <stdio.h>

void justPrint() {
  printf("just print\n");
}

int returnTwo() {
  printf("I return 2\n");
  return 2;
}

int main() {

  justPrint();

  int a = returnTwo();

  printf("a is %d\n", a);
}
