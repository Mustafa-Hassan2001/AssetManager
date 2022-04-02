#ifndef DISPLAYBYTYPEINTERFACE_H
#define DISPLAYBYTYPEINTERFACE_H

#include "menuinterface.h"


class DisplayByTypeInterface : public MenuInterface
{
    public:
        DisplayByTypeInterface(std::ostream &display, std::istream &input);
        virtual ~DisplayByTypeInterface();
        void displayMainMenu() const;
        bool processSelection(char selection);

    protected:

    private:
};

#endif // DISPLAYBYTYPEINTERFACE_H
