#include <jni.h>
#include "ExampleService.h"
#include "binder_ndk.h"

JNIEXPORT void JNICALL
Java_dodola_binder_MainActivity_sendBinder(JNIEnv *env, jclass type) {

    // TODO
    callme(2, 1);

}

JNIEXPORT void JNICALL
Java_dodola_binder_MainActivity_addService(JNIEnv *env, jclass type) {

    // TODO
    callme(1, 1);
}