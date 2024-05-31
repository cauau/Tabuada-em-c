#include <stdio.h>

int main() {
  int numero, conta = 1, continha;

  printf("Escreva um numero inteiro:");
  scanf("%d", &numero);

  while (conta <= 10) {
    printf(" %d * %d = %d\n", numero, conta, numero * conta);
    conta++;
  }
  return 0;
}