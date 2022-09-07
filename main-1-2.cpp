#include <iostream>
#include <string>
#include "ApartmentBuilding.h"

using namespace std;

int main() {

    Unit *one, *two, *three, *four;

    one = new Unit(1,1,1.1);
    two = new Unit(2,2,2.2);
    three = new Unit(3,3,3.3);
    four = new Unit(4,4,-4.4);

    ApartmentBuilding *home;
    
    home = new ApartmentBuilding(3);

    std::cout << "The capacity of this apartment building is: " << home->get_capacity() << std::endl;

    home->add_unit(*one);
    std::cout << "The current number of units in the building is: " << home->get_current_number_of_units() << std::endl;

    home->add_unit(*two);
    std::cout << "The current number of units in the building is: " << home->get_current_number_of_units() << std::endl;

    home->add_unit(*three);
    std::cout << "The current number of units in the building is: " << home->get_current_number_of_units() << std::endl;

    home->add_unit(*four);
    std::cout << "The current number of units in the building is: " << home->get_current_number_of_units() << std::endl;




}