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
};

class T9 {
public:
  void load(istream& in);
  string input(string s);

  int factor[256];

private:
  T9_node root;
};
