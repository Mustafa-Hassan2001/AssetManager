#include "menuinterface.h"
#include "assetregister.h"
#include <limits>
#include "addmenuinterface.h"
#include "displaybytypeinterface.h"
#include "findassetmenu.h"

MenuInterface::MenuInterface(std::ostream &display, std::istream &input) : _display{display},
  _input{input}
{
}

void MenuInterface::displayMainMenu() const
{
  _display << "What would you like to do?" << std::endl;
  _display << " (a)dd an asset" << std::endl;
  _display << " (d)ispose an asset" << std::endl;
  _display << " (l)ist assets by type" << std::endl;
  _display << " List assets by (c)ustodian" << std::endl;
  _display << " (f)ind asset" << std::endl;
  _display << " (q)uit" << std::endl;
}

char MenuInterface::getCharacterInput() const
{
  char input;
  _input >> input;
  _input.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  return input;
}

bool MenuInterface::processSelection(char selection)
{
  switch (selection) {
  case 'a':
    addAsset();
    break;
  case 'd':
    disposeAsset();
    break;
  case 'l':
    listAssetsByType();
    break;
  case 'c':
    listAssetsByCustodian();
    break;
  case 'f':
    findAsset();
    break;
  case 'q':
    return false;
  default:
    _display << "Sorry, \'" << selection
             << "\' is not a valid option, please try again." << std::endl;
  }
  return true;
}

void MenuInterface::addAsset()
{
  AddMenuInterface m{std::cout, std::cin};
  m.displayMainMenu();
  while (m.processSelection(m.getCharacterInput())) {
    m.displayMainMenu();
  }
}

void MenuInterface::disposeAsset()
{
    AssetRegister *assetReg = AssetRegister::instance();
    std::string qst = "enter Asset Id :";
    assetReg->remove(getStringInput(qst));



}

void MenuInterface::updateAsset()
{
  // TODO: implement this method.
}

void MenuInterface::addMaintenance()
{
  // TODO: implement this method.
}

void MenuInterface::listAssetsByType()
{
    DisplayByTypeInterface m{std::cout, std::cin};
      m.displayMainMenu();
      while (m.processSelection(m.getCharacterInput())) {
        m.displayMainMenu();
      }
}

void MenuInterface::listAssetsByCustodian()
{
  // TODO: implement this method.
}

void MenuInterface::findAsset()
{
  FindAssetMenu m{std::cout, std::cin};
  m.displayMainMenu();
  while (m.processSelection(m.getCharacterInput())) {
   m.displayMainMenu();
  }
}



std::string MenuInterface::getStringInput(std::string& qst) const
{
  std::string input;
   _display << qst << std::endl;
  _input >> input;
  return input;
}

double MenuInterface::getDoubleInput(std::string& qst){
    double input;
   _display << qst << std::endl;
  _input >> input;
  return input;
}

Date MenuInterface::getDateInput(std::string& qst){
    Date date = Date(10,Date::April,2017);
    return date;
}
