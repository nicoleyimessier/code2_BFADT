#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
//    bob.xPos = 100;
//    bob.yPos = 100;
//    sarah.xPos = ofGetWidth()/2;
//    sarah.yPos = ofGetHeight()/2; 
//    bob.setup();
//    sarah.setup();
}

//--------------------------------------------------------------
void testApp::update(){
//    bob.update();
//    sarah.update();
    
    
    for(int i=0; i<myAliens.size(); i++){
        myAliens[i].update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){
//    bob.draw();
//    sarah.draw();
    
    for(int i=0; i<myAliens.size(); i++){
        myAliens[i].draw();
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
    Alien tempAlien;
    tempAlien.setup(x,y);
    //vectorName.push(object);
    myAliens.push_back(tempAlien);
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    for(int i=0; i <myAliens.size(); i++){
        float dist = ofDist(x, y, myAliens[i].xPos, myAliens[i].yPos);
        
        if(dist<myAliens[i].diam){
            myAliens.erase(myAliens.begin()+i);
        }
        
    }
    
    
    
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
