// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from shader.djinni

#include "NativeLineShaderProgramInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeRenderingContextInterface.h"

namespace djinni_generated {

NativeLineShaderProgramInterface::NativeLineShaderProgramInterface() : ::djinni::JniInterface<::LineShaderProgramInterface, NativeLineShaderProgramInterface>("ch/ubique/mapscore/shared/graphics/shader/LineShaderProgramInterface$CppProxy") {}

NativeLineShaderProgramInterface::~NativeLineShaderProgramInterface() = default;


CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_graphics_shader_LineShaderProgramInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::LineShaderProgramInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_ch_ubique_mapscore_shared_graphics_shader_LineShaderProgramInterface_00024CppProxy_native_1getRectProgramName(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LineShaderProgramInterface>(nativeRef);
        auto r = ref->getRectProgramName();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_graphics_shader_LineShaderProgramInterface_00024CppProxy_native_1setupRectProgram(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeRenderingContextInterface::JniType j_context)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LineShaderProgramInterface>(nativeRef);
        ref->setupRectProgram(::djinni_generated::NativeRenderingContextInterface::toCpp(jniEnv, j_context));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_ch_ubique_mapscore_shared_graphics_shader_LineShaderProgramInterface_00024CppProxy_native_1getPointProgramName(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LineShaderProgramInterface>(nativeRef);
        auto r = ref->getPointProgramName();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_graphics_shader_LineShaderProgramInterface_00024CppProxy_native_1setupPointProgram(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeRenderingContextInterface::JniType j_context)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LineShaderProgramInterface>(nativeRef);
        ref->setupPointProgram(::djinni_generated::NativeRenderingContextInterface::toCpp(jniEnv, j_context));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_graphics_shader_LineShaderProgramInterface_00024CppProxy_native_1preRenderRect(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeRenderingContextInterface::JniType j_context)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LineShaderProgramInterface>(nativeRef);
        ref->preRenderRect(::djinni_generated::NativeRenderingContextInterface::toCpp(jniEnv, j_context));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_graphics_shader_LineShaderProgramInterface_00024CppProxy_native_1preRenderPoint(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeRenderingContextInterface::JniType j_context)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LineShaderProgramInterface>(nativeRef);
        ref->preRenderPoint(::djinni_generated::NativeRenderingContextInterface::toCpp(jniEnv, j_context));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
