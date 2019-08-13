#include "./goods.h"

// Set member variable of goods with given index and price values
void Goods::SetGoodsInfo(int index, int price) {
  if (index >= 0 && price >= 0) {
    goods_index_ = index;
    goods_price_ = price;
  }
}

// Return index information
int Goods::GetIndex() {
  return goods_index_;
}

// Return price informaiton
int Goods::GetPrice() {
  return goods_price_;
}
