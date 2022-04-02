#include "custodian.h"
#include "Asset.h"
#ifndef PHONE_H
#define PHONE_H


class Phone : public Asset
{
    public:
        Phone();
        virtual ~Phone();

        std::string GetoperatingSystem() { return _operatingSystem; }
        void SetoperatingSystem(std::string val) { _operatingSystem = val; }
        std::string GetbillingIdentifier() { return _billingIdentifier; }
        void SetbillingIdentifier(std::string val) { _billingIdentifier = val; }
        std::string GetphoneNumber() { return _phoneNumber; }
        void SetphoneNumber(std::string val) { _phoneNumber = val; }
        Custodian Getcustodian() { return _custodian; }
        void Setcustodian(Custodian val) { _custodian = val; }

    protected:

    private:
        std::string _operatingSystem;
        std::string _billingIdentifier;
        std::string _phoneNumber;
        Custodian _custodian;
};

#endif // PHONE_H
