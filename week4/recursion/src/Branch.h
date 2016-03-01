//
//  Branch.h
//  recursion
//
//  Created by Nicole Messier on 2/23/16.
//
//

#ifndef __recursion__Branch__
#define __recursion__Branch__

#include <iostream>
#include "ofMain.h"

#endif /* defined(__recursion__Branch__) */

class Branch{
public:
    
    float length;
    float theta;
    float variation; 
    
    void setup(float _length, float _theta, float var);
    void update();
    void drawMe();
    
};