#include <jni.h>
#include <string>

#include "log.h"
#include "game.h"

static Game game;

extern "C"
JNIEXPORT void JNICALL
Java_panyi_xyz_flapbird_NativeBridge_onInit(JNIEnv *env, jclass clazz) {
    LOGI("on init ");
    game.init();
}

extern "C"
JNIEXPORT void JNICALL
Java_panyi_xyz_flapbird_NativeBridge_onResize(JNIEnv *env, jclass clazz, jint width, jint height) {
//    LOGI("onresize width : %d , height : %d" , width , height);
    game.resize(width , height);
}

extern "C"
JNIEXPORT void JNICALL
Java_panyi_xyz_flapbird_NativeBridge_onRender(JNIEnv *env, jclass clazz) {
//    LOGI("on render");
    game.render();
}

extern "C"
JNIEXPORT void JNICALL
Java_panyi_xyz_flapbird_NativeBridge_onDestory(JNIEnv *env, jclass clazz) {
//    LOGI("on destory");
    game.destory();
}