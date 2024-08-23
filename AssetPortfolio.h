#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H

#include "Asset.h"
#include <string>

class AssetPortfolio {
public:
    AssetPortfolio();
    AssetPortfolio(int size);
    int get_num_assets();
    bool has_asset(std::string product);
    Asset* get_assets();
    bool add_asset(Asset new_asset);
    ~AssetPortfolio();

private:
    int capacity;
    int num_assets;
    Asset* assets;
};

#endif // ASSETPORTFOLIO_H
