#include "displaybytypeinterface.h"
#include "assetregister.h"

DisplayByTypeInterface::DisplayByTypeInterface(std::ostream &display, std::istream &input):MenuInterface(display,input)
{
    //ctor
}

DisplayByTypeInterface::~DisplayByTypeInterface()
{
    //dtor
}

void DisplayByTypeInterface::displayMainMenu() const
{
  _display << "List assets by type" << std::endl;
  _display << " list (a)ll assets" << std::endl;
  _display << " list (c)omputers" << std::endl;
  _display << " list (p)hones" << std::endl;
  _display << " list (t)elevisions" << std::endl;
  _display << " (b)ack to main menu" << std::endl;
}

bool DisplayByTypeInterface::processSelection(char selection)
{
   AssetRegister *regist = AssetRegister::instance();
  switch (selection) {
  case 'a':
    regist->displayAll();
  case 'c':
    regist->displayComputers();
    break;
  case 'p':
    regist->displayPhones();
    break;
  case 't':
    regist->displayTeles();
    break;
  case 'b':
    return false;
    break;
  }
  return true;
}
