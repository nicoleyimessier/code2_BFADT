//
//  Params.h
//  particleSystem
//
//  Created by Nicole Messier on 4/11/16.
//
//

#ifndef __particleSystem__Params__
#define __particleSystem__Params__

#include <iostream>

#endif /* defined(__particleSystem__Params__) */

#include "ofMain.h"

class Params{
public:
    
    void setup();
    ofPoint eCenter; //center of the emitter
    float eRad; //the size of the emitter
    float velRad; //bound on our particle's velocity
    float lifeTime; //max lifetime
    float time; // time since it was born
    float rotate;
    
    float force; // attraction & repulsion
    float spin; //rotating force
    float friction; //frcition force
};