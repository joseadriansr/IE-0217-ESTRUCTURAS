#include "Translator.h"
#include <string>
#include <iostream>
using namespace std;

Translator::Translator()
{

}

Translator::~Translator()
{

}

Translator::translate (string s)
{
  string codones = s; // Codones leidos de una fila del archivo .txt
  int tamano = codones.size(); // Cantidad de letras en la fila
  int cantidadTrios = tamano / 3; // Cantidad de grupos de tres letras
  string arregloTrios[cantidadTrios];
  int i = 0;
  if (tamano % 3 == 0 ){ // Revisa que la cantidad de letras sea multiplo de 3
    for (int x = 0; x < cantidadTrios, x+=3 ){
      //Aqui la idea es guardar en las casillas del arreglo de strings los grupos de 3 letras
      arregloTrios [i] = codones.substr(x, 3); // La funcion substr(a,b) guarda b letras de la string desde la posicion a
      i++;
    }
    // Ahora tenemos en el arregloTrios los grupos de 3 letras por casilla
    // Hay que verificar que las letras correspondan a letras validas
  }
  else { // Si no es multiplo de 3, no es una fila valida, genera error
    return 1;
  }

}

Translator::translate (string* s, int n)
{

}
