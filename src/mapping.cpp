#include "mapping.h"
#include <QGraphicsRectItem>
#include <QColor>
#include <QPen>


struct Map populateMap()
{
    struct Map result = {
        //0	1  2  3  4  5  6  7  8  9  0  1  2  3  4  5  6  7  8  9  0  1  2  3  4
        //A B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y
        {
            {9, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},	//0
            {0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0},	//1
            {0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0},	//2
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},	//3
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},	//4
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},	//5
            {1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0},	//6
            {1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1},	//7
            {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1},	//8
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},	//9
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},	//10
            {1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1},	//11
            {1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1},	//12
            {1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1},	//13
            {1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1},	//14
            {1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1},	//15
            {0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},	//16
            {0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},	//17
            {0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	//18
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},	//19
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},	//20
            {0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0},	//21
            {0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1},	//22
            {0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},	//23
            {0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}		//24
        },
        MAP_ROWS, MAP_COLS
    };
    return result;
}

struct Route getBlueRoute()
{
    struct Route result = {
        {
         {1, 0},
         {2, 0},
         {3, 0},
         {4, 0}, {4, 1}, {4, 2}, {4, 3}, {4, 4}, {4, 5}, {4, 6}, {4, 7}, {4, 8},{4, 9},
         {5, 9},
         {6, 9},
         {7, 9},
         {8, 9},
         {9, 9},
         {10, 9},{10, 10},
         {11, 10},
         {12, 10},
         {13, 10},
         {14, 10},
         {15, 10},
         {16, 10},
         {17, 10},{17, 11},{17, 12},{17, 13},{17, 14},{17, 15},{17, 16},{17, 17},{17, 18},{17, 19},{17, 20},
         {17, 21},{17, 22},{17, 23},{17, 24},
         },
        41, BLUE
    };
    return result;
}

struct Route getGreenRoute()
{
    struct Route result = {
        {
            {1, 0},
            {2, 0},
            {3, 0},
            {4, 0}, {4, 1}, {4, 2}, {4, 3}, {4, 4}, {4, 5}, {4, 6}, {4, 7}, {4, 8},{4, 9},{4, 10},{4, 11},
            {3, 11},
            {2, 11},
            {1, 11},
            {0, 11},{0, 12},{0, 13},{0, 14},{0, 15},{0, 16},{0, 17},{0, 18},{0, 19},
            {1, 19},
            {2, 19},
            {3, 19},
            {4, 19},
            {5, 19},
            {6, 19},
            {7, 19},
            {8, 19},
            {9, 19},{9, 20},{9, 21},{9, 22},{9, 23},{9, 24}
        },
        41, GREEN
    };
    return result;
}

struct Route getYellowRoute()
{
    struct Route result = {
        {
            {1, 0},
            {2, 0},
            {3, 0},
            {4, 0}, {4, 1}, {4, 2}, {4, 3},
            {5, 3},
            {6, 3},
            {7, 3},
            {8, 3},
            {9, 3},{9, 2},{9, 1},
            {10, 1},
            {11, 1},
            {12, 1},
            {13, 1},
            {14, 1},
            {15, 1},
            {16, 1},
            {17, 1},
            {18, 1},
            {19, 1},{19, 2},{19, 3},{19, 4},{19, 5},{19, 6},{19, 7},{19, 8},{19, 9},{19, 10},{19, 11},{19, 12},
            {19, 13},{19, 14},{19, 15},{19, 16},{19, 17},{19, 18},{19, 19},{19, 20},{19, 21},{19, 22},{19, 23},{19, 24}
        },
        47, YELLOW
    };
    return result;
}

struct Map addRoute(const struct Map* map, const struct Route* route)
{
    int r, c;
    struct Map result = { {0}, 0 };

    for (r = 0; r < map->numRows; r++)
    {
        for (c = 0; c < map->numCols; c++)
        {
            result.squares[r][c] = map->squares[r][c];
        }
    }
    result.numRows = map->numRows;
    result.numCols = map->numCols;

    for (r = 0; r < route->numPoints; r++)
    {
        result.squares[route->points[r].row][route->points[r].col] += route->routeSymbol;
    }

    return result;
}

//** Add multi-route to a map using the indicated symbol.
struct Map addMultipleRoutes(struct Map* map, struct Route* routes, int numRoutes) {
    struct Map updatedMap = *map;
    for (int i = 0; i < numRoutes; i++) {
        updatedMap = addRoute(&updatedMap, &routes[i]);
    }
    return updatedMap;
}

void drawMapInScene(QGraphicsScene* scene, const Map* map, int base1) {
    scene->clear();

    int tileSize = 20;
    char sym[] = { " XB?G?.?YS-?*?+?P" };

    for (int r = 0; r < map->numRows; r++) {
        for (int c = 0; c < map->numCols; c++) {
            QChar tile = sym[map->squares[r][c]];

            QColor color;
            if (tile == 'X') {
                color = Qt::black;
            } else if (tile == 'S'){
                color = Qt::red;
            } else if (tile == ' ') {
                color = Qt::white;
            } else if (tile == 'B'){
                color = Qt::blue;
            } else if (tile == 'G') {
                color = Qt::green;
            } else if (tile == 'Y') {
                color = Qt::yellow;
            }
            else {
                color = Qt::cyan;
            }

            QRectF rect(c * tileSize, r * tileSize, tileSize, tileSize);
            QGraphicsRectItem* rectItem = scene->addRect(rect, QPen(Qt::NoPen), QBrush(color));
            rectItem->setPen(QPen(Qt::black, 1));
        }
    }
}
