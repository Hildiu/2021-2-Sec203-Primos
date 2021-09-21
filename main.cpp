/*--------------------------------------------------------
 * Dato de Entrada: num (unsigned int)  num >10
 * Dato de Salida: sigPrimo, anteriorPrimo (unsigned int)
 ---------------------------------------------------------*/

#include <iostream>
#include "Ufunciones.h"
using namespace std;

int main()
{
  unsigned int num, sigPrimo,anteriorPrimo;

  do {
    cout << "Numero > 10 : ";
    cin>>num;
  }while(num<=10);
  cout << "El siguiente numero primo es:  " << hallaSigPrimo(num) << "\n";
  cout << "El numero primo anterior  es:  " << hallaElPrimoAnterior(num) << "\n";
  cout << "Chao";
  return 0;
}


/*-------------
 * CMakeList.txt
 * main.cpp
 * Ufunciones.cpp
 * Ufunciones.h
 */
