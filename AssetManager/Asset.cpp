#include "asset.h"

const std::string &Asset::id() const
{
  return _id;
}

const Date &Asset::purchaseDate() const
{
  return _purchaseDate;
}
const double &Asset::purchasePrice() const
{
  return _purchasePrice;
}
const std::string &Asset::brand() const
{
  return _brand;
}
const std::string &Asset::model() const
{
  return _model;
}

Date Asset::disposalDate(){
    return _disposalDate;
}
 std::string Asset::serialNumber() const {
    return _serial;
  }

// TODO: finish the implementation of the Asset constructor.
Asset::Asset(const std::string &id, const std::string &brand, const std::string &model,
             double purchasePrice, Date purchaseDate) : _id{id}
{
    _id = id;
    _brand = brand;
    _model = model;
    _purchasePrice = purchasePrice;
    _purchaseDate = purchaseDate;
}

// TODO: finish the implementation of the Asset constructor.
Asset::Asset()
{
}

double Asset:deprecatedValue(){
    return ((_purchasePrice*heldDays()))/365*(1/_effectiveLifespan);
}

int Asset:heldDays(){
    // todo calculate days
    return 5;
}




void Asset::display(){
    std::cout << "Asset Id :" << _id  << std::endl;
    std::cout << "Brand :" << _brand  << std::endl;
    std::cout << "Model :" << _model  << std::endl;
    std::cout << "Purchase Price :" << _purchasePrice  << std::endl;
    std::cout << "Purchase Date  :" << _purchaseDate  << std::endl;
    std::cout << "Depreciated Value : " << deprecatedValue()  << std::endl;
    std::cout << "serial number : " << _serial  << std::endl;
}
