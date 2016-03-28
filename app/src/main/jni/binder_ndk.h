//
// Created by baidu on 16/3/22.
//

#ifndef BINDER_BINDER_NDK_H
#define BINDER_BINDER_NDK_H

#include <jni.h>
#ifdef __cplusplus

extern "C" {

#endif

JNIEXPORT void JNICALL
        Java_dodola_binder_MainActivity_sendBinder(JNIEnv *env, jclass type);


JNIEXPORT void JNICALL
        Java_dodola_binder_MainActivity_addService(JNIEnv *env, jclass type);


#ifdef __cplusplus

}

#endif

#endif //BINDER_BINDER_NDK_H
