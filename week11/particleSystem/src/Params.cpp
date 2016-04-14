//
//  Params.cpp
//  particleSystem
//
//  Created by Nicole Messier on 4/11/16.
//
//

#include "Params.h"

void Params::setup(){
    eCenter = ofPoint(ofGetWidth()/2, ofGetHeight()/2);
    eRad = 300;
    velRad = 0;
    lifeTime = 2.0;
    rotate = 90;
    
    force =1000;
    spin = 1000;
    friction = 0.05; //some number between 0 and 1
    
}