#ifndef PLAYROBOT_H
#define PLAYROBOT_H
#include "robot.h"
#include "point.h"
#include <iostream>
#include <cstdlib>
using namespace std;





class PlayRobot{
private:
    int robotX = 0;
    int robotY = 0;
    int robotX2 = 0;
    int robotY2 = 0;

    int numMovesRobot1 = 0;
    int numMovesRobot2 = 0;

    int numCoins = 0;

    // cheking var
    int previousX;
    int previousY;
    int previousX2;
    int previousY2;




public:

    Robot robot;
    Robot robot2;






    PlayRobot();
    void playRobot1(Point coinLocationArray[]);
    void playRobot2(Point coinLocationArray[]);
    int getNumCoins();

    // maybe
    void init();
    void init2();

    // one big
    void playRobots(Point coinLocationArray[]);;
};

#endif