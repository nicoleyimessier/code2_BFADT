#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    Mischa.smell = "good";
    Mischa.height = 11;
    Mischa.name = "misch";
    Joe.height = 22;
    Mischa.r = 255;
    Mischa.b = 0;
    Mischa.g = 0;
    Joe.b = 255;
    Joe.r = 0;
    Joe.g = 0;
}

//--------------------------------------------------------------
void testApp::update(){
    cout << "Mischa smell: " << Mischa.smell << endl;
    cout << "Mischa height: " << Mischa.height << endl;
    cout << "Mischa name: " << Mischa.name  << endl; 
}

//--------------------------------------------------------------
void testApp::draw(){
    Mischa.draw(ofGetWidth()/2, ofGetHeight()/2);
    Joe.draw(ofGetWidth()/2 - 2*Joe.height, ofGetHeight()/2); 
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

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

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
