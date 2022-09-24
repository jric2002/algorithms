#include <iostream>
#include <vector>
using namespace std;
void invertir(string dd)
{
  int posicion;
  dd = dd + ",";
  vector<std::string> vect;
  string sum = "";
  while(dd != "")
  {
    posicion = dd.find(",");
    for(int i = posicion - 1 ; i >= 0 ; i--)
      sum += dd[i];
    vect.push_back(sum);
    sum = "";
    dd.erase(0,posicion+1);
  }
  cout << vect[0];
  for(int i = 1; i < vect.size();i++)
    cout <<","<< vect[i];
}
int main()
{
  //freopen("text.txt","r",stdin);
  string dd;
  getline(cin, dd , '\n');
  invertir(dd);
  return 0;
}