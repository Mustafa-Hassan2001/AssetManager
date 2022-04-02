#include "computer.h"

Computer::Computer(const std::string &id, const std::string &brand, const std::string &model,
                   double purchasePrice, const Date &purchaseDate, const std::string &serial,
                   const std::string &operatingSystem)
  : Asset{id, brand, model, purchasePrice, purchaseDate}
{
    _effectiveLifespan = 3;
    _operatingSystem = operatingSystem;
    _serial = serial;
}

  std::string Computer::operatingSystem() const{
    return _operatingSystem;
  }
  std::string Computer::networkIdentifier() const{
    return _networkIdentifier;
  }
  Custodian Computer::custodian()  {
    return _custodian;
  }


  Computer::Computer(){
  }


