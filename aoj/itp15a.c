#include <stdio.h>

int main() {
  int h, w;
  while(1) {
    scanf("%d %d", &h, &w);
    if (h == 0 && w == 0) {
      break;
    }
    for (int y = 0; y < h; y++) {
      for (int x = 0; x < w; x++ ) {
        printf("#");
      }
      printf("\n");
    }
    printf("\n");
  }
}
