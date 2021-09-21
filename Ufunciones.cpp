//
// Created by MARIA HILDA BERMEJO RIOS on 9/21/21.
//

#include "Ufunciones.h"

bool esPrimo(unsigned int num)
{
  for(unsigned int divisor=2; divisor<num; divisor++)
    if (num % divisor==0)
      return false;
  return true;
}


unsigned int hallaSigPrimo(unsigned int num)
{ unsigned int n;

  n = num+1;
  while( !esPrimo(n))
    n = n+1;
  return n;
}

unsigned int hallaElPrimoAnterior(unsigned int num)
{
  unsigned int n;
  n = num -1;
  while(  !esPrimo(n))
    n = n -1;
  return n;
}