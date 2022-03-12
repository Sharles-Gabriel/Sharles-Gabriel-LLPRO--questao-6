#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int sexo;
float altura, p_ideal;

int main() {
  int sexo;
  float alt, p_ideal;
  
  printf("Peso ideal da pessoa por altura e sexo\n");
  printf("______________________________________\n");
  
  printf("Digite a altura de qualquer pessoa: ");
  scanf("%f", &alt);
  
  printf("Qual é o sexo da pessoa?\n");
  printf("Masculino-1  Feminino-2:");
  scanf("%d", &sexo);
  
  if (sexo >= 1) {
    p_ideal = 72.7 * alt - 58;
    printf("O seu peso ideal para a sua altura é: %1.f", p_ideal);
  }
  else {
    p_ideal = 62.1 * alt - 44.7;
    printf("O seu peso ideal para a sua altura é: %1.f", p_ideal);
  }
}
