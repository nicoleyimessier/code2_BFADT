//
//  Alien.cpp
//  manyClasses
//
//  Created by Nicole Messier on 2/22/16.
//
//

#include "Alien.h"

Alien::Alien(){
    diam = 100;
    velX = ofRandom(-3, 3);
    velY = ofRandom(-4,2);
}

void Alien::setup(float _mouseX, float _mouseY){
    xPos = _mouseX;
    yPos = _mouseY;
    r = ofRandom(0,255);
    g = ofRandom(0,255);
    b = ofRandom(0, 255);
    alpha = ofRandom(0,255);
}


void Alien::update(){
    xPos = xPos +velX;
    yPos = yPos + velY; 
    
}


void Alien::draw(){
    ofSetColor(r, g, b, alpha);
    ofFill();
    ofCircle(xPos, yPos, diam);
}