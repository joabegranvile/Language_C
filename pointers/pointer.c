#include <stdio.h>

char * name = "Ricardo";

// Aloca uma variavel local na memoria, que e um ponteiro para um unico caracter

// define a local variable
int a = 1;

// define a pointer variable, an point it to a using the & operator
int * pointer_to_a = &a;

a =+ 1;

*pointer_to_a =+ 1;

printf("The value a is %d\n", a);

#include <stdio.h>

int main() {
  int n = 10;

  int * pointer_to_n = &n;

  *pointer_to_n += 1;

  /* testing code */
  if (pointer_to_n != &n) return 1;
  if (*pointer_to_n != 11) return 1;

  printf("Done!\n");
  return 0;
}
