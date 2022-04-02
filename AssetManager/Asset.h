#ifndef ASSET_H
#define ASSET_H
#include <string>
#include "date.h"

/**
 * @brief The Asset class the abstract base class for an asset in the asset register.
 */
class Asset
{
public:

     Asset();
     virtual ~Asset() {}
  /**
   * @brief id retrieve the unique identifier for this asset.
   * @return the unique identifier
   */
  const std::string &id() const;
  /**
   * @brief purchaseDate
   * @return the date on which this asset was purchased.
   */
  const Date &purchaseDate() const;

  Date disposalDate();
   std::string serialNumber() const;
  const std::string &brand() const;
  const std::string &model() const;
  const double &purchasePrice() const;
  Date purchasePrice();
  double deprecatedValue();
  void display();
  int heldDays();

  // setter
  void setId(std::string id){_id=id;}
  void setPurchaseDate(Date purchaseDate){_purchaseDate = purchaseDate;}
  void setDisposalDate(Date disposalDate){_disposalDate = disposalDate;}
  void setBrand(std::string brand){_brand = brand;}
  void setModel(std::string model){_model = model;}
  void setPurchasePrice(double purchasePrice){_purchasePrice = purchasePrice;}
  void setserial(std::string serial){_serial = serial;}

protected:
  std::string _id; /**< a unique identifier for the asset */
  Date _purchaseDate;/**< the date on which the asset was purchased */
  Date _disposalDate;
  std::string _brand;
  std::string _model;
  double _purchasePrice;
   std::string _serial;
  Asset(const std::string &id, const std::string &brand, const std::string &model,
        double purchasePrice, Date purchaseDate);

private:



protected:
    double _effectiveLifespan = 1;
};

#endif // ASSET_H
