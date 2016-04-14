//
//  Particle.h
//  particleSystem
//
//  Created by Nicole Messier on 4/11/16.
//
//

#ifndef __particleSystem__Particle__
#define __particleSystem__Particle__

#include <iostream>

#endif /* defined(__particleSystem__Particle__) */

#include "ofMain.h"
#include "Params.h"


class Particle{
public:
    
    //constructor
    Particle();
    
    //methods
    void setup();
    void update(float dt);
    void draw();
    
    //variables
    Params param; //instance of parameters in the class
    ofPoint pos; // position of the particle
    ofPoint vel; // speed of the particle
    float time; // how long the particle has been living
    float lifeTime; //max time the particle can live
    bool live; //checks whether particle is alive or dead
    ofPoint randomPointIncircle(float maxRad); //random point in a circle
    
    
};