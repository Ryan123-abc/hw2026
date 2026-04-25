#define PI 3.14

enum Type
{
    CYLINDER,
    SQUARE_PRISM
};

struct Container
{
    Type type;
    union
    {
        double side;
        double radius;
    };
    double height;
    double surface_area;
    double volume;
};