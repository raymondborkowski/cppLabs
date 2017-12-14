#include <iostream>
#include <string>

using namespace std;

// REQUIRES: n >= 1
// EFFECTS: Prints the hailstone sequence starting at n.
//      Uses iteration.
void hailstoneIterative(int n){
    while (n > 1) {
        cout << n << ", ";
        n = n%2 == 0 ? n/2 : 3*n + 1;
    }
    cout << 1;
}

// REQUIRES: n >= 1
// EFFECTS: Prints the hailstone sequence starting at n.
//      Uses recursion.
void hailstoneRecursive(int n){
    n == 1 ? cout << n : cout << n << ", ";
    if (n != 1) {
        n = n % 2 == 0 ? n/2 : 3*n+1;
        hailstoneRecursive(n);
    }
}

// REQUIRES: 0 <= digit <= 9, n >= 0
// EFFECTS: Returns the number of times 'digit' appears in 'n'.
//      Uses iteration.
int countDigitsIterative(int n, int digit){

  return 0;  //REPLACE WITH YOUR CODE

}

// REQUIRES: 0 <= digit <= 9, n >= 0
// EFFECTS: Returns the number of times 'digit' appears in 'n'.
//      Uses recursion.
int countDigitsRecursive(int n, int digit){
    
  return 0;  //REPLACE WITH YOUR CODE

}

// REQUIRES: 0 <= digit <= 9, n >= 0
// EFFECTS: Returns the number of times 'digit' appears in 'n'.
//      Uses tail recursion.
int countDigitsTail(int n, int digit){

  return 0;  //REPLACE WITH YOUR CODE

}

void hailstoneTest(int n){
  cout << endl << "  Hailstone test for n = " << n << endl;
  cout << "    Iterative: "; hailstoneIterative(n);  cout << endl;
  cout << "    Recursive: "; hailstoneRecursive(n);  cout << endl;
}

void countDigitsTest(int n, int digit){
  cout << endl << "  CountDigits test.  How many " << digit << "s in " << n << endl;
  cout << "    Iterative:      " << countDigitsIterative(n, digit) << endl;
  cout << "    Recursive:      " << countDigitsRecursive(n, digit) << endl;
  cout << "    Tail Recursive: " << countDigitsTail(n, digit) << endl;
}

// Testing code for Lab02
int main() {
  cout << "Running tests for lab 2..." << endl;
  hailstoneTest(5);
  hailstoneTest(7);
  hailstoneTest(14);

  cout << "--------------------------" << endl;

  countDigitsTest(201220130, 2);
  countDigitsTest(201220130, 0);
  countDigitsTest(201220130, 7);
  countDigitsTest(0, 0);
  countDigitsTest(0, 8);
 
  return 0;
}
