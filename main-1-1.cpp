#include <iostream>
#include <string>
#include "Unit.h"

using namespace std;

int main() {

    Unit *one, *two, *three, *four;

    one = new Unit(5,2,4.5);
    two = new Unit(-1,2,4.5);
    three = new Unit(1,-2,4.5);
    four = new Unit(1,2,-4.5);

    std::cout << "one" << " " << one->get_value() << " " << one->get_num_bedrooms() << " " << one->get_area() << std:: endl;
    std::cout << "two" << " " << two->get_value() << " " << two->get_num_bedrooms() << " " << two->get_area() << std:: endl;
    std::cout << "three" << " " << three->get_value() << " " << three->get_num_bedrooms() << " " << three->get_area() << std:: endl;
    std::cout << "four" << " " << four->get_value() << " " << four->get_num_bedrooms() << " " << four->get_area() << std:: endl;


}