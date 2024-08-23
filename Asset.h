#ifndef ASSET_H
#define ASSET_H

#include <string>

class Asset {
public:
    Asset();
    Asset(int value,std::string product_type);
    std::string get_product_type();
    int get_value();
    ~Asset();

private:
    int value;
    std::string product_type;
};

#endif //ASSET_H