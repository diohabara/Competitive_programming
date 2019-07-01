#include <stdio.h>

int main() {
  while(1) {
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    if (op == '?') {
      break;
    } else if (op == '+') {
      printf("%d\n", a + b);
    } else if (op == '-') {
      printf("%d\n", a - b);
    } else if (op == '*') {
      printf("%d\n", a * b);
    } else {
      printf("%d\n", a / b);
    }
  }
  return 0;
}
