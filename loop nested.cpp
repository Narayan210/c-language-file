#include <stdio.h>

int main() {
  int i,j;
  char str[]="UNIVERSITY" ;
  for(i=0; i<=9;i++){
    for(j=0; j<i; j++)
    {
      printf("%c", str[j]);
    }
    printf("/n");
}
return 0;
}
