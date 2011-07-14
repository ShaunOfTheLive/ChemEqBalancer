#include <iostream>
#include "Element.h"
#include "Molecule.h"

using namespace std;

int main()
{
  cout << "Element test:" << '\n';
  try {
    Element a("Br");
    Element b("He");
    cout << a.getName() << '\n';
    cout << b.getName() << '\n';
  } catch (const char* e) {
    cout << "An exception occurred: " << e << endl;
  }
  cout << endl;
  cout << "Molecule test:" << '\n';
  try {
    Molecule am("Br", 2);
    cout << am.getName() << '\n';
    Molecule def("Na");
    cout << def.getName() << '\n';
    Molecule compound("Na");
    compound.addAtom("Br", 2);
    cout << compound.getName() << '\n';
  } catch (const char* e) {
    cout << "An exception occurred: " << e << endl;
  }
  cout << endl;
  return 0;
}
