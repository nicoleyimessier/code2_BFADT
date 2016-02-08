//
//  Person.cpp
//  drawing
//
//  Created by Nicole Messier on 2/8/16.
//
//

#include "Person.h"
#include "ofMain.h"

Person::Person(){

    
};


void Person::walk(){
    cout << "I'm walking!" << endl;
    
}

void Person::sleep(){
    cout << "I'm sleeping!" << endl;
    
}


void Person::talk(){
    cout << "I'm talking" << endl;
    
}

void Person::eat(){
    cout << "I'm eating!" << endl;
}

void Person::draw(float xPos, float yPos){
    cout << "I'm drawing!" << endl;
    ofSetColor(r, g, b);
    ofFill(); 
    ofCircle(xPos, yPos, height, height);
}