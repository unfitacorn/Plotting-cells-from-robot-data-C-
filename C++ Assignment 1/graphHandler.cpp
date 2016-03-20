//includes header file
#include "graphHandler.h"


//created an empty graph needed for plotting
void graphHandler::createGraph(int size) {
    //create the corners
    graph[0].append("+");
    graph[size + 1].append("+");
    //loop to add borders to the graph
    for (int i = 1; i < size + 1; i++) {
        graph[0].append("--");
        graph[size + 1].append("--");
        graph[i].append("|");
        //loop to include the empty spaces needed for the graph.
        for (int j = 0; j < size * 2; j++) {
            graph[i].append(" ");
        }
        graph[i].append("|");


    }
    //create the corners
    graph[0].append("+");
    graph[size + 1].append("+");
}

//prints the graph, in reverse order.
void graphHandler::printGraph(int size) {

    for (int i = size + 1; i >= 0; i--) {

        cout << graph[i] << endl;

    }

}


//draws the graph when called.
void graphHandler::draw(vector<data> readIn, int graphSize) {
    double x;
    double y;

    for (int i = 0; i < readIn.size(); i++) {

        for (int j = 0; j < 8; j++) {
            if ((readIn[i].getSensors(j + 1)) < 2.5) {
                //uses the formula provided in assignment brief to calculate the x and y positions of the objects detected.
                x = 5 * (readIn[i].getXPosition() +
                         readIn[i].getSensors(j + 1) * cos(convertToRad(readIn[i].getAngle() + (j * 45))));
                y = 5 * (readIn[i].getYPosition() +
                         readIn[i].getSensors(j + 1) * sin(convertToRad(readIn[i].getAngle() + (j * 45))));
                //if it is in the boundaries then add it to the graph
                if (x < graphSize && x > 0 && y < graphSize && y > 0) {
                    int yr = round(y);
                    int xr = round(x) * 2;


                    graph[yr + 1].replace(xr, 1,"*");
                    //small delay to show "animation"
                    usleep(50000);
                    printGraph(graphSize);


                }

            }
        }
    }
}

//converts degrees into radians needed for the formula provided in the assignment brief
double graphHandler::convertToRad(double degree) {
    double rad;
    rad = degree * M_PI / 180;
    return rad;

}