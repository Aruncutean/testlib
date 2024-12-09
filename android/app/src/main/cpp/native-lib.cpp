#include <jni.h>
#include <string>
#include "codebase.hpp"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_testapp_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string message = getPlatformMessage();
    return env->NewStringUTF(message.c_str());
}