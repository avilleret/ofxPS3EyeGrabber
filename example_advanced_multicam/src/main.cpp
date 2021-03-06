//
// Copyright (c) 2014 Christopher Baker <https://christopherbaker.net>
//
// SPDX-License-Identifier:	MIT
//


#include "ofApp.h"


int main()
{
    ofGLWindowSettings settings;
    settings.width = 640;
    settings.height = 480;
    ofCreateWindow(settings);
    return ofRunApp(std::make_shared<ofApp>());
}
