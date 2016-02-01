//
//  Creature.cpp
//  test
//
//  Created by Nicole Messier on 2/1/16.
//
//

#include "Creature.h"
#include "ofMain.h"

Creature::Creature(){
    posX = ofGetWidth()*0.5;
    posY = ofGetHeight()*0.5;
    velX = ofRandom(-5, 5);
    velY = ofRandom(-3,3);
}

void Creature::setup(){
    size = 50;
    r  = ofRandom(255);
    g = ofRandom(255);
    b = ofRandom(255);
}

void Creature::display(){
    //circle
    ofSetColor(r, g, b);
    ofCircle(posX, posY, size);
    
    //eyes
    ofSetColor(0);
    ofCircle(posX+25, posY-5, size/3);
    ofCircle(posX-25, posY-5, size/3);
}

void Creature::move(){
    posX += velX;
    posY += velY;
    
    if( posX>ofGetWidth() || posX<0){
        velX=velX*(-1);
    }
    
    if(posY>ofGetHeight() || posY<0){
        velY=velY*(-1);
    }
}