#include <iostream>
#include <fstream>

#include "t9.hpp"

int main()
{
  T9 t9;
  ifstream in("words.txt");
  t9.factor['a'] = 1;
  t9.factor['b'] = 1;
  t9.factor['c'] = 2;
  t9.factor['1'] = 1;
  t9.factor['2'] = 2;
  t9.load(in);
  string x;
  cin >> x;
  auto w = t9.input(x);
  for(; w.first != w.second; w.first++)
  {
    cout << *w.first << " ";
  }
  cout << "\n";
}
