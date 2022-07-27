#include <stdio.h>

int sum(int a, int b);
int dif(int a, int b);
int mult(int a, int b);
int divv(int a, int b);
int main() {
  float a1 = 0, b1 = 0;
  int check = scanf("%f %f", &a1, &b1);
  int a = (int)a1;
  int b = (int)b1;

  if (a1 - a != 0 || b - b1 != 0 || check != 2)
    printf("n/a");
  else {
    printf("%d %d %d ", sum(a, b), dif(a, b), mult(a, b));
    if ((int)b == 0)
      printf("n/a");
    else
      printf("%d", divv(a, b));
  }
  return 0;
}

int sum(int a, int b) { return (a + b); }
int dif(int a, int b) { return (a - b); }
int mult(int a, int b) { return (a * b); }
int divv(int a, int b) {
  if (b != 0) {
    return (a / b);
  } else
    return a;
}
