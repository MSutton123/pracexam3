#include <iostream>
#include <string>
#include "Unit.h"

using namespace std;

// a default constructor
Unit::Unit() {
    beds = 0;
    val = 0;
    size = 0.0;
} 

// a constructor that takes: the value in dollars,
// number of bedrooms, and number of square meters as parameters
Unit::Unit(int unit_val, int num_beds, double unit_size) {
    if (unit_val > 0) {
        val = unit_val;
    }
    if (num_beds > 0) {
        beds = num_beds;
    }
    if (unit_size > 0) {
        size = unit_size;
    }
}

// returns the number of bedrooms for the unit
int Unit::get_num_bedrooms() {
    return beds;
}

// returns the value in dollars of the Unit
int Unit::get_value() {
    return val;
}

// returns the number of square meters in the unit
double Unit::get_area() {
    return size;
}
