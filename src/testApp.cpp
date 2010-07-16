#include "testApp.h"
#include "CursorFeedback.hpp"
#include "FigureFeedback.hpp"
#include "TapFeedback.hpp"
#include "Calibrator.hpp"

#include "oscReporter.hpp"

//--------------------------------------------------------------
void testApp::Setup(){
    new CursorFeedback();
    new FigureFeedback();
    new TapFeedback();
    //new CalibratorObject(1);

    new OscObjectReporter();
    new OscDistanceReporter();
    new OscWaveDraw();
}

//--------------------------------------------------------------
void testApp::Update(){

}

//--------------------------------------------------------------
void testApp::Draw(){

}

//--------------------------------------------------------------
void testApp::WindowResized(int w, int h){

}
