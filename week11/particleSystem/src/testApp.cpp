#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetBackgroundAuto(false);
    //p.param.setup();
    time0 = ofGetElapsedTimef();
    bornCount = 0;
    bornRate = 1000;
}

//--------------------------------------------------------------
void testApp::update(){
    time = ofGetElapsedTimef();
    float dt = ofClamp(time - time0, 0, 0.1);
    time0 = time;
    
    //delete dead particles
    for(int i = 0; i < p.size(); i++){
        if(!p[i].live){
            p.erase(p.begin() + i);
        }
    }
    
    bornCount += bornRate*dt;
    //birth new particles
    if(bornCount >= 1){
        int bornN = int(bornCount);
        bornCount -= bornN; 
        for(int i=0; i<bornN; i++){
            Particle newp;
            newp.param.setup();
            newp.setup();
            p.push_back(newp);
        }
    }
    
   // creat new particles
  
    for(int i=0; i<p.size(); i++){
        p[i].update(dt);
    }
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    for(int i=0; i<p.size(); i++){
        p[i].draw();
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
