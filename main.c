#include <stdio.h>

typedef  struct {
  char name[100];
  int age;
} person;

int main(void) {

  person person1;

  printf("==========================================\n");

  printf("Digite seu nome: ");
  fflush(stdin);
  fgets(person1.name, 100, stdin);

  printf("Digite sua idade: ");
  scanf("%d", &person1.age);

  printf("==========================================\n");
  
  printf("Seu nome é: %s  \n", person1.name);
  printf("Sua idade é %d \n", person1.age);
  
  
  return 0;
}