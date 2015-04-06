//
//  ofxFfd.cpp
//
//
//  Created by satcy on 1/10/14.
//
//

#pragma once
#include "ofMain.h"

class ofxFfd{
protected:
    ofVec3f PCI[10][10][10];
    int l, m, n;
    ofVec3f axis;
    ofVec3f S_axis, T_axis, U_axis;
    ofVec3f origin;
    
    double factorials (int n);
    double bernstein (int u, int v, double STUpt);
    ofVec3f convertToSTU(const ofVec3f & xxx);
    
    ofVec3f deform(const ofVec3f & p);
    
public:
    
    void mouseDragged( ofMouseEventArgs & mouseEvent);
    void mouseMoved( ofMouseEventArgs & mouseEvent);
    void mousePressed( ofMouseEventArgs & mouseEvent);
    void mouseReleased( ofMouseEventArgs & mouseEvent);
    
    void enableMouseEvent();
    void disableMouseEvent();

    void setControlPointPosition(int ix, int iy, int iz, const ofVec3f& vec);
    void setControlPointPosition(int idx, const ofVec3f& vec);
    
    bool getControlPointPosition(int ix, int iy, int iz, ofVec3f& vec);
    bool getControlPointPosition(int idx, ofVec3f& vec);

    void setup(int numX = 1, int numY = 1, int numZ = 1);
    void setControlPointSize(int numX = 1, int numY = 1, int numZ = 1);
    void setMinMax(ofVec3f min_vec, ofVec3f max_vec);
    
    const vector<ofVec3f> getOriginalVertices();
    
    ofMesh deformMesh(ofMesh mesh);
    ofVec3f deformPoint(const ofVec3f & vec);
    
    void debugDraw();
    
    int getNumX(){
        return l;
    }
    int getNumY(){
        return m;
    }
    int getNumZ(){
        return n;
    }
};