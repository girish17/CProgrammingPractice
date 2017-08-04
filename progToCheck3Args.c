#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
int isEqual(char* s, char* t)
{
  if(strcmp(s,t) == 0)
  {
    return TRUE;
  }
  else
    return FALSE;
}

int main(int argc, char* argv[])
{
 int i=0, j=0, k=0;
 if(argc > 1)
 {
   for(i=1; i<=argc; i++)
   {
        
   }
 }
 /*if(argc == 4)
 {
   if(strcmp(argv[1],argv[2]) == 0)
   {
     i++;   
   }
   if(strcmp(argv[2],argv[3]) == 0)
   {
     i++;
     j++;
   }
   if(strcmp(argv[1],argv[3]) == 0)
   {
     i++;
     k++;
   }
   switch(i)
   {
       case 0:
         printf("\nAll 3 args are different\n");
       break;
       case 1:
         if(j==1)
          printf("\nArg2 and Arg3 are equal\n");
         else if(k==1)
          printf("\nArg1 and Arg3 are equal\n");
         else
          printf("\nArg1 and Arg2 are equal\n");
       break;
       case 3:
         printf("\nAll 3 are equal\n");
       break;
       default:
         printf("\nInvalid args\n");
    }
 }
 else
 {
   printf("\nUsage: ./a.out arg1 arg2 arg3\n");
   return -1;
 }*/
 return 0;
}
/* comments
use function
use #define NO_ARG
#define TRUE 1
#define FALSE 0
*/

