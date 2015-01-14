#include <iostream>
#include <vector>
#include <string>
#include <set>

#include "t9.hpp"

void T9::load(istream& in)
{
  while(in) {
    string w;
    in >> w;
    T9_node* c = &root;
    for(int i = 0; i < w.size(); ++i)
    {
      if(c->link[factor[w[i]]])
        c = c->link[factor[w[i]]];
      else
        c = c->link[factor[w[i]]] = new T9_node();
    }
    c->words.insert(w);
  }
}

string T9::input(string s)
{
}
