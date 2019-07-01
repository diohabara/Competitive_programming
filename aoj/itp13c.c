#include <stdio.h>

int main() {
  while(1) {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0) {
      break;
    }
    x < y ? printf("%d %d\n", x, y) : printf("%d %d\n", y, x);
  }
  return 0;
}
