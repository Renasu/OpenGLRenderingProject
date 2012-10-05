//
//  ArrowObject.cpp
//  YetAnotherOpenGLProject
//
//  Created by Joakim Hommeland on 10/5/12.
//  Copyright (c) 2012 Joakim Hommeland. All rights reserved.
//

#include "ArrowObject.h"

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
    
    glEnd();
    
}