//
//  Creature.h
//  test
//
//  Created by Nicole Messier on 2/1/16.
//
//

#ifndef __test__Creature__
#define __test__Creature__

#include <iostream>

#endif /* defined(__test__Creature__) */


#include "ofMain.h"


class Creature{
public:
    //make your constructor
    Creature();
    
    //variables
    float posX, posY; // position
    float size; //size of our alien
    float r, g, b; // color of our alien
    float velX, velY;
    
    //methods
    void setup();
    void display();
    void move();
    
};