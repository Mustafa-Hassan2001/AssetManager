#ifndef ASSETREGISTER_H
#define ASSETREGISTER_H

#include <memory>
#include "Asset.h"
#include <map>
#include <iostream>




class AssetRegister
{
    public:
        virtual ~AssetRegister();
        static AssetRegister* instance();
        std::shared_ptr<Asset> retrieveAsset(const std::string &assetId);
        bool storeAsset(std::shared_ptr<Asset> asset);
        void displayAll();
        void displayComputers();
        void displayPhones();
        void displayTeles();
        void remove(std::string id);

    protected:

    private:
        static AssetRegister* inst;
        AssetRegister();
        std::map<std::string,std::shared_ptr<Asset>> _assets;
};

#endif // ASSETREGISTER_H
