//
// Created by panyi on 2022/5/24.
//

#ifndef FLAPBIRD_GAME_H
#define FLAPBIRD_GAME_H

#include <GLES3/gl3.h>
#include <GLES2/gl2ext.h>

#include "log.h"

class Game {
public:
    void init();

    void resize(int viewWidth , int viewHeight);

    void render();

    void destory();
private:
    int mViewWidth;
    int mViewHeight;
};


#endif //FLAPBIRD_GAME_H
