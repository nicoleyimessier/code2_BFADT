//
//  Person.h
//  drawing
//
//  Created by Nicole Messier on 2/8/16.
//
//

#ifndef __drawing__Person__
#define __drawing__Person__

#include <iostream>

#endif /* defined(__drawing__Person__) */

#include "ofMain.h"

class Person{
    public:
    
    Person();
    //propties
    int height;
    //ofColor fur;
    int r, g, b; 
    string smell;
    string name;
    
    //methods
    void walk();
    void sleep();
    void talk();
    void eat();
    void draw(float xPos, float yPos);
};