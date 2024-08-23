#include "AssetPortfolio.h"

AssetPortfolio::AssetPortfolio():capacity(0),num_assets(0),assets(nullptr) {}

AssetPortfolio::AssetPortfolio(int size):capacity(size),num_assets(0),assets(new Asset[size]) {}

int AssetPortfolio::get_num_assets(){
    return num_assets;
} 

bool has_asset(std::string product); 
    if (
    )
    {
        return true;
    }
        return false;

bool add_asset(Asset new_asset);


AssetPortfolio::~AssetPortfolio() {
    delete[] assets;
}
