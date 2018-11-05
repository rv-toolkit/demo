#include <stdlib.h>
#include <stdio.h>

int main() {
  int x;
  printf("%d\n", (x = 1) + (x = 2));
  return 0;
}

