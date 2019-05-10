#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	myPlayer.loadMovie("loadingscreen.mov");
	myFont.loadFont("gameplay.ttf",40);
}

//--------------------------------------------------------------
void ofApp::update(){
	myPlayer.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	if (isOnMenu) //This is just the startup menu screen
	{
		myPlayer.play();

		myPlayer.draw(0, 0, 1024, 768);

		ofSetColor(255);
		myFont.drawString("The Political Game", 220, 100);

		//The Start Button
		if (mouseX > 200 && mouseX < 824 && mouseY > 400 && mouseY < 500)
		{
			ofSetColor(0);
			ofRect(200, 400, 624, 100);
			ofSetColor(255);
			myFont.drawString("Start", 400, 475);

		}
		else
		{
			ofSetColor(255);
			ofRect(200, 400, 624, 100);
			ofSetColor(0);
			myFont.drawString("Start", 400, 475);
		}

		//The How to play Button
		if (mouseX > 200 && mouseX < 824 && mouseY > 550 && mouseY < 650)
		{
			ofSetColor(0);
			ofRect(200, 550, 624, 100);
			ofSetColor(255);
			myFont.drawString("How to play", 400, 625);

		}
		else
		{
			ofSetColor(255);
			ofRect(200, 550, 624, 100);
			ofSetColor(0);
			myFont.drawString("How to play", 400, 625);
		}
		ofSetColor(255);
	}
	

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	if (mouseX > 200 && mouseX < 824 && mouseY > 400 && mouseY < 500)
	{
		isOnMenu = false;
	}

	if (mouseX > 200 && mouseX < 824 && mouseY > 550 && mouseY < 650)
	{

	}

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
