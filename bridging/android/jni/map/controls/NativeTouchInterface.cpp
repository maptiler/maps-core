// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from touch_handler.djinni

#include "NativeTouchInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeVec2F.h"

namespace djinni_generated {

NativeTouchInterface::NativeTouchInterface() : ::djinni::JniInterface<::TouchInterface, NativeTouchInterface>("ch/ubique/mapscore/shared/map/controls/TouchInterface$CppProxy") {}

NativeTouchInterface::~NativeTouchInterface() = default;


CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_controls_TouchInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::TouchInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jboolean JNICALL Java_ch_ubique_mapscore_shared_map_controls_TouchInterface_00024CppProxy_native_1onClickUnconfirmed(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeVec2F::JniType j_posScreen)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::TouchInterface>(nativeRef);
        auto r = ref->onClickUnconfirmed(::djinni_generated::NativeVec2F::toCpp(jniEnv, j_posScreen));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_ch_ubique_mapscore_shared_map_controls_TouchInterface_00024CppProxy_native_1onClickConfirmed(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeVec2F::JniType j_posScreen)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::TouchInterface>(nativeRef);
        auto r = ref->onClickConfirmed(::djinni_generated::NativeVec2F::toCpp(jniEnv, j_posScreen));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_ch_ubique_mapscore_shared_map_controls_TouchInterface_00024CppProxy_native_1onDoubleClick(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeVec2F::JniType j_posScreen)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::TouchInterface>(nativeRef);
        auto r = ref->onDoubleClick(::djinni_generated::NativeVec2F::toCpp(jniEnv, j_posScreen));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_ch_ubique_mapscore_shared_map_controls_TouchInterface_00024CppProxy_native_1onLongPress(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeVec2F::JniType j_posScreen)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::TouchInterface>(nativeRef);
        auto r = ref->onLongPress(::djinni_generated::NativeVec2F::toCpp(jniEnv, j_posScreen));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_ch_ubique_mapscore_shared_map_controls_TouchInterface_00024CppProxy_native_1onMove(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeVec2F::JniType j_deltaScreen, jboolean j_confirmed, jboolean j_doubleClick)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::TouchInterface>(nativeRef);
        auto r = ref->onMove(::djinni_generated::NativeVec2F::toCpp(jniEnv, j_deltaScreen),
                             ::djinni::Bool::toCpp(jniEnv, j_confirmed),
                             ::djinni::Bool::toCpp(jniEnv, j_doubleClick));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_ch_ubique_mapscore_shared_map_controls_TouchInterface_00024CppProxy_native_1onMoveComplete(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::TouchInterface>(nativeRef);
        auto r = ref->onMoveComplete();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_ch_ubique_mapscore_shared_map_controls_TouchInterface_00024CppProxy_native_1onTwoFingerClick(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeVec2F::JniType j_posScreen1, ::djinni_generated::NativeVec2F::JniType j_posScreen2)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::TouchInterface>(nativeRef);
        auto r = ref->onTwoFingerClick(::djinni_generated::NativeVec2F::toCpp(jniEnv, j_posScreen1),
                                       ::djinni_generated::NativeVec2F::toCpp(jniEnv, j_posScreen2));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_ch_ubique_mapscore_shared_map_controls_TouchInterface_00024CppProxy_native_1onTwoFingerMove(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_posScreenOld, jobject j_posScreenNew)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::TouchInterface>(nativeRef);
        auto r = ref->onTwoFingerMove(::djinni::List<::djinni_generated::NativeVec2F>::toCpp(jniEnv, j_posScreenOld),
                                      ::djinni::List<::djinni_generated::NativeVec2F>::toCpp(jniEnv, j_posScreenNew));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_controls_TouchInterface_00024CppProxy_native_1clearTouch(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::TouchInterface>(nativeRef);
        ref->clearTouch();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
