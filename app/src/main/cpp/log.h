//
// Created by panyi on 2022/5/24.
//

#ifndef FLAPBIRD_LOG_H
#define FLAPBIRD_LOG_H

#include <android/log.h>

#define TAG "FlapbirdLog"

#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,    TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,     TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,     TAG, __VA_ARGS__)
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,    TAG, __VA_ARGS__)

#endif //FLAPBIRD_LOG_H
