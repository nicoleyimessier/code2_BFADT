#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    //ofSetBackgroundAuto(false);
    ofSetFrameRate(1);
    me.dotSize = 8.0;
    me.offSetAngleA = ofDegToRad(1.5);
    me.offSetAngleB = ofDegToRad(50);
    
    gui.setup();
    gui.add(dotSizeGui.setup("dotsize", 8, 1, 14));
    gui.add(angleA.setup("angleA", 1.5, 1, 5));
    gui.add(angleB.setup("angleA", 50, 1, 360));
    
}

//--------------------------------------------------------------
void testApp::update(){
    me.dotSize = dotSizeGui;
    me.offSetAngleA = ofDegToRad(angleA);
    me.offSetAngleB = ofDegToRad(angleB);
}

//--------------------------------------------------------------
void testApp::draw(){
    gui.draw();
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    me.seed1(me.dotSize, ofDegToRad(270), 0, 0);

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
