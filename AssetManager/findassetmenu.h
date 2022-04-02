#ifndef FINDASSETMENU_H
#define FINDASSETMENU_H

#include "menuinterface.h"


class FindAssetMenu : public MenuInterface
{
    public:
        FindAssetMenu(std::ostream &display, std::istream &input);
        virtual ~FindAssetMenu();
        void displayMainMenu() const;
        bool processSelection(char selection);

    protected:

    private:
        void searchById();
        void searchBySerial();
};

#endif // FINDASSETMENU_H
