#ifndef COMPUTER_H
#define COMPUTER_H
#include "asset.h"
#include "custodian.h"
#include "computer.h"

/**
 * @brief The Computer class represents a computer in the asset register
 */
class Computer : public Asset
{
public:
  Computer(const std::string &id, const std::string &brand, const std::string &model,
           double purchasePrice, const Date &purchaseDate, const std::string &serial,
           const std::string &operatingSystem);
    Computer();


  std::string operatingSystem() const;
  std::string networkIdentifier() const;
  Custodian custodian();

  void setOperatingSystem(std::string operating){
    _operatingSystem = operating;
  }

  void setNetworkIdentifier(std::string identifier){
    _networkIdentifier = identifier;
  }
  void setCustodian(Custodian cus){
    _custodian = cus;
  }

private :
    std::string _operatingSystem;
    std::string _networkIdentifier;
    Custodian _custodian;

};

#endif // COMPUTER_H
