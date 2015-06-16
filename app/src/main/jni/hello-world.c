#include <string.h>
#include <jni.h>


Java_com_example_android_myapplication_MainActivity_stringFromJNI(JNIEnv* env, jobject obj)
{
    return (*env)->NewStringUTF(env, "Hello world! NDKkkkkk");
}