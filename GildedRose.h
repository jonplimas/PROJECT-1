#pragma once

#include <string>
#include <vector>
using std::string;

// This is already done for you...
class Item {
public:
    string name;
    int sellIn;
    int quality;
    Item(string, int, int);
};

Item::Item(string new_name, int new_sellIn, int new_quality)
  : name(new_name),
    sellIn(new_sellIn),
    quality(new_quality) {}


// This class is incomplete...
class GildedRose {
private:
    // Add something to hold at least 10 items
    std::vector<Item> myItems;

public:
    GildedRose();   //DONE
    ~GildedRose();  //DONE

    size_t size() const;
    Item& get(size_t);
    void add(const Item&);
    Item& operator[](size_t);
};

//Constructor Definition
GildedRose::GildedRose(){

}

//Destructor Definition
GildedRose::~GildedRose(){
  myItems.empty();
}

//size function Definition
size_t GildedRose::size() const{
  return myItems.size();
}

//get function Definition
Item& GildedRose::get(size_t r){
  if(r > myItems.size()-1){
    throw std::out_of_range("Invalid Index");
  }
  return myItems[r];
}

//add function Definition
void GildedRose::add(const Item& x){
  myItems.push_back(x);

}

//operator
Item& GildedRose::operator[](size_t r){
  if(r > myItems.size()-1){
    throw std::out_of_range("Invalid Index");
  }
  return myItems[r];
}
