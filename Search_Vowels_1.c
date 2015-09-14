#include <stdio.h>
#include <stdlib.h>

typedef char *string;
string _vogais = "aeiou";

void vogais( string s ) {
  int i, j;
  for (i=0; s[i] != '\0'; i++) 
    for (j=0; _vogais[j] != '\0'; j++)
      if (tolower(s[i]) == _vogais[j]) putchar(s[i]);
  putchar('\n');
}

void vogais2( string s ) {
  char *p, *q;
  for (p=s; *p != '\0'; p++) 
    for (q=_vogais; *q != '\0'; q++)
      if (tolower(*p) == *q) putchar(*p);
  putchar('\n');
}

int main() {
  char c[100];
  string s = "SUPER MARIO BROS";
  int i;
  for (i = 0; s[i] != '\0'; i++) c[i] = s[i];
  c[i] = '\0';
  vogais(s);
  vogais2(s);

  return 0;
}
