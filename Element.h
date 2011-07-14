#ifndef Element_H
#define Element_H

#include <iostream>
#include <set>
#include <string>

typedef std::set<std::string> element_set_t;

class Element
{
  static element_set_t init_elements()
  {
    std::string element_list[] =
      #include "elements_rawlist.txt"
    ;
    element_set_t s(element_list, element_list+(sizeof element_list / sizeof *element_list));
    return s;
  }
  static const element_set_t elements;

  element_set_t::iterator element_it;
public:
  Element(std::string symbol);
  std::string getName();
  Element* getElement(std::string symbol);
protected:
private:
  static bool init();
};

#endif // Element_H
