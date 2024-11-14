#include <stdio.h>

struct point {
    int x;
    int y;
};

// not used struct

int x = 0;
int y = 5;

draw(x,y);

// using struct

struct point p;
p.y = 10;
p.y = 6;

draw(p.x,p.y);

// typedef create a new type with new name

typedef struct {
    int x;
    int y;
} point;

point p;

typedef struct {
    char * brand;
    char * model;
} vehicle;

vehicle mycar;

mycar.brand = "Fiat";
mycar.model = "Uno";

