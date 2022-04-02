#ifndef HMD_H
#define HMD_H

#include "Asset.h"
#include "custodian.h"


class HMD : public Asset
{
    public:
        HMD();
        virtual ~HMD();

        Custodian Getcustodian() { return _custodian; }
        void Setcustodian(Custodian val) { _custodian = val; }

    protected:

    private:
        Custodian _custodian;
};

#endif // HMD_H
