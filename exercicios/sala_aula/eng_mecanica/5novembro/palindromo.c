/* Everaldo Gomes - 05/11/2012
 *
 * Programa verifica se uma string é palíndromo
 *
 *
 */

#include <stdio.h>
#include <string.h>

#define MAX 100

void  le_string(char **s);
void  eh_palindromo(char *s, char **r);
void  imprime_resultado(char *r);


int main(void){
  char s[MAX + 1], *r;
  s[0] = '\0';
  le_string(&s);
  eh_palindromo(s,&r);
  imprime_resultado(r);
  return 0;
}

void  le_string(char **s){
  scanf("%s", s);

}

void  eh_palindromo(char *s, char **r){
  int palindromo = 1; //assume que é palindromo
  int i, ultimo;

  for(i = 0, ultimo = strlen(s) - 1; ultimo != -1 &&
      s[i] == s[ultimo]
      && i <= ultimo; i++, ultimo--);

  if (i < ultimo) palindromo = 0;
  if(ultimo == -1) palindromo = 1;


  if (palindromo) *r = strdup("sim");
  else *r = strdup("não");

}

void  imprime_resultado(char *r){
  printf("%s\n", r);
}




