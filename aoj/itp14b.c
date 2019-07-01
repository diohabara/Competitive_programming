#include <stdio.h>

int main(){
  double r;
  const double p = 3.141592653589;
  scanf("%lf", &r);
  printf("%lf %lf\n", r*r*p, 2*p*r);
  return 0;
}
