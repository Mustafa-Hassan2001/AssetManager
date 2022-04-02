#include "addmenuinterface.h"
#include <iostream>
#include "computer.h"
#include "assetregister.h"
AddMenuInterface::AddMenuInterface(std::ostream &display, std::istream &input):MenuInterface(display,input)
{

}

void AddMenuInterface::displayMainMenu() const
{
  _display << "Add an asset" << std::endl;
  _display << " add a (c)omputer" << std::endl;
  _display << " add a (p)hone" << std::endl;
  _display << " add a (t)elevision" << std::endl;
  _display << " (b)ack to main menu" << std::endl;
}

bool AddMenuInterface::processSelection(char selection)
{
  switch (selection) {
  case 'c':
    return addComputer();
  case 'p':
    addPhone();
    break;
  case 't':
    addTele();
    break;
  case 'b':
    return false;
    break;
  }
  return true;
}

bool AddMenuInterface::addComputer(){

    AssetRegister *regist = AssetRegister::instance();

    Computer computer = Computer();
    std::shared_ptr<Computer> asset = std::shared_ptr<Computer>(&computer);

    std::string qst = "enter Id : ";
    computer.setId(getStringInput(qst));

     qst = "enter Brand : ";
    computer.setBrand(getStringInput(qst));

     qst = "enter model : ";
    computer.setModel(getStringInput(qst));

    qst = "enter serial number : ";
    computer.setserial(getStringInput(qst));

     qst = "enter Purchase price : ";
    computer.setPurchasePrice(getDoubleInput(qst));

     qst = "enter Purchase date : ";
    computer.setPurchaseDate(getDateInput(qst));

     qst = "enter operating system : ";
    computer.setOperatingSystem(getStringInput(qst));

    qst = "enter network identifier : ";
    computer.setNetworkIdentifier(getStringInput(qst));


   return regist->storeAsset(asset);

}
void AddMenuInterface::addPhone(){

}
void AddMenuInterface::addTele(){

}

void AddMenuInterface::setAssetInfo(std::shared_ptr<Asset> asset){
    std::string qst = "enter Id : ";
    asset->setId(getStringInput(qst));

     qst = "enter Brand : ";
    asset->setBrand(getStringInput(qst));

     qst = "enter model : ";
    asset->setModel(getStringInput(qst));

    qst = "enter serial number : ";
    asset->setserial(getStringInput(qst));

     qst = "enter Purchase price : ";
    asset->setPurchasePrice(getDoubleInput(qst));

     qst = "enter Purchase date : ";
    asset->setPurchaseDate(getDateInput(qst));

}


