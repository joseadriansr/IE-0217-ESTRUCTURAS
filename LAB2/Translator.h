#include <string>
#include <iostream>
using namespace std;

class Translator
{
  public:
  	Translator();
  	~Translator();
  	string translate (string s);
  	string* translate (string* s, int n);
  private:
};
