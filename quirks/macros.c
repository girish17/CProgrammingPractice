#include <stdio.h>
#define val 100
int main()
{
  printf("%d",val);
  #define val 1000
  printf("%d", val*10);
  return 0;
}
