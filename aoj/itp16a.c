#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int a[100];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    if (i) printf(" ");
    printf("%d", a[n - i - 1]);
  }
  printf("\n");
}
