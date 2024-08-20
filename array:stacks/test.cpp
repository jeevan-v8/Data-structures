#include <iostream>

using namespace std;

int main() {
  int x = 20;
  int y = 5;
  int a = 7;
  int b = 24;

  if (x >>= y && x != 10) {
    cout << ((a != 7) & x++ * y >> y) << endl;
  } else {
    cout << (a += 5 * a >> 3 / b++ | x * 4 * 2 - 3) << endl;
  }
}
