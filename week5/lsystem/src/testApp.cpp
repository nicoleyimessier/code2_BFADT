#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetBackgroundAuto(false);
    current = "A"; //generation 0 or axiom
    next = ""; //existing state of generation 1
    counter = 0; //generation 0
    mover = 10; // y position
    screenText = false; // initial state of drawing
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    if(screenText == true){
        ofDrawBitmapString("generation " + ofToString(counter) + ": " + current, 10, mover);
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

    for(int i = 0; i < current.size(); i++){
        char checker = current[i];
        
        if( checker == 'A' ){
            next += "AB";
            
        } else if( checker == 'B'){
            next += "A";
        }
        
    }
    
    current = next;
    counter ++;
    mover += 10;
    screenText = true;
    
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    screenText = false;
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
