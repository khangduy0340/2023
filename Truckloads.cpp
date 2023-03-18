#include "Truckloads.h"
#include <iostream>
#include <cmath>
Truckloads::Truckloads(){};

int Truckloads::numTrucks(int numCrates, int loadSize)
{
    // Validate input (constraints)
    if ((numCrates < 2 && numCrates > 10000) || (loadSize < 1 && loadSize > (numCrates - 1)))
    {

        return 0;
    };

   
    // haven't fount it
    // Base case
    // In case the numCrates is equal or less than Truck capacity, it should all count as one as one Truck can chuck em
    if (numCrates <= loadSize)
    {   
        
        return 1;
    };

   
    //  the first part of the sum handle the count of odd numCrate which round up the Crates
    //  the second part of the sum indicate the case where we divide the even numCrate

    return numTrucks(numCrates / 2 + numCrates % 2, loadSize) + numTrucks(numCrates / 2, loadSize);
}

// Logic check
// Input numTrucks(14,3)
// numTrucks(7,3) + numTrucks(7,3) -> no Truck
// numTrucks(4,3)x2 + numTrucks(3,3)x2 -> 2 Trucksm
// numTrucks(2,3)x4 + numTrucks(3,3)x2 -> 6 Trucks