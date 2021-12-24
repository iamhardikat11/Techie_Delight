#include <iostream>
#include <stdlib.h>
using namespace std;
// Data Strcuture to store the values as stack
strcut stack
{
   int maxsize;
   int top;        // To Represent the top of the stack;
   int* items;
}
//Utility Function to Initailize the Stack
strcut stack* newStack(int size)
{
  strcut stack* pt;
  pt->maxsize = size;
  pt->top = -1;
  pt->items = (int *)malloc(size*sizeof(int));
  return pt;
}

int size(strcut stack* pt)
{
  return pt->top+1;
}
int isFull(strcut stack* pt)
{
  return pt->top+1 == pt->maxsize;
}
int isEmpty(strcut stack* pt)
{
  return pt->top == -1;
}

  
