#include "container.h"
#include <iostream>
using namespace std;

double get_input_greater_than_0()
{
    double number;
    bool first_time = true;
    do
    {
        if (!first_time)
        {
            cout << "Value must be greater than 0!!! Please re-enter: ";
        }
        first_time = false;
        cin >> number;
    } while (number <= 0);
    return number;
}

int main()
{
    double input;
    Container container;
    Container *ptr = &container;
    do
    {
        cout << "Please select a container(1 for Cylinder, 2 for Square Prism): ";
        cin >> input;
    } while ((input != 1) && (input != 2));

    container.type = (input == 1) ? CYLINDER : SQUARE_PRISM;

    if (container.type == CYLINDER)
    {
        cout << "Please input the radius of the base: ";
        container.radius = get_input_greater_than_0();
    }
    else
    {
        cout << "Please input the side length of the square base: ";
        container.side = get_input_greater_than_0();
    }
    cout << "Enter the height of the container: ";
    container.height = get_input_greater_than_0();

    calculate(ptr);

    cout << "surface area = " << container.surface_area << endl;
    cout << "volume = " << container.volume << endl;
    return 0;
}