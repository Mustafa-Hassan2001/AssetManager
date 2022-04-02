#include "assetregister.h"
#include <memory>
#include "Asset.h"
#include<algorithm>
#include "computer.h"


AssetRegister* AssetRegister::inst = 0;

std::shared_ptr<Asset> AssetRegister::retrieveAsset(const std::string &assetId)
{
  auto assetIt = _assets.find(assetId);
  if (assetIt != _assets.end()) {
    return assetIt->second;
  }
  return nullptr;
}


bool AssetRegister::storeAsset(std::shared_ptr<Asset> asset)
{
  if (!_assets.count(asset->id())) {
    _assets[asset->id()] = std::shared_ptr<Asset>{asset};
    return true;
  }
  return false;
}

AssetRegister::~AssetRegister(){
}
AssetRegister::AssetRegister()
{

}



AssetRegister* AssetRegister::instance()
{
  if(inst == 0)
    {
        inst = new AssetRegister();
    }
    return inst;
}

void AssetRegister::displayAll(){
         for(std::map<std::string,std::shared_ptr<Asset>>::iterator it = _assets.begin(); it != _assets.end(); ++it) {
            std::shared_ptr<Asset> ptr = (it->second);
            Asset *asset = ptr.get();
            asset->display();
        }
}


void AssetRegister::displayComputers(){
        for(std::map<std::string,std::shared_ptr<Asset>>::iterator it = _assets.begin(); it != _assets.end(); ++it) {
            std::shared_ptr<Asset> ptr = (it->second);
            Asset *asset = ptr.get();
            if(Computer *c = dynamic_cast<Computer*>(asset)){
                c->display();
            }
        }

}

void AssetRegister::displayPhones(){
        for(std::map<std::string,std::shared_ptr<Asset>>::iterator it = _assets.begin(); it != _assets.end(); ++it) {
            std::shared_ptr<Asset> ptr = (it->second);
            Asset *asset = ptr.get();
            if(Phone *c = dynamic_cast<Phone*>(asset)){
                c->display();
            }
        }
}
void AssetRegister::displayTeles(){
        for(std::map<std::string,std::shared_ptr<Asset>>::iterator it = _assets.begin(); it != _assets.end(); ++it) {
            std::shared_ptr<Asset> ptr = (it->second);
            Asset *asset = ptr.get();
            if(Television *c = dynamic_cast<Television*>(asset)){
                c->display();
            }
        }
}


void AssetRegister::remove(std::string id){
    auto assetIt =  _assets.find(id);
    displayAsset(*(assetIt->second));
    _assets.erase(assetIt);
}
