#include <stdio.h>
#include <math.h>
double func(double x);

int main() {
  double x = 0;
  int check = 0;
  check = scanf("%lf", &x);
  if (check == 0 || x == 0) {
    printf("n/a");
    return 0;
  }
  double result = 0;
  result = func(x);
  printf("%.1lf", result);

  return 0;
}

double func(double x) {
  double result = 0;
  result = 7 * pow(10, -3) * pow(x, 4) +
           ((22.8 * pow(x, 1. / 3) - pow(10, 3)) * x + 3) / (pow(x, 2) / 2) -
           x * pow((10 + x), 2 / x) - 1.01;
  return result;
}
