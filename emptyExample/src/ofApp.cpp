#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
#ifdef TARGET_LINUX
	auto frameNumber = ofGetFrameNum();
	ofDrawBitmapString("This is a Raspberry Pi " + ofToString(frameNumber), 10, 10);
#endif
}

//--------------------------------------------------------------
void ofApp::exit() {

}
