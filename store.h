#pragma once
#include <iostream>
#include <string>  
#include "fruit.h"
using namespace std;
class store {
public:
  // constructor
  store() : apple(3, 300, "apple"), pear(5, 400, "pear"), peach(7, 1000, "peach"), mango(8, 900, "mango") {
    
  };
  // member data
  fruit apple, pear, peach,mango;
  // member functions
  void total_price();
  void total_weight(); // new member function
};
