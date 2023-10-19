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





    // Robots information:

    /*
    Robot robot;
    Robot robot2;
    robot.init();
    robot2.init2();
*/


    /*

    int currentRobotTurn = 1;
    while (numCoinsRobot1 + numCoinsRobot2 < 3){

        if(currentRobotTurn == 1){
            // CODE FOR ROBOT 1 MOVES


        }
        else {
            // CODE FOR ROBOT 2 TURN


        }


        // Switch turns
        currentRobotTurn = (currentRobotTurn == 1) ? 2 : 1;


    }



*/






    // ROBOT 1





   // PLAYROBOT CODE


   PlayRobot playRobot;
   // playRobot.playRobot1(coinLocationArray);

   // playRobot.playRobot2(coinLocationArray);




    // ROBOT 2



/*

    robot2.print();
    // COIN CHECK: check if the current robot location is a coin location (specifically 0,0)
    for (int i = 0; i < 3; i++) {
        if (robotX2 == coinLocationArray[i].getX() && robotY2 == coinLocationArray[i].getY()) {
            numCoins++;
            cout << "You've found a coin" << endl;
            if (numCoins == 3) {
                cout << "You have found all 3 coins! Thank you for playing" << endl;
                cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl;
                return 0;
            }
        }
    }


    for(int x = 0; x <= 9; x++){
        // Move all the way south
        while(!robot2.southEnd()) {

            robot2.forward();
            robotY2++;
            numMovesRobot2++;
            robot2.print();

            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robotX2 == coinLocationArray[i].getX() && robotY2 == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "You've found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl;
                        return 0;
                    }
                }
            }
        }

        if(x < 9){
            robot2.zigSouth();
            robotX2++;
            numMovesRobot2++;
            robot2.print();

            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robotX2 == coinLocationArray[i].getX() && robotY2 == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "You've found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl;
                        return 0;
                    }
                }
            }

        }

        while(!robot2.northEnd()){
            robot2.forward();
            robotY2--;
            numMovesRobot2++;
            robot2.print();

            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robotX2 == coinLocationArray[i].getX() && robotY2 == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "You've found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl;
                        return 0;
                    }
                }
            }
        }

        if(x < 9){
            robot2.zagNorth();
            robotX2++;
            numMovesRobot2++;
            robot2.print();

            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robotX2 == coinLocationArray[i].getX() && robotY2 == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "You've found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl;
                        return 0;
                    }
                }
            }
        }

        if (robot2.eastEnd()) {
            break;
        }


    }

*/



    return 0;
}


