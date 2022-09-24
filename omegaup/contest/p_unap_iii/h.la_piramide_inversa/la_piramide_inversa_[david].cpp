#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
string espac(int i)
{
  string es = "";
  for(int j = 0 ; j < i ; j++)
    es += " ";
  return es;
}
void piramide(string dd)
{
  int posicion; posicion = dd.length();
  for(int i  = 0 ; i <posicion; i++ )
  {
    cout << espac(posicion - i);
    for(int j = i+1; j >= 0 ; j--)
      cout <<dd[posicion - j];
    cout << endl;
  }
}
int main()
{
  freopen("text.txt","r",stdin);
  string dd;
  while(getline(cin, dd , '\n')) {
    piramide(dd);
  }
  return 0;
}