#include <string>
#include <iostream>
#include "FileUtil.h"
#include "Translator.h"
using namespace std;

int main (void)
{
  string rutaOrigen= "";
  string rutaDestino= "";
  cout << "Ingrese la ruta del archivo de origen" << endl;
  getline(cin,rutaOrigen);
  cout << "Ingrese la ruta del archivo de destino" << endl;
  getline(cin,rutaDestino);

  ArchivoOrigen = FileUtil(rutaOrigen, ios::in);

  ArchivoDestino = FileUtil(rutaDestino, ios:out);
  return 0;
}
