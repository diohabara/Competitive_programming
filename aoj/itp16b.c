#include <stdio.h>

int card[4][14];

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    char ch;
    int num;
    scanf("%c", &ch);
    scanf("%c %d", &ch, &num);
    if (ch == 'S') card[0][num]++; 
    else if (ch == 'H') card[1][num]++;
    else if (ch == 'C') card[2][num]++;
    else card[3][num]++;
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 1; j <= 13; j++) {
      if (!card[i][j]) {
        if (i == 0) {
          printf("S %d\n", j);
        } else if (i == 1) {
          printf("H %d\n", j);
        } else if (i == 2) {
          printf("C %d\n", j);
        } else {
          printf("D %d\n", j);
        }
      }
    }
  }
  return 0;
}
