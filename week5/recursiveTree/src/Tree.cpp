//
//  Tree.cpp
//  recursiveTree
//
//  Created by Nicole Messier on 2/29/16.
//
//

#include "Tree.h"

Tree::Tree(){
    
}

void Tree:: seed1(float dotSize, float angle, float x, float y){

    
    if(dotSize > 1.0){
        float r = ofRandomuf(); // returns a random # btwn 0,1
        
        if(r > 0.02 ){
            // this happens 98% of the time
            ofSetColor(255, 0, 0);
            ofFill();
            ofCircle(x, y, dotSize);
            float newX = x + cos(angle)*dotSize;
            float newY = y + sin(angle)*dotSize;
            cout << "newX: " << newX << endl;
            cout << "newY: " << newY << endl;
            cout << "dotSize: " << dotSize << endl;
            seed1(dotSize*0.99, angle + offSetAngleA, newX, newY);
        } else {
            // this happens 2% of the time
            ofSetColor(0, 255, 0);
            ofFill();
            ofCircle(x, y, dotSize);
            float newX = x + cos(angle);
            float newY = y + sin(angle); 
            seed1(dotSize*0.99, angle + offSetAngleA, newX, newY);
            //seed2(dotSize*0.6, angle + offSetAngleB, newX, newY);
            //seed1(dotSize*0.5, angle - offSetAngleB, newX, newY);
        }
        
    }

}




void Tree:: seed2(float dotSize, float angle, float x, float y){
    
 
    if(dotSize > 1.0){
        float r = ofRandomuf();
        
        if(r > 0.05){
            ofSetColor(0, 0, 255);
            ofFill();
            ofCircle(x, y, dotSize);
            float newX = x + cos(angle)*dotSize;
            float newY = y + sin(angle)*dotSize;
            seed2(dotSize*0.99, angle + offSetAngleA, newX, newY);
        } else {
            ofSetColor(0, 255, 255);
            ofFill();
            ofCircle(x, y, dotSize);
            float newX = x + cos(angle);
            float newY = y + sin(angle);
            seed2(dotSize*0.99, angle - offSetAngleA, newX, newY);
            seed1(dotSize*0.6, angle + offSetAngleB, newX, newY);
            //seed2(dotSize*0.5, angle - offSetAngleB, newX, newY);
            
            
        }
        
        
        
    }
    
    
    
}