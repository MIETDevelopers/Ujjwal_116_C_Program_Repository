#include <stdio.h>

int main() {
  int values[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("Displaying integers: \n");

  // printing elements of an array
  for(int i = 0; i < 10; ++i) {
    printf("%d\n", values[i]);
  }
  return 0;
}