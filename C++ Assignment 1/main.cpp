
#include <iostream>
#include <fstream>
#include "data.h"
#include "graphHandler.h"
//vector used to store the data objects.
vector<data> readData;


using namespace std;

void readInData();

//calls functions in the correct order. very simple.
int main() {

    readInData();
    //creates new graphHandler
    graphHandler *createNew = new graphHandler;

    int sizeGraph = 1000;
    while (sizeGraph > 100 || sizeGraph < 1) {
        cout << "enter the size of the graph (enter 50 for 50x50.For Assignment, 50 should be entered.maximum of 100):";
        sizeGraph++;
        cin >> sizeGraph;


    }
    //uses the new graphHandler to call various functions which take control of the graph
    createNew->createGraph(sizeGraph);
    createNew->printGraph(sizeGraph);
    createNew->draw(readData, sizeGraph);

    return 0;
}

void readInData() {
    //variables needed
    double X;
    double Y;
    double angle;
    double sensorValue[8];

    //files should be kept in the working directory (hard coded in)
    //opens streams needed to input the data
    ifstream ranges;
    ifstream poses;
    ranges.open("ranges.txt");
    poses.open("poses.txt");
    //loop reads in data
    for (int i = 0; i < 41; i++) {

        ranges >> sensorValue[0] >> sensorValue[1] >> sensorValue[2] >> sensorValue[3] >> sensorValue[4] >>
        sensorValue[5] >> sensorValue[6] >> sensorValue[7];
        poses >> X >> Y >> angle;

        data *newData = new data(i);
        newData->setXPosition(X);
        newData->setYPosition(Y);
        newData->setAngle(angle);
        //found it hard to pass into an array so each sensor has its own variable in the object
        newData->setSensors(sensorValue[0], 1);
        newData->setSensors(sensorValue[1], 2);
        newData->setSensors(sensorValue[2], 3);
        newData->setSensors(sensorValue[3], 4);
        newData->setSensors(sensorValue[4], 5);
        newData->setSensors(sensorValue[5], 6);
        newData->setSensors(sensorValue[6], 7);
        newData->setSensors(sensorValue[7], 8);

        //push back the object on the vector
        readData.push_back(*newData);

    }

    //close the files
    ranges.close();
    poses.close();
}