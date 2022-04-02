#include "findassetmenu.h"

FindAssetMenu::FindAssetMenu(std::ostream &display, std::istream &input):MenuInterface(display,input)
{
    //ctor
}

FindAssetMenu::~FindAssetMenu()
{
    //dtor
}


void FindAssetMenu::displayMainMenu() const
{
  _display << "Find asset" << std::endl;
  _display << " search by (a)sset id" << std::endl;
  _display << " search by (s)erial" << std::endl;
  _display << " (b)ack to main menu" << std::endl;
}

bool FindAssetMenu::processSelection(char selection)
{
  switch (selection) {
  case 'a':
    searchById();
    break;
  case 's':
    searchBySerial();
    break;
  case 'b':
    return false;
    break;
  }
  return true;
}

void FindAssetMenu::searchById(){

}
void FindAssetMenu::searchBySerial(){

}
