//
//  SetupOpenGL.cpp
//  YetAnotherOpenGLProject
//
//  Created by Joakim Hommeland on 10/5/12.
//  Copyright (c) 2012 Joakim Hommeland. All rights reserved.
//

#include "SetupOpenGL.h"

/*
 This method performs a setup of openGL
 
 Output: GLint telling openGL whether to use vsync or not
 
 0 = DISABLED
 1 = ENABLED
 */

GLint setupOpenGL() {
    
    //Various openGL attributes
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_CULL_FACE);
    glFrontFace(GL_CCW);
    glPolygonOffset(1.0f, 1.0f);
    glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
    
    //1 = enabled
    const GLint vsyncEnabled = 1;
    
    return vsyncEnabled;
}