#include <stdio.h>

void strCpy(char* s, char* d)
{
 int i=0;
 while(s[i] != '\0')
 {
   d[i] = s[i];
   i++;
 }
  d[i] = '\0';

}

int main(void)
{
 char *s = "source";
 char *d = "destination";

 printf("\nBefore copy: \n");
 printf("s: %s, d: %s\n", s, d);

 strCpy(s, d); 

 printf("\nAfter copy: \n");
 printf("s: %s, d: %s\n", s, d);
 
 return 0;
}
