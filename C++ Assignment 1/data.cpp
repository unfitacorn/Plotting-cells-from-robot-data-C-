



#include "data.h"
using namespace std;
//constructor for the data object
data::data(int num) {

    dataNum = num;
    xPosition = 0;
    yPosition = 0;
    angle = 0;

    sensor1 = 0;
    sensor2 = 0;
    sensor3 = 0;
    sensor4 = 0;
    sensor5 = 0;
    sensor6 = 0;
    sensor7 = 0;
    sensor8 = 0;

}
//BELOW ARE THE GETTERS AND SETTERS FOR VARIOUS VARIABLES IN THE DATA OBJECT
double data::getXPosition() const {
    return xPosition;
}

double data::getYPosition() const {
    return yPosition;
}

double data::getAngle() const {
    return angle;
}

double data::getSensors(int sensorNum) const {
    switch (sensorNum) {
        case 1:
            return sensor1;
        case 2:
            return sensor2;
        case 3:
            return sensor3;
        case 4:
            return sensor4;
        case 5:
            return sensor5;
        case 6:
            return sensor6;
        case 7:
            return sensor7;
        case 8:
            return sensor8;
        default:
            cout << "ERROR SWITCH STATEMENT GETSENSORS";
    }
}

void data::setXPosition(double xPosition) {
    data::xPosition = xPosition;
}

void data::setYPosition(double yPosition) {
    data::yPosition = yPosition;
}

void data::setAngle(double angle) {
    data::angle = angle;
}

void data::setSensors(double sensors, int sensorNum) {
    switch (sensorNum) {
        case 1:
            sensor1 = sensors;
            break;
        case 2:
            sensor2 = sensors;
            break;
        case 3:
            sensor3 = sensors;
            break;
        case 4:
            sensor4 = sensors;
            break;
        case 5:
            sensor5 = sensors;
            break;
        case 6:
            sensor6 = sensors;
            break;
        case 7:
            sensor7 = sensors;
            break;
        case 8:
            sensor8 = sensors;
            break;
        default:
            cout << "ERROR SWITCH STATEMENT SETSENSORS";


    }

}