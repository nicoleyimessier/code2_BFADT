//
//  Branch.cpp
//  tree
//
//  Created by Nicole Messier on 3/7/16.
//
//

#include "Branch.h"

void Branch::setup( float _xPos, float _yPos,
           float _length,
           float _width,
           float _splitPercentage,
           float _maxSplitAngle,
           float _maxSubdivions,
           float _maxSegments,
           float _segmentsSinceStart,
           float _angle,
           float _curvature,
           ofColor _color
           ){
    
 
    //1. set incoming values to the previous branch values
    xPos = _xPos;
    yPos = _yPos;
    length = _length;
    width = _width;
    splitPercentage = _splitPercentage;
    maxSplitAngle = _maxSplitAngle;
    maxSubdivisions = _maxSubdivions;
    maxSegments = _maxSegments;
    segmentsSinceStart = _segmentsSinceStart;
    angle = _angle;
    curvature = _curvature;
    color = _color;
    
    //2. check if it splits
    
    float r = ofRandomuf(); // random # btwn 0 and 1
    if(r > splitPercentage && segmentsSinceStart !=
       maxSegments
       ){
        split = true;
    } else {
        split = false;
        
    }
    
    //3. draw the branches
    
    ofSetColor(color);
    ofSetLineWidth(width);
    ofLine(xPos, yPos,
           xPos + length*cos(angle),
           yPos + length*sin(angle)
           );
    
    //4. update the variables
    xPos += length*cos(angle);
    yPos += length*sin(angle);
    width = width*ofRandom(0.3, 0.8);
    length = length*ofRandom(0.7, 0.9);
    angle += curvature;
    curvature = ofRandom(0, 2*PI/360);
    segmentsSinceStart++;
    
    //5. recursion
    
    if(segmentsSinceStart <= maxSegments){
        if(!split){
           //create one branch
            Branch subBranch;
            subBranch.setup(xPos, yPos,  length, width,
                            splitPercentage,
                            maxSplitAngle,
                            maxSubdivisions,
                            maxSegments,
                            segmentsSinceStart,
                            angle,
                            curvature,
                            color);
            
            
        } else {
            //create two branches
            
            Branch subBranch1;
            
            float angle1 = angle + ofRandom(0, maxSplitAngle);
            subBranch1.setup(xPos, yPos,  length, width,
                             splitPercentage,
                             maxSplitAngle,
                             maxSubdivisions,
                             maxSegments,
                             segmentsSinceStart,
                             angle1,
                             curvature,
                             color);
            Branch subBranch2;
            float angle2 = angle - ofRandom(0, maxSplitAngle);
            subBranch2.setup(xPos, yPos,  length, width,
                             splitPercentage,
                             maxSplitAngle,
                             maxSubdivisions,
                             maxSegments,
                             segmentsSinceStart,
                             angle2,
                             curvature,
                             color);
          
            
        }
        
    }
    

    
}