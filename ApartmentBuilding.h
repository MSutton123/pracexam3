#ifndef APARTMENTBUILDING_H
#define APARTMENTBUILDING_H

#include <string>
#include "Unit.h"

using namespace std;

// Class definition for an apartment building
class ApartmentBuilding
{
public:
        int current;
        int theCapacity = 10;;
        Unit *building = new Unit[theCapacity];
        ApartmentBuilding();  // default constructor allocates capacity for 10 units
        ApartmentBuilding(int capacity);  // constructor for ApartmentBuilding with given num units
        int get_capacity();  // returns the  number of units allowed

        // returns the current number of units in the apartment building
        int get_current_number_of_units(); 

        // returns a dynamic array of the units in the apartment building
        Unit * get_contents();

        // returns true and adds unit to the condo if there is sufficient space
        // otherwise returns false
        bool add_unit(Unit unit);

        // destructor
        ~ApartmentBuilding();

};
#endif //APARTMENTBUILDING_H

