//
//  DrawingObject.cpp
//  YetAnotherOpenGLProject
//
//  Created by Joakim Hommeland on 10/6/12.
//  Copyright (c) 2012 Joakim Hommeland. All rights reserved.
//

#include "DrawingObject.h"


/*
 
 Various Shapes and objects to draw. Might wanna generalize to be able to draw it in a spesific region on the screen
 
 NOTE: Remember to draw vertices counter-clockwise!
 
 */

void drawArrow() {
    
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    
    glVertex3f(  0.0,  0.6, 0.0);
    glVertex3f( -0.2, -0.3, 0.0);
    glVertex3f(  0.2, -0.3 ,0.0);
    
    glEnd();
    
    //Border around the arrow
    
    glBegin(GL_LINE_LOOP);
    
    glColor3f(0.0f, 0.0f, 0.0f);
    
    glVertex3f(  0.0,  0.6, 0.0);
    glVertex3f( -0.2, -0.3, 0.0);
    glVertex3f(  0.2, -0.3 ,0.0);
    
    glEnd();
    
}

void drawAxis() {
    
    //Color of the X axis
    glColor4f(0, 0, 0, 1.0);
    glBegin(GL_LINES);
    
    glVertex3f(-1, 0, 0);
    glVertex3f(1, 0, 0);
    
    //Color of the Y axis
    glColor4f(0, 0, 0, 1.0);
    
    glVertex3f(0, -1, 0);
    glVertex3f(0, 1, 0);
    
    //Color of the Z axis
    glColor4f(0, 0, 0, 1.0);
    
    glVertex3f(0, 0, -1);
    glVertex3f(0, 0, 1);
    
    glEnd();
    
}

void drawSquare() {
    
    glColor4f(1, 0, 0, 1.0);
    glBegin(GL_QUADS);
    
    glVertex3f(-0.2, 0.2, 0);
    glVertex3f(-0.2, -0.2, 0);
    glVertex3f(0.2, -0.2, 0);
    glVertex3f(0.2,0.2,0);
    
    glEnd();
}