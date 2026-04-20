#include <string>
using namespace std;

enum ProductCategory
{
    MONITOR,
    LAPTOP,
    DESKTOP,
    TABLET,
    PHONE
};

struct ProductInfo
{
    string name;
    int price;
    ProductCategory category;
};