#include "playRobot.h"


PlayRobot::PlayRobot():
    robotX(0),
    robotY(0),
    robotX2(0),
    robotY2(0),
    numMovesRobot1(0),
    numMovesRobot2(0),
    numCoins(0)
{}


void PlayRobot::playRobot1(Point coinLocationArray[]){

    robot.init();
    robot.print();


    // COIN CHECK: check if the current robot location is a coin location (specifically 0,0)
    for (int i = 0; i < 3; i++) {
        if (robotX == coinLocationArray[i].getX() && robotY == coinLocationArray[i].getY()) {
            numCoins++;
            cout << "You've found a coin" << endl;
            if (numCoins == 3) {
                cout << "You have found all 3 coins! Thank you for playing" << endl;
                cout << "The robot made " << numMovesRobot1 << " moves" << endl;
                exit(0);
            }
        }
    }




    // Traverse every cell in the grid
    for (int y = 0; y <= 9; y++) { // y is the number of rows

        // Move all the way East
        while (!robot.eastEnd()) {

            robot.forward();
            robotX++; // update X location
            numMovesRobot1++;
            robot.print();


            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robotX == coinLocationArray[i].getX() && robotY == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "You've found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "The robot made " << numMovesRobot1 << " moves" << endl;
                        exit(0);
                    }
                }
            }
        }

        // Change orientation to West once you've reached the East border. This will zag since were at the east end.
        // (y<9) Prevents from doing zag once you're in the last row
        if (y < 9) {
            robot.zag();
            robotY++; // update Y location
            numMovesRobot1++;
            robot.print();



            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robotX == coinLocationArray[i].getX() && robotY == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "You've found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "The robot made " << numMovesRobot1 << " moves" << endl;
                        exit(0);
                    }
                }
            }
        }

        // Move all the way West
        while (!robot.westEnd()) {
            robot.forward();
            robotX--; // update X location
            numMovesRobot1++;
            robot.print();


            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robotX == coinLocationArray[i].getX() && robotY == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "You've found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "The robot made " << numMovesRobot1 << " moves" << endl;
                        exit(0);
                    }
                }
            }
        }

        // Change orientation to East once you've reached the West border. This will zig since were at the west end.
        // (y<9) Prevents from doing zig once you're in the last row
        if (y < 9) {
            robot.zig();
            robotY++; // update Y location
            numMovesRobot1++;
            robot.print();



            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robotX == coinLocationArray[i].getX() && robotY == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "You've found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "The robot made " << numMovesRobot1 << " moves" << endl;
                        exit(0);
                    }
                }
            }
        }

        // Don't understand why but it works
        if (robot.southEnd()) {
            break;
        }
    }

}



void PlayRobot::playRobot2(Point coinLocationArray[]){


    robot2.init2();
    robot2.print();
    // COIN CHECK: check if the current robot location is a coin location (specifically 0,0)
    for (int i = 0; i < 3; i++) {
        if (robotX2 == coinLocationArray[i].getX() && robotY2 == coinLocationArray[i].getY()) {
            numCoins++;
            cout << "You've found a coin" << endl;
            if (numCoins == 3) {
                cout << "You have found all 3 coins! Thank you for playing" << endl;
                cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl;
                exit(0);
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
                        exit(0);
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
                        exit(0);
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
                        exit(0);
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
                        exit(0);
                    }
                }
            }
        }

        if (robot2.eastEnd()) {
            break;
        }


    }


}
