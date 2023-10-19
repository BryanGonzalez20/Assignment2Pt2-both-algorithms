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



    // COIN CHECK: check if the current robot location is a coin location (specifically 0,0)
    for (int i = 0; i < 3; i++) {
        if (robot.getRobotXCoordinate() == coinLocationArray[i].getX() && robot.getRobotYCoordinate() == coinLocationArray[i].getY()) {
            numCoins++;
            cout << "Robot 1 found a coin" << endl;
            if (numCoins == 3) {
                cout << "You have found all 3 coins! Thank you for playing" << endl;
                cout << "Robot 1 made " << numMovesRobot1 << " moves" << endl;
                exit(0);
            }

        }

    }

    // Traverse every cell in the grid
    for (int y = 0; y <= 9; y++) { // y is the number of rows

        // Move all the way East
        while (!robot.eastEnd()) {

            previousX = robot.getRobotXCoordinate(); // setting the previous for later comparison if position has changed

            robot.forward();
            //robotX++; // update X location
            numMovesRobot1++;
            robot.print();
            cout << robot.getRobotXCoordinate() << ", " << robot.getRobotYCoordinate() << endl;


            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robot.getRobotXCoordinate() == coinLocationArray[i].getX() && robot.getRobotYCoordinate() == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 1 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 1 made " << numMovesRobot1 << " moves" << endl;
                        exit(0);
                    }
                }
            }

            // added code to switch turns
            /*if (robotX != previousX || robotY != previousY){
                return;
            }*/

        }

        // Change orientation to West once you've reached the East border. This will zag since were at the east end.
        // (y<9) Prevents from doing zag once you're in the last row
        if (y < 9 && robot.eastEnd()) {
            previousY = robot.getRobotYCoordinate(); // setting the previous for later comparison if position has changed

            robot.zag();
            //robotY++; // update Y location
            numMovesRobot1++;
            robot.print();
            cout << robot.getRobotXCoordinate() << ", " << robot.getRobotYCoordinate() << endl;


            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robot.getRobotXCoordinate() == coinLocationArray[i].getX() && robot.getRobotYCoordinate() == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 1 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 1 made " << numMovesRobot1 << " moves" << endl;
                        exit(0);
                    }

                }
            }
            // added code to switch turns
            /*if (robotX != previousX || robotY != previousY){
                return;
            }*/
        }


        // Move all the way West
        while (!robot.westEnd()) {

            previousX = robot.getRobotXCoordinate(); // setting the previous for later comparison if position has changed

            robot.forward();
            //robotX--; // update X location
            numMovesRobot1++;
            robot.print();
            cout << robot.getRobotXCoordinate() << ", " << robot.getRobotYCoordinate() << endl;


            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robot.getRobotXCoordinate() == coinLocationArray[i].getX() && robot.getRobotYCoordinate() == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 1 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 1 made " << numMovesRobot1 << " moves" << endl;
                        exit(0);
                    }

                }
            }
            // added code to switch turns
            /*if (robotX != previousX || robotY != previousY){
                return;
            }*/
        }


        // Change orientation to East once you've reached the West border. This will zig since were at the west end.
        // (y<9) Prevents from doing zig once you're in the last row
        if (y < 9 && robot.westEnd()) {
            previousY = robot.getRobotYCoordinate(); // setting the previous for later comparison if position has changed

            robot.zig();
            //robotY++; // update Y location
            numMovesRobot1++;
            robot.print();
            cout << robot.getRobotXCoordinate() << ", " << robot.getRobotYCoordinate() << endl;


            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robot.getRobotXCoordinate() == coinLocationArray[i].getX() && robot.getRobotYCoordinate() == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 1 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 1 made " << numMovesRobot1 << " moves" << endl;
                        exit(0);
                    }

                }
            }
            // added code to switch turns
            /*if (robotX != previousX || robotY != previousY){
                return;
            }*/
        }

        // Don't understand why but it works
        if (robot.southEnd()) {
            break;
        }
    }

}



void PlayRobot::playRobot2(Point coinLocationArray[]){


    // ROBOT 2 CODE

    // COIN CHECK: check if the current robot location is a coin location (specifically 0,0)
    for (int i = 0; i < 3; i++) {
        if (robotX2 == coinLocationArray[i].getX() && robotY2 == coinLocationArray[i].getY()) {
            numCoins++;
            cout << "Robot 2 found a coin" << endl;
            if (numCoins == 3) {
                cout << "You have found all 3 coins! Thank you for playing" << endl;
                cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl;
                exit(0);
            }

        }
    }


    // Traverse every cell in the grid
    for(int x = 0; x <= 9; x++){
        // Move all the way south
        while(!robot2.southEnd()) {
            previousY2 = robotY2; // setting the previous for later comparison if position has changed

            robot2.forward();
            robotY2++;
            numMovesRobot2++;
            robot2.print();
            cout << robotX2 << ", " << robotY2 << endl;

            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robotX2 == coinLocationArray[i].getX() && robotY2 == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 2 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl;
                        exit(0);
                    }

                }
            }

            // added code to switch turns
            if (robotX2 != previousX2 || robotY2 != previousY2){
                return;
            }

        }

        if(x < 9 && robot.southEnd()){
            previousX2 = robotX2; // setting the previous for later comparison if position has changed

            robot2.zigSouth();
            robotX2++;
            numMovesRobot2++;
            robot2.print();
            cout << robotX2 << ", " << robotY2 << endl;

            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robotX2 == coinLocationArray[i].getX() && robotY2 == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 2 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl;
                        exit(0);
                    }

                }
            }

            // added code to switch turns
            if (robotX2 != previousX2 || robotY2 != previousY2){
                return;
            }

        }

        while(!robot2.northEnd()){
            previousY2 = robotY2; // setting the previous for later comparison if position has changed

            robot2.forward();
            robotY2--;
            numMovesRobot2++;
            robot2.print();
            cout << robotX2 << ", " << robotY2 << endl;

            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robotX2 == coinLocationArray[i].getX() && robotY2 == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 2 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl;
                        exit(0);
                    }

                }
            }
            // added code to switch turns
            if (robotX2 != previousX2 || robotY2 != previousY2){
                return;
            }

        }

        if(x < 9 && robot.northEnd()){
            previousX2 = robotX2; // setting the previous for later comparison if position has changed

            robot2.zagNorth();
            robotX2++;
            numMovesRobot2++;
            robot2.print();
            cout << robotX2 << ", " << robotY2 << endl;

            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robotX2 == coinLocationArray[i].getX() && robotY2 == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 2 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl;
                        exit(0);
                    }

                }
            }
            // added code to switch turns
            if (robotX2 != previousX2 || robotY2 != previousY2){
                return;
            }
        }

        if (robot2.eastEnd()) {
            break;
        }



    }

}

int PlayRobot::getNumCoins(){
    return numCoins;
}





void PlayRobot::playRobots(Point coinLocationArray[]) {

    // Initialize robot1
    robot.init();
    robot.print();

    // Initialize robot2
    /*robot2.init2();
    robot2.print();*/

    int currentRobotTurn = 1;

    // Big loop that will hold both robots movements
    while (numCoins < 3) {
        if (currentRobotTurn == 1) {

            // ROBOT 1 CODE
            playRobot1(coinLocationArray);
            currentRobotTurn = 2;

        } // end of robot 1 movement
        /*else if (currentRobotTurn == 2) {

            playRobot2(coinLocationArray);
            currentRobotTurn = 1;

        } // end of robot 2 movement*/


    } // end of while coins < 3


} // end of function












