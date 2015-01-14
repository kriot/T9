#include <iostream>
#include <fstream>

#include "t9.hpp"

int main()
{
  T9 t9;
  ifstream in("words.txt");
  t9.factor['a'] = 1;
  t9.factor['s'] = 1;
  t9.factor['d'] = 1;
  t9.factor['f'] = 1;
  t9.factor['g'] = 1;
  t9.factor['h'] = 1;
  t9.factor['j'] = 1;
  t9.factor['k'] = 1;
  t9.factor['l'] = 1;
  t9.factor['q'] = 2;
  t9.factor['w'] = 2;
  t9.factor['e'] = 2;
  t9.factor['r'] = 2;
  t9.factor['t'] = 2;
  t9.factor['y'] = 2;
  t9.factor['u'] = 2;
  t9.factor['i'] = 2;
  t9.factor['o'] = 2;
  t9.factor['p'] = 2;
  t9.factor['z'] = 3;
  t9.factor['x'] = 3;
  t9.factor['c'] = 3;
  t9.factor['v'] = 3;
  t9.factor['b'] = 3;
  t9.factor['n'] = 3;
  t9.factor['m'] = 3;
  t9.load(in);
  cout << "loaded\n";
  string x = "";
  char c;
  while((c = getchar()) != ' ')
  {
    if( c == '\n' ) continue;
    x += c;
    auto w = t9.input(x);
    for(; w.first != w.second; w.first++)
    {
      cout << *w.first << " ";
    }
    cout << "\n";
  }
}
