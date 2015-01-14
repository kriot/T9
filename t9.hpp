#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

const int MAX_FACTOR = 10;

class T9_node {
public:
  T9_node* link[MAX_FACTOR];
  set<string> words;
  T9_node() {
    for(int i = 0; i < MAX_FACTOR; ++i)
      link[i] = nullptr;
  }
};

class T9 {
public:
  void load(istream& in);
  pair<set<string>::iterator, set<string>::iterator> input(string w);

  int factor[256];

private:
  T9_node root;
};
