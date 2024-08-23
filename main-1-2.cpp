#include <iosstream>
#include "AssetPortfolio.h"

int main() {
    AssetPortfolio portfolio(2);
    std::cout <<"Num of assets:"<< portfolio.get_num_assets() <<std::endl;

    Asset asset1(100,"A")
    Asset asset2(200,"B")

    if (portfolio.add_asset(asset1)) {
        std::cout << "Add asset1 to portfolio" << std::endl;
    }
    if (portfolio.add_asset(asset2)) {
        std::cout << "Add asset2 to portfolio" << std::endl;
    }
    return 0;

}