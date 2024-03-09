#pragma once
#include <iostream>
#include <string>
using namespace std;

class fruit {
public:
  // constructors
  fruit() {
    price = 200;
    howmany = 2;
    name = "apple";
    weight = 100; // default weight
    quantity_sold = 0;
  };
  fruit(int n, float p, string s) {
    price = p;
    howmany = n;
    name = s;
    weight = 100; // default weight
    quantity_sold = 0;
  };
  fruit(int n, float p, string s, float w) {
    price = p;
    howmany = n;
    name = s;
    weight = w;
    quantity_sold = 0;
  };
  // member data
  string name;
  float price;
  int howmany;
  float weight; // new member data
  int quantity_sold;// member functions
  void showHowMuchWePay();
  void show_all();
  void show_only_name_and_price();
};
