#include <iostream>
#include <cstdlib>
#include "point.h"
#include "world.h"
#include "robot.h"
#include "playRobot.h"

using namespace std;

int main() {
    int x;
    int y;
    srand(time(NULL));

    // Creating an Array that has 3 coin locations ex. (0,0) (0,0) (0,0)
    Point coinLocationArray[3];
    World world;

    for (int i = 0; i < 3; i++) {

        x = rand() % 10;
        y = rand() % 10;


        // Setting the value for 3 different coin locations
        coinLocationArray[i].set(x, y);

        // Reiterating the locations for the user
        cout << "Coordinate " << i + 1 << ": " << endl;
        coinLocationArray[i].print();

        // Set the values of the coins with the coin number
        world.set(i, x, y);
    }

    // Print all the coin numbers and the coin locations for user in a nice format
    cout << endl;
    world.print();
    cout << endl;




    // PLAYROBOT CODE


    PlayRobot playRobot;
    playRobot.playRobots(coinLocationArray);

    return 0;
}


