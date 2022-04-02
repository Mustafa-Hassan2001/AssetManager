#ifndef TELEVISION_H
#define TELEVISION_H

#include "Asset.h"


class Television : public Asset
{
    public:
        Television();
        virtual ~Television();

        std::string location() { return _location; }

    protected:

    private:
        std::string _location;
};

#endif // TELEVISION_H
