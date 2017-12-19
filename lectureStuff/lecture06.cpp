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

// int *x, *y;
// int a = -1
// x = &a;
// cout << *x << endl; // Prints: -1
// *x = 42;
// cout << a << endl; // Prints: 42
// *y = 13;
// cout << *y << endl; // Prints: IDK Bug???
// y = x;
// cout << *y << " " << a << endl; Prints: 42 42
