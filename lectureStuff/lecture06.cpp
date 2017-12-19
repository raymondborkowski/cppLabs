#include <iostream>

using namespace std;

int strlen(char s[]) {
  int count = 0;
  while(s[++count]){}
  return count;
}

int main() {
  char s[] = "foo";
  cout << strlen(s) << endl;

  return 0;
}
