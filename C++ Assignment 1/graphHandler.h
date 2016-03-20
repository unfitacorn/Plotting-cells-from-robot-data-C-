

#ifndef ASSIGNMENT_GRAPHHANDLER_H
#define ASSIGNMENT_GRAPHHANDLER_H

//includes needed
#include "data.h"
#include <iostream>
#include <cmath>
#include <unistd.h>
using namespace std;

class graphHandler {
//public functions
public:
    void createGraph(int size);

    void printGraph(int size);

    string graph[110];

    void draw(vector<data> readIn, int graphSize);

    double convertToRad(double degree);
};


#endif //ASSIGNMENT_GRAPHHANDLER_H