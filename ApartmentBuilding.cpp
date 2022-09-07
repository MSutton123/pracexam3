#include <iostream>
#include <string>
#include "ApartmentBuilding.h"

using namespace std;

// default constructor allocates capacity for 10 units
ApartmentBuilding::ApartmentBuilding() {
    theCapacity = 10;
    current = 0;
}

// constructor for ApartmentBuilding with given num units
ApartmentBuilding::ApartmentBuilding(int capacity) {
    theCapacity = capacity;
}

// returns the  number of units allowed
int ApartmentBuilding::get_capacity() {
    return theCapacity;
}

// returns the current number of units in the apartment building
int ApartmentBuilding::get_current_number_of_units() {
    return current;
}

// returns a dynamic array of the units in the apartment building
Unit * ApartmentBuilding::get_contents() {
    return building;
}

// returns true and adds unit to the condo if there is sufficient space
// otherwise returns false
bool ApartmentBuilding::add_unit(Unit unit) {
    if (current < theCapacity){
        building[current] = unit;
        current++;
        return true;
    }
    else {
        return false;
    }
}

// destructor
ApartmentBuilding::~ApartmentBuilding() {
}