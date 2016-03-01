//
//  Tree.h
//  recursiveTree
//
//  Created by Nicole Messier on 2/29/16.
//
//

#ifndef __recursiveTree__Tree__
#define __recursiveTree__Tree__

#include <iostream>
#include "ofMain.h"

#endif /* defined(__recursiveTree__Tree__) */

class Tree{
    public:
    
    //properties
    float dotSize;
    float offSetAngleA;
    float offSetAngleB;
    
    //constructor
    Tree();
    
    //methods
    void seed1(float dotSize, float angle, float x, float y);
    void seed2(float dotSize, float angle, float x, float y);
    
};