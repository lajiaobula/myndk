//
// Created by He,Jiancheng on 2018/12/2.
//

#include <jni.h>
#include "com_baidu_www_ndk_1_Hello.h"

JNIEXPORT jstring JNICALL Java_com_baidu_www_ndk_11_Hello_sayHello
        (JNIEnv *env, jclass type) {
    return env->NewStringUTF("i from the earth, please answer or i will fire to you!");
}
