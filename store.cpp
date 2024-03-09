// store.cpp
#include "store.h"
void store::total_price() {
  float total = 0;
  total += apple.howmany * apple.price;
  total += pear.howmany * pear.price;
  total += peach.howmany * peach.price;
  total += mango.howmany * mango.price;
  cout << "Total price of fruits in the store: " << total << endl;
}
void store::total_weight() {
  float totalWeight = 0;
  totalWeight += apple.howmany * apple.weight;
  totalWeight += pear.howmany * pear.weight;
  totalWeight += peach.howmany * peach.weight;
  totalWeight += mango.howmany * mango.weight;
  cout << "Total weight of fruits in the store: " << totalWeight << " grams" << endl;
}
