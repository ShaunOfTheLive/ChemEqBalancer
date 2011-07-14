#include "Element.h"

#include <string>
#include <set>

#include <iostream>

const element_set_t Element::elements = Element::init_elements();

Element::Element(std::string symbol)
{
  element_it = elements.find(symbol);
  if (element_it == elements.end()) {
    throw "Element not found";
  }
}

std::string Element::getName()
{
  return *element_it;
}
