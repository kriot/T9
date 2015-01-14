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
  t9.load(in);
}
