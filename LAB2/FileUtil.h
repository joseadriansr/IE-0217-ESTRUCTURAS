#include <string>
#include <iostream>
using namespace std;

class FileUtil
{
  public:
  	FileUtil(string s, ios_base::openmode p);
  	~FileUtil();
  	string read();
  	string* readLines();

  	int write (string s);
  	int write (string* s, int n);

    string ruta;
  	ios_base::openmode modo;
};
