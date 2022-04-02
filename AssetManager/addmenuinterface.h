#ifndef ADDMENUINTERFACE_H
#define ADDMENUINTERFACE_H

#include "menuinterface.h"
#include <iostream>
#include "Asset.h"
#include <memory>


class AddMenuInterface : public MenuInterface
{
    public:
        AddMenuInterface(std::ostream &display, std::istream &input);
        void displayMainMenu() const;
        bool processSelection(char selection);
    private:
        bool addComputer();
        void addPhone();
        void addTele();
        void setAssetInfo(std::shared_ptr<Asset> asset);
};

#endif // ADDMENUINTERFACE_H
