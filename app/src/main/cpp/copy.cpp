//
// Created by He,Jiancheng on 2018/12/2.
//
#include "com_baidu_www_ndk_1_Copy.h"
JNIEXPORT jstring JNICALL Java_com_baidu_www_ndk_11_Copy_copy
        (JNIEnv * env, jclass jclass1){
return env->NewStringUTF("hello jni");
}

