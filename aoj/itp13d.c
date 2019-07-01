#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int cnt = 0;
  for (int i = a; i <= b; i++) {
    if (c % i == 0) {
      cnt++;
    }
  }
  printf("%d\n", cnt);
}
