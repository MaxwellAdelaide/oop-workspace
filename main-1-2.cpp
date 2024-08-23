#include <iostream>
#include "AssetPortfolio.h"
int main() {
    AssetPortfolio portfolio(2);
    std::cout << "Number of assets: " << portfolio.get_num_assets() << std::endl;
    Asset asset1(100, "Stock");
    Asset asset2(200, "Bond");
    if (portfolio.add_asset(asset1)) {
        std::cout << "Added asset1 to portfolio" << std::endl;
    }
    if (portfolio.add_asset(asset2)) {
        std::cout << "Added asset2 to portfolio" << std::endl;
    }
    std::cout << "Number of assets: " << portfolio.get_num_assets() << std::endl;
    std::cout << "Has asset 'Stock': " << (portfolio.has_asset("Stock") ? "Yes" : "No") << std::endl;
    std::cout << "Has asset 'Gold': " << (portfolio.has_asset("Gold") ? "Yes" : "No") << std::endl;
    Asset* assets = portfolio.get_assets();
    for (int i = 0; i < portfolio.get_num_assets(); i) {
        std::cout << "Asset " << i + 1 << " - Type: " << assets[i].get_product_type() << ", Value: " << assets[i].get_value() << std::endl;
    }
    return 0;
}
