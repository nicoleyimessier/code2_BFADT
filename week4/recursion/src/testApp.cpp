#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

}

void testApp::drawBranch(float length, float theta){
    ofLine(0, 0, 0, -length);
    ofTranslate(0, -length);
    
    length = length*0.4;
    
    if(length>2){
        
        ofPushMatrix();
        ofRotate(theta);
        drawBranch(length, theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(-theta);
        drawBranch(length, theta);
        ofPopMatrix();
        
    }
    
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(255, 0, 0);
    ofFill();
//    
//    float length = 200;
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    drawBranch(400, cos(ofGetElapsedTimef())*100);
//    ofLine(0, 0, 0, -length);
//    
//    ofTranslate(0, -length);
//    ofRotate(30);
//    ofLine(0, 0, 0, -length);
    
    
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
