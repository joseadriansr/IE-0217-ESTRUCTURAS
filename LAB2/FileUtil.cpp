#include <string>
#include <iostream>
#include <fstream>
using namespace std;
//constructor
//openmodes validos: "in" y "out"
FileUtil::FileUtil (string s, ios_base::openmode p)
{
  this->ruta = s;
  this->modo = p;

}

FileUtil::~FileUtil()
{

}

FileUtil::read()
{
  ifstream archivo("entrada1.txt");

}

FileUtil::readLines()
{

}

FileUtil::write (string s)
{

}

FileUtil::write (string* s, int n)
{

}
