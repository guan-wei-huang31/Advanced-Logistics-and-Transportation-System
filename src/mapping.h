#ifndef MAPPING_H
#define MAPPING_H

#include <QGraphicsScene>

#define NUM_ROUTES 3
#define MAP_ROWS 25
#define MAP_COLS 25
#define MAX_ROUTE 100
#define BLUE 2
#define GREEN 4
#define YELLOW 8
/**
* A map is a 2D raster representation of a map with contents of the map encoded as numeric values.
*/
struct Map
{
    int squares[MAP_ROWS][MAP_COLS];
    int numRows;
    int numCols;
};

/**
* A point represents the row-column position of a square on a map.
*/
struct Point
{
    //char row;
    //char col;
    int row;  //change char to integer
    int col;  //change char to integer
};

/**
* A route is a collection of points that are adjacent to one another and constitute a path from the
* first point on the path to the last.
*/
struct Route
{
    struct Point points[MAX_ROUTE];
    int numPoints;
    char routeSymbol;
};


/**
* Build and return the route for the blue trucks.
* @returns - the route for the blue trucks.
*/
struct Route getBlueRoute();

/**
* Build and return the route for the green trucks.
* @returns - the route for the green trucks.
*/
struct Route getGreenRoute();

/**
* Build and return the route for the yellow trucks.
* @returns - the route for the yellow trucks.
*/
struct Route getYellowRoute();

/**
* Create a map with the position of all buildings in it.
* @returns - a map with the position of all buildings added to it.
*/
struct Map populateMap();


/**
* Add multi-route to a map using the indicated symbol.
* @param map - map to add route to
* @param routes - the routes to add to the map
* @returns a copy of the original map with the route added to it
*/
struct Map addMultipleRoutes(struct Map* map, struct Route* routes, int numRoutes);



void drawMapInScene(QGraphicsScene* scene, const Map* map, int base1);


#endif // MAPPING_H
