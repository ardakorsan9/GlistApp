/*
* gCanvas.cpp
*
*  Created on: May 6, 2020
*      Author: noyan
*/


#include "gCanvas.h"


gCanvas::gCanvas(gApp* root) : gBaseCanvas(root) {
	this->root = root;
}

gCanvas::~gCanvas() {
}

void gCanvas::setup() {
    root->getAppManager()->setCurrentGUIFrame(&frame);
	frame.setSizer(&framesizer1);
	framesizer1.setSize(1, 3);
	framesizer1.enableBorders(true);

	float columnprs[3] = {0.31f, 0.49f, 0.2f};
	framesizer1.setColumnProportions(columnprs);
	float lineprs[4] = {0.3f, 0.3f, 0.3f, 0.1f};
	panel3sizer.setLineProportions(lineprs);


	panel1sizer.setSize(1, 1);
	panel2sizer.setSize(1, 1);
	panel3sizer.setSize(4, 2);

	panel1.setSizer(&panel1sizer);
	panel2.setSizer(&panel2sizer);
	panel3.setSizer(&panel3sizer);


	framesizer1.setControl(0, 0, &panel1);
    framesizer1.setControl(0, 1, &panel2);
    framesizer1.setControl(0, 2, &panel3);

    panel2sizer.setControl(0, 0, &cvcamera);
    panel2.setTitle("camera");

}

void gCanvas::update() {
//	gLogi("gCanvas") << "w:" << screen.getWidth() << ", h:" << screen.getHeight();
}

void gCanvas::draw() {
//	logo.draw((getWidth() - logo.getWidth()) / 2, (getHeight() - logo.getHeight()) / 2);
}

void gCanvas::keyPressed(int key) {
//	gLogi("gCanvas") << "keyPressed:" << key;
}

void gCanvas::keyReleased(int key) {
//	gLogi("gCanvas") << "keyReleased:" << key;
}

void gCanvas::charPressed(unsigned int codepoint) {
//	gLogi("gCanvas") << "charPressed:" << gCodepointToStr(codepoint);
}

void gCanvas::mouseMoved(int x, int y) {
//	gLogi("gCanvas") << "mouseMoved" << ", x:" << x << ", y:" << y;
}

void gCanvas::mouseDragged(int x, int y, int button) {
//	gLogi("gCanvas") << "mouseDragged" << ", x:" << x << ", y:" << y << ", b:" << button;
}

void gCanvas::mousePressed(int x, int y, int button) {
//	gLogi("gCanvas") << "mousePressed" << ", x:" << x << ", y:" << y << ", b:" << button;
}

void gCanvas::mouseReleased(int x, int y, int button) {
//	gLogi("gCanvas") << "mouseReleased" << ", button:" << button;
}

void gCanvas::mouseScrolled(int x, int y) {
//	gLogi("gCanvas") << "mouseScrolled" << ", x:" << x << ", y:" << y;
}

void gCanvas::mouseEntered() {

}

void gCanvas::mouseExited() {

}

void gCanvas::windowResized(int w, int h) {

}

void gCanvas::showNotify() {

}

void gCanvas::hideNotify() {

}
