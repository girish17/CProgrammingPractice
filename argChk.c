/*
This is a program to check whether the given arguments are equal or not. If so which args are equal.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Argument{
  char* val;
}Argument;

Argument* initArgs(int numOfArgs, char* argList[])
{
    int i;
    Argument* arguments = NULL;
    /*create argument*/
    arguments = (Argument*) malloc(sizeof(Argument)*(numOfArgs));
    for(i=1; i<=numOfArgs; i++)
    {
      arguments[i].val = argList[i];
    }
    return arguments;
}

void checkEqArgs(Argument* args, int numOfArgs)
{
   int i, j, count=0;
   for(i=1; i<=numOfArgs; i++)
   {
     for(j=i+1; j<=numOfArgs; j++)
     {
        if((args[i].val != NULL) && (args[j].val != NULL) && (strcmp(args[i].val, args[j].val) == 0) && (i!=j))
        {
           printf("\n%s matches at position %d\n", args[i].val, j);
           args[j].val = NULL;
           count++;
        }
     } 
   }
   if(count == 0)
     printf("\nAll args are different\n");
}

int main(int argc, char* argv[])
{
  if(argc > 1)
  {
    Argument* arguments=initArgs(argc-1, argv);
    checkEqArgs(arguments, argc-1);
    return 0;
  }
  else
  {
    printf("\nUsage: ./argChk.o arg1 arg2 ... argN\n");
    return -1;
  }
}
