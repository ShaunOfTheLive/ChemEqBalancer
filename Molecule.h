#ifndef MOLECULE_H
#define MOLECULE_H

#include <vector>
#include <string>

class Element;

class Molecule
{
  struct element_s_t {
    Element* _atom;
    int  _subscript;
  };
  typedef std::vector<element_s_t> element_s_t_v;
  element_s_t_v atoms;
public:
  Molecule(std::string element, int subscript = 1);
  void addAtom(std::string element, int subscript = 1);
  std::string getName();
protected:
private:
};

#endif // MOLECULE_H
