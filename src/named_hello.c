#include <stdio.h>
int main() {
  int name = 0;
  printf("Введите число в качестве имени:");
  while (scanf("%d", &name) != 1) {
    printf("\nОшибка ввода. Попробуйте снова:");
  }
  printf("Hello, %d!", name);
  return 0
}
