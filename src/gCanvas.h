 /*
 * gCanvas.h
 *
 *  Created on: May 6, 2020
 *      Author: noyan
 */

#ifndef GCANVAS_H_
#define GCANVAS_H_

#include "gBaseCanvas.h"
#include "gApp.h"
#include "gImage.h"
#include "gipOpenCV.h"
#include "gGuiOpenCVCamera.h"
#include "gGUIFrame.h"
#include "gGUISizer.h"
#include "gGUIMenubar.h"
#include "gGUIToolbar.h"
#include "gGUIToolbarButton.h"
#include "gGUIPanel.h"
#include "gGUIStatusBar.h"
#include "gGUISizer.h"
#include "gGUIButton.h"
#include "gGUIPanel.h"
#include "gGUIListbox.h"
#include "gGUIText.h"
#include "gGUITextbox.h"
#include "gGUIDropdownList.h"
#include "gGUIGrid.h"
#include "gGUILineGraph.h"
#include "gGUIDate.h"
#include "gGUIPane.h"
#include "gGUITable.h"
#include "gGuiOpenCVCamera.h"

class gCanvas : public gBaseCanvas {
public:
	gCanvas(gApp* root);
	virtual ~gCanvas();

	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void charPressed(unsigned int codepoint);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseScrolled(int x, int y);
	void mouseEntered();
	void mouseExited();
	void windowResized(int w, int h);

	void showNotify();
	void hideNotify();

private:
	gApp* root;
	gImage logo;
	gipOpenCV cv;
	gImage screen;
	gGuiOpenCVCamera cvcamera;
	gGUIFrame frame;
	gGUISizer framesizer1, framesizer2;
	gGUIMenubar menubar;
	gGUIToolbar toolbar;
	gGUISizer toolbarsizer;
	gGUIToolbarButton toolbarbutton1, toolbarbutton2, toolbarbutton3, toolbarbutton4, toolbarbutton5;
	gGUIPanel panel1, panel2, panel3;
	gGUIStatusBar statusbar;
	gGUISizer panel1sizer, panel2sizer, panel3sizer;
	gGUIButton buton1;
	gGUIListbox listbox1;
	gGUIText text;
	gGUITextbox textbox;
	gGUIDropdownList ddlist;
	gGUIGrid grid;
	gGUILineGraph linegraph;
	gGUITreelist::Element eleman[6];
	gGUIDate date1;
	gImage cameraImage1;
	gGUIPanel imagepanel;
	gGUIControl control;
	gGUITable table;
	gGUIButton button;
	gGUIButton button1;
	cv::VideoCapture cap1;

};

#endif /* GCANVAS_H_ */
