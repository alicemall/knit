#pragma once

#include "ofMain.h"
#include "wheel.h"
#include "imagedrawer.h"
#include "shed.h"
#include "zone.h"

#include "ofxGui.h"

class ofApp : public ofBaseApp{

public:

    ofParameterGroup allParameters;
    ofParameter<bool> oneRandom ;
    ofParameter<bool> stopAlgo;


    ofParameterGroup leftImgParameters;
    ofParameter<bool> displaySketch ;
    ofParameter<bool> brushingMode; // display the brushed image and allow user to draw with the brush
    ofParameter<bool> displayGrid ;
    ofParameter<bool> displayOriginal;
    ofxButton saveLeftImgBtn;

    ofParameterGroup restartParamaters;
    ofParameter<int> pinsNumberP;
    ofxButton restartBtn;



    ofImage pic;
    shed * workshop;
    int numberOfCall;

    ofxPanel guiAlgo;
    ofxPanel guiLeftImg;
    ofxPanel guiRestart;


    zone zoneA;
    zone zoneB;

    float ** brush ;
    int brushSize ;



    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

    void setupBrush();
    void onMouseInZoneA(ofVec2f &relPos);
    void onRestartPressed();

};
