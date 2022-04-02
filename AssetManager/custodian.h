#ifndef CUSTODIAN_H
#define CUSTODIAN_H

#include <string>
#include "date.h"
class Custodian
{
    public:
        Custodian();
        virtual ~Custodian();

        std::string Getname() { return _name; }
        void Setname(std::string val) { _name = val; }
        std::string Getdepartement() { return _departement; }
        void Setdepartement(std::string val) { _departement = val; }
        std::string GetphoneNumber() { return _phoneNumber; }
        void SetphoneNumber(std::string val) { _phoneNumber = val; }
        Date GetempStartDate() { return _empStartDate; }
        void SetempStartDate(Date val) { _empStartDate = val; }

    protected:

    private:
        std::string _name;
        std::string _departement;
        std::string _phoneNumber;
        Date _empStartDate;
};

#endif // CUSTODIAN_H
