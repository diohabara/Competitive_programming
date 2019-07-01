#include "stdio.h"
int a[4];
void sort(void) {
  for (int i = 0; i < 3; i++) {
    for (int j = i; j < 3; j++) {
      if (a[i] > a[j]) {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }
}

int main() {
  scanf("%d %d %d", &a[0], &a[1], &a[2]);
  sort();
  printf("%d %d %d\n", a[0], a[1], a[2]);
}
