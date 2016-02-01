#include "testApp.h"

void testApp::diamond(ofPoint center, float length, float width){
    // line 1 (x1, y1, x2, y2)
    ofLine(center.x - width/2, center.y + length/2, center.x, center.y-length/2);
    
    //
    ofLine(center.x, center.y-length/2, center.x + width/2, center.y + length/2);
    ofLine(center.x + width/2, center.y + length/2, center.x, center.y+length);
    ofLine(center.x, center.y + length, center.x-width/2, center.y+length/2);
    
}

//--------------------------------------------------------------
void testApp::setup(){
    //ofBackground(255);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(100, 90, 50);
    ofFill();
    ofEllipse(ofGetWidth()/2, ofGetHeight()/2, 100, 100);
    ofLine(0, 0, ofGetWidth(), ofGetHeight());
    
    
    ofPoint bob;
    bob.x = ofGetWidth()/2;
    bob.y = ofGetHeight()/2;
    float length = ofGetHeight()/4;
    float width = ofGetHeight()/4;
    diamond(bob, length, width);

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
