#include<iostream>
#include "fruit.h"
#include "store.h"
using namespace std;
int main() {
  store A, B;
  cout << A.apple.price << endl;
  A.total_price();
  A.total_weight(); // testing new function
  return 123;
}
