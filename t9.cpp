#include <iostream>
#include <vector>
#include <string>
#include <set>

#include "t9.hpp"

void T9::load(istream& in)
{
  while(in) {
    string w;
    int x;
    in >> w >> x;
    T9_node* c = &root;
    for(int i = 0; i < w.size(); ++i)
    {
      if(w[i] > 'z' || w[i] < 'a')
        continue;
      if(! c->link[factor[w[i]]])
        c->link[factor[w[i]]] = new T9_node();
      c = c->link[factor[w[i]]];
    }
    c->words.insert(make_pair(x,w));
  }
}

pair<set<pair<int, string> >::iterator, set<pair<int, string> >::iterator> T9::input(string w)
{
    T9_node* c = &root;
    for(int i = 0; i < w.size(); ++i)
    {
      if(! c->link[factor[w[i]]])
        c->link[factor[w[i]]] = new T9_node();
      c = c->link[factor[w[i]]];
    }
    return make_pair(c->words.begin(), c->words.end());

}
