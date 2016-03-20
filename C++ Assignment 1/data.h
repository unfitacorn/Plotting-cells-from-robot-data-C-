

#ifndef UNTITLED_DATA_H
#define UNTITLED_DATA_H
//includes needed
#include <vector>
#include <iostream>

class data {
    //structure of the data class. found it hard to have sensor as an array so used separate variables.
    //dataNum is used to identify and create the object.
    int dataNum;
    double xPosition;
    double yPosition;
    double angle;
    double sensor1;
    double sensor2;
    double sensor3;
    double sensor4;
    double sensor5;
    double sensor6;
    double sensor7;
    double sensor8;

//public functions in data.cpp
public:
    data(int num);

    double getXPosition() const;

    double getYPosition() const;

    double getAngle() const;

    double getSensors(int sensorNum) const;

    void setXPosition(double xPosition);

    void setYPosition(double yPosition);

    void setAngle(double angle);

    void setSensors(double sensors, int sensorNum);
};

#endif //UNTITLED_DATA_H