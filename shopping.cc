#include <iostream>
#include "./shopping.h"

// Push Goods object to list
void Shopping::PushElement(Goods object) {
  shopping_list_.push_back(object);
}

// Get Goods object from end of list vector
Goods Shopping::GetLastElement() {
  return shopping_list_.back();
}

// Print list Elements
void Shopping::PrintList() {
  for (std::vector<Goods>::iterator i = shopping_list_.begin();
      i != shopping_list_.end(); i++) {
    std::cout << "Goods #" << i->GetIndex() << " - Price : " <<
    i->GetPrice() << std::endl;
  }
}

// Sort list Elements by Price
// Apply Selection Sort algorithm
void Shopping::SortByPrice() {
  std::vector<Goods>::iterator p = shopping_list_.begin();
  std::vector<Goods>::iterator min = shopping_list_.end();
  for (std::vector<Goods>::iterator i = shopping_list_.begin();
      i != shopping_list_.end()-1; i++) {
    for (std::vector<Goods>::iterator j = i; j != shopping_list_.end(); j++) {
      if (min == shopping_list_.end()) {
        min = j;
        continue;
      }
      if (min->GetPrice() > j->GetPrice()) {
        min = j;
      }
    }
    std::iter_swap(i, min);
    min = shopping_list_.end();
  }
}

// Sort list Elements by Index
// Apply Selection Sort algorithm
void Shopping::SortByIndex() {
  std::vector<Goods>::iterator p = shopping_list_.begin();
  std::vector<Goods>::iterator min = shopping_list_.end();
  for (std::vector<Goods>::iterator i = shopping_list_.begin();
      i != shopping_list_.end()-1; i++) {
    for (std::vector<Goods>::iterator j = i; j != shopping_list_.end(); j++) {
      if (min == shopping_list_.end()) {
        min = j;
        continue;
      }
      if (min->GetIndex() > j->GetIndex()) {
        min = j;
      }
    }
    std::iter_swap(i, min);
    min = shopping_list_.end();
  }
}
