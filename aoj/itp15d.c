#include <stdio.h>

int main() {
  int i = 1;
  int n;
  scanf("%d", &n);
  while(i <= n) {
    if (i % 3 == 0) {
      printf(" %d", i);
    } else {
      int tmp = i;
      while (tmp) {
        if (tmp % 10 == 3) {
          printf(" %d", i);
          break;
        }
        tmp /= 10;
      }
    }
    i++;
  }
  printf("\n");
  return 0;
}
