#include <iostream>
#include "menuinterface.h"
#include <memory>
#include "assetregister.h"
#include "computer.h"

/**
 * @brief main simple main function runs the MenuInterface until quit.
 * @return
 */
int main()
{
    AssetRegister *ass = AssetRegister::instance();
    ass->storeAsset(std::make_shared<Computer>("comp003", "Dell", "Inspiron 13 5378", 1100, Date{10,Date::July,2017}, "51NC167", "Windows 10 Enterprise"));
    ass->storeAsset(std::make_shared<Computer>("comp0031", "Dell", "Inspiron 13 5378", 1100, Date{10,Date::July,2017}, "51NC167", "Windows 10 Enterprise"));
    ass->storeAsset(std::make_shared<Computer>("comp00311", "Dell", "Inspiron 13 5378", 1100, Date{10,Date::July,2017}, "51NC167", "Windows 10 Enterprise"));

  MenuInterface m{std::cout, std::cin};
  m.displayMainMenu();
  while (m.processSelection(m.getCharacterInput())) {
    m.displayMainMenu();
  }

  /*
  std::shared_ptr<int> val = std::shared_ptr<int>(new int(42));
  std::cout << *(val) << std::endl ;
  */
  return 0;
}

