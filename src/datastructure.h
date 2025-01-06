#ifndef DATASTRUCTURE_H
#define DATASTRUCTURE_H

#include "mapping.h"

/**
 * Structure representing a truck and its route information.
 * @member route - the main route assigned to the truck
 * @member shortestDivert - the shortest diversion route for the truck
 * @member totalWeight - current total weight of cargo loaded on the truck
 * @member totalVolume - current total volume of cargo loaded on the truck
 * @member loadedPercentage - percentage of truck's maximum capacity utilized
 */
struct Truck
{
    struct Route route;            // Truck's assigned route information
    struct Route shortestDivert;   // Shortest diversion path for current shipment
    double totalWeight;            // Total weight of cargo on truck
    double totalVolume;            // Total volume of cargo on truck
    double loadedPercentage;        // Percentage of max capacity utilized
};

#endif // DATASTRUCTURE_H
