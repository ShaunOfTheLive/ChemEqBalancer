#include "Molecule.h"
#include "Element.h"

#include <string>
#include <iostream>
#include <sstream>

  // molecule keeps track of number of atoms (subscript)
  // equation keeps track of number of molecules (coefficient)

  // Molecule("Br", 2);
  // Molecule("H", 5);
  // Equation(&Br2, 6); // 6Br_2ooh

Molecule::Molecule(std::string atom, int subscript)
{
  addAtom(atom, subscript);
}

void Molecule::addAtom(std::string atom, int subscript)
{
  Element* temp1 = new Element(atom);
  element_s_t temp2 = {temp1, subscript};
  atoms.push_back(temp2);
}

std::string Molecule::getName()
{
  std::string name;
  std::ostringstream os;

  element_s_t_v::iterator it = atoms.begin();
  while (it != atoms.end()) {
    name += it->_atom->getName();
    if (it->_subscript != 1) {
      os << it->_subscript;
      name += os.str();
      os.str("");
    }
    it++;
  }

  return name;
}
