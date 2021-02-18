#include <stdio.h>
int main() {
  int i;
  for (i = 42; i >= 14; i = i - 1);
  printf("%d\n", i);
}
