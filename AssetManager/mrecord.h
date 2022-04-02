#ifndef MRECORD_H
#define MRECORD_H
#include <string>
#include "date.h"

class MRecord
{
    public:
        MRecord();
        virtual ~MRecord();

        std::string Getname() { return _name; }
        void Setname(std::string val) { _name = val; }
        Date Gettimestamp() { return _timestamp; }
        void Settimestamp(Date val) { _timestamp = val; }

    protected:

    private:
        std::string _name;
        Date _timestamp;
};

#endif // MRECORD_H
