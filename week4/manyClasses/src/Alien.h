//
//  Alien.h
//  manyClasses
//
//  Created by Nicole Messier on 2/22/16.
//
//

#ifndef __manyClasses__Alien__
#define __manyClasses__Alien__

#include <iostream>
#include "ofMain.h"

#endif /* defined(__manyClasses__Alien__) */


class Alien{
    public:
    
    //variables
    int xPos, yPos;
    int r, g, b, alpha;
    int diam;
    int velX, velY; 
    
    //constructor
    Alien();
    
    //methods
    void setup(float _mouseX, float _mouseY);
    void update();
    void draw();
    
};