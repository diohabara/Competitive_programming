#include <stdio.h>

const int INF = 1e9;

int main() {
  long long sum = 0;
  int min = INF, max = -INF;
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    sum += x;
    min = x < min ? x : min;
    max = max < x ? x : max;
  }
  printf("%d %d %lld\n", min, max, sum);
  return 0;
}
