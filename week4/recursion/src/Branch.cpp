//
//  Branch.cpp
//  recursion
//
//  Created by Nicole Messier on 2/23/16.
//
//

#include "Branch.h"

void Branch::setup(float _length, float _theta, float var){
    //ofTranslate(ofGetWidth()/2, ofGetHeight());
    length = _length;
    theta = _theta;
    variation = var;
}

void Branch::update(){
  
}

void Branch::drawMe(){
    cout<<length<<endl;
    ofLine(0,0, 0, -length);
    ofTranslate(0, -length);
    
    length = length*0.66;
//    
//    if(length>2){
//        cout << length << endl;
//        ofPushMatrix();
//        ofRotate(theta);
//        drawMe();
//        ofPopMatrix();
//        
//        ofPushMatrix();
//        ofRotate(-theta);
//        drawMe();
//        ofPopMatrix();
//        
//        
//    }
}