#include <iostream>
#include <list>
using namespace std;

bool is_negative(int inputNum) {
	if (inputNum < 0) return true;
	return false;
}

bool is_even(int i){
  return i%2 == 0;
}

bool is_odd(int i){
  return i%2;
}

bool all_of(list<int> l, bool(*fn)(int)){
  if (l.empty()) return true;
  if(!fn(l.front())) return false;
  l.pop_front();
  return all_of(l, fn);
}

bool all_even(list<int> l) {
  return all_of(l, is_even);
}

bool all_odd(list<int> l) {
  return all_of(l, is_odd);
}

int main() {
  bool (*predicate) (int);
  predicate = is_negative;
  cout << predicate(-1) << endl;;
  cout << is_negative(-2) << endl;
  cout << predicate(0) << endl;
  cout << predicate(5) << endl;
  cout << is_negative(0) << endl;
  cout << is_negative(5) << endl;
	
  // Pt. 2
  list<int> listOfEven(3,2);
  list<int> listOfOdds(3,3);
  cout << "Should be true(2,2,2): " << all_even(listOfEven) << endl; 
  cout << "Should be true(3,3,3): "<< all_odd(listOfOdds) << endl;
  cout << "Should be false(3,3,3): " << all_even(listOfOdds) << endl;
  cout << "Should be false(2,2,2): " << all_odd(listOfEven) << endl;

  return 0;
}
