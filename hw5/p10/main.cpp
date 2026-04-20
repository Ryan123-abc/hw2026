#include "fruit_products.h"
#include <iostream>
#define SIZE 21
using namespace std;

int main()
{
    string user_input = "";
    ProductInfo found_product;
    ProductInfo recommend_product;
    ProductInfo fruit_product[] = {
        {"Studio Display XDR", 94500, MONITOR},
        {"MacBook Air 13\"", 35900, LAPTOP},
        {"MacBook Air 15\"", 42900, LAPTOP},
        {"MacBook Pro 14\"", 54900, LAPTOP},
        {"MacBook Pro 16\"", 54900, LAPTOP},
        {"Studio Display", 52900, MONITOR},
        {"iPhone 17 Pro", 39900, PHONE},
        {"iPad Pro 11\"", 29400, TABLET},
        {"iPad Pro 13\"", 40400, TABLET},
        {"iPad Air 11\"", 18200, TABLET},
        {"iPad Air 13\"", 25200, TABLET},
        {"MacBook Neo", 19900, LAPTOP},
        {"iPhone Air", 36900, PHONE},
        {"Mac Studio", 67900, DESKTOP},
        {"iPhone 17e", 21900, PHONE},
        {"iPhone 16e", 20900, PHONE},
        {"iPhone 17", 29900, PHONE},
        {"iPhone 16", 25900, PHONE},
        {"iPhone 15", 20900, PHONE},
        {"Mac mini", 19900, DESKTOP},
        {"iMac", 42900, DESKTOP}
    };

    cout << "Welcome to Premium Fruit Stand." << endl;
    cout << "What can I get for you? ";
    getline(cin, user_input);
    if (!is_in_stock(fruit_product, SIZE, user_input, &found_product, &recommend_product))
    {
        cout << "Sorry! The product you entered was not found or currently not available." << endl;
        return -1;
    }

    cout << "Product Found: " << found_product.name << " Price: " << found_product.price << endl;
    cout << "You can also consider: " << recommend_product.name << " Price: " << recommend_product.price << endl;
    return 0;
}