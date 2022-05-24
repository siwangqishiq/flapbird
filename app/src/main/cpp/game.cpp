//
// Created by panyi on 2022/5/24.
//

#include "game.h"

void Game::resize(int viewWidth, int viewHeight) {
    this->mViewWidth = viewWidth;
    this->mViewHeight = viewHeight;

    glViewport(0 ,  0, mViewWidth, mViewHeight);
}

void Game::init() {
    glClearColor(1.0f , 1.0f , 1.0f , 1.0f);
}

void Game::render() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void Game::destory() {

}
