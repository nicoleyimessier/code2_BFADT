//
//  Rectangle.h
//  animations
//
//  Created by Nicole Messier on 3/28/16.
//
//

#ifndef __animations__Rectangle__
#define __animations__Rectangle__

#include <iostream>
#include "ofMain.h"


#endif /* defined(__animations__Rectangle__) */


class Rectangle{
public:
    //variables or properities
    float pct;
    ofPoint posA; //point A
    ofPoint posB; //point B
    ofPoint pos;   //output point
    float catchUpSpeed;
    
    //constructor
    Rectangle();
    
    //methods
    void interpolate(float myPct);
    void draw();
    void zeno(float catchX, float catchY);
};