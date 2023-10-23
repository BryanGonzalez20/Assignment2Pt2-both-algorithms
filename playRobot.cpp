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



    // Initialize robot1
    robot.init();
    robot.print();




    // COIN CHECK: check if the current robot location is a coin location (specifically 0,0)
    for (int i = 0; i < 3; i++) {
        if (robot.getRobotXCoordinate() == coinLocationArray[i].getX() && robot.getRobotYCoordinate() == coinLocationArray[i].getY()) {
            numCoins++;
            cout << "Robot 1 found a coin" << endl;
            if (numCoins == 3) {
                cout << "You have found all 3 coins! Thank you for playing" << endl;
                cout << "Robot 1 made " << numMovesRobot1 << " moves" << endl << endl;
                return;
            }

        }

    }

    // Traverse every cell in the grid
    for (int y = 0; y <= 9; y++) { // y is the number of rows

        // Move all the way East
        while (!robot.eastEnd()) {

            robot.forward();
            numMovesRobot1++;
            robot.print();


            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robot.getRobotXCoordinate() == coinLocationArray[i].getX() && robot.getRobotYCoordinate() == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 1 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 1 made " << numMovesRobot1 << " moves" << endl << endl;
                        return;
                    }
                }
            }

        }

        // Change orientation to West once you've reached the East border. This will zag since were at the east end.
        // (y<9) Prevents from doing zag once you're in the last row
        if (y < 9 && robot.eastEnd()) {

            robot.zag();
            numMovesRobot1++;
            robot.print();


            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robot.getRobotXCoordinate() == coinLocationArray[i].getX() && robot.getRobotYCoordinate() == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 1 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 1 made " << numMovesRobot1 << " moves" << endl << endl;
                        return;
                    }

                }
            }
        }


        // Move all the way West
        while (!robot.westEnd()) {

            robot.forward();
            numMovesRobot1++;
            robot.print();

            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robot.getRobotXCoordinate() == coinLocationArray[i].getX() && robot.getRobotYCoordinate() == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 1 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 1 made " << numMovesRobot1 << " moves" << endl << endl;
                        return;
                    }

                }
            }
        }


        // Change orientation to East once you've reached the West border. This will zig since were at the west end.
        // (y<9) Prevents from doing zig once you're in the last row
        if (y < 9 && robot.westEnd()) {

            robot.zig();
            numMovesRobot1++;
            robot.print();


            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robot.getRobotXCoordinate() == coinLocationArray[i].getX() && robot.getRobotYCoordinate() == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 1 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 1 made " << numMovesRobot1 << " moves" << endl << endl;
                        return;
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


    // Initialize robot2
    robot2.init2();
    robot2.print();


    // ROBOT 2 CODE

    // COIN CHECK: check if the current robot location is a coin location (specifically 0,0)
    for (int i = 0; i < 3; i++) {
        if (robot2.getRobotX2Coordinate() == coinLocationArray[i].getX() && robot2.getRobotY2Coordinate() == coinLocationArray[i].getY()) {
            numCoins++;
            cout << "Robot 2 found a coin" << endl;
            if (numCoins == 3) {
                cout << "You have found all 3 coins! Thank you for playing" << endl;
                cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl << endl;
                return;
            }

        }
    }


    // Traverse every cell in the grid
    for(int x = 0; x <= 9; x++){
        // Move all the way south
        while(!robot2.southEnd()) {

            robot2.forward();
            numMovesRobot2++;
            robot2.print();

            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robot2.getRobotX2Coordinate() == coinLocationArray[i].getX() && robot2.getRobotY2Coordinate() == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 2 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl << endl;
                        return;
                    }

                }
            }

        }

        if(x < 9 && robot.southEnd()){

            robot2.zigSouth();
            numMovesRobot2++;
            robot2.print();

            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robot2.getRobotX2Coordinate() == coinLocationArray[i].getX() && robot2.getRobotY2Coordinate() == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 2 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl << endl;
                        return;
                    }

                }
            }


        }

        while(!robot2.northEnd()){

            robot2.forward();
            numMovesRobot2++;
            robot2.print();

            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robot2.getRobotX2Coordinate() == coinLocationArray[i].getX() && robot2.getRobotY2Coordinate() == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 2 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl << endl;
                        return;
                    }

                }
            }

        }

        if(x < 9 && robot.northEnd()){

            robot2.zagNorth();
            numMovesRobot2++;
            robot2.print();

            // COIN CHECK: check if the current robot location is a coin location
            for (int i = 0; i < 3; i++) {
                if (robot2.getRobotX2Coordinate() == coinLocationArray[i].getX() && robot2.getRobotY2Coordinate() == coinLocationArray[i].getY()) {
                    numCoins++;
                    cout << "Robot 2 found a coin" << endl;
                    if (numCoins == 3) {
                        cout << "You have found all 3 coins! Thank you for playing" << endl;
                        cout << "Robot 2 made " << numMovesRobot2 << " moves" << endl << endl;
                        return;
                    }

                }
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


    PlayRobot playRobot1;
    playRobot1.playRobot1(coinLocationArray);


    PlayRobot playRobot2;
    playRobot2.playRobot2(coinLocationArray);


    if (playRobot1.getNumMovesRobot1() > playRobot2.getNumMovesRobot2()){
        cout << "Robot 2 collected the coins in less moves. Robot 2 wins" << endl;
    }
    else if (playRobot2.getNumMovesRobot2() > playRobot1.getNumMovesRobot1()){
        cout << "Robot 1 collected the coins in less moves. Robot 1 wins" << endl;
    }
    else{
        cout << "Both robots took the same amount of moves. TIE!" << endl;
    }


}




/*
void PlayRobot::winner(){
    if (numMovesRobot1 > numMovesRobot2){
        cout << "Robot 1 collected the coins in less moves. Robot 1 wins" << endl;
    }
    else{
        cout << "Robot 2 collected the coins in less moves. Robot 2 wins" << endl;
    }

}

*/

int PlayRobot::getNumMovesRobot1(){
    return numMovesRobot1;
}

int PlayRobot::getNumMovesRobot2(){
    return numMovesRobot2;
}

