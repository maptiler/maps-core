// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#include "NativeRectangle2dInterface.h"  // my header
#include "NativeGraphicsObjectInterface.h"
#include "NativeRectD.h"
#include "NativeTextureHolderInterface.h"

namespace djinni_generated {

NativeRectangle2dInterface::NativeRectangle2dInterface() : ::djinni::JniInterface<::Rectangle2dInterface, NativeRectangle2dInterface>("ch/ubique/mapscore/shared/graphics/objects/Rectangle2dInterface$CppProxy") {}

NativeRectangle2dInterface::~NativeRectangle2dInterface() = default;

NativeRectangle2dInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeRectangle2dInterface::JavaProxy::~JavaProxy() = default;

void NativeRectangle2dInterface::JavaProxy::setFrame(const ::RectD & c_frame, const ::RectD & c_textureCoordinates) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeRectangle2dInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setFrame,
                           ::djinni::get(::djinni_generated::NativeRectD::fromCpp(jniEnv, c_frame)),
                           ::djinni::get(::djinni_generated::NativeRectD::fromCpp(jniEnv, c_textureCoordinates)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeRectangle2dInterface::JavaProxy::loadTexture(const std::shared_ptr<::TextureHolderInterface> & c_textureHolder) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeRectangle2dInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_loadTexture,
                           ::djinni::get(::djinni_generated::NativeTextureHolderInterface::fromCpp(jniEnv, c_textureHolder)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeRectangle2dInterface::JavaProxy::removeTexture() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeRectangle2dInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_removeTexture);
    ::djinni::jniExceptionCheck(jniEnv);
}
std::shared_ptr<::GraphicsObjectInterface> NativeRectangle2dInterface::JavaProxy::asGraphicsObject() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeRectangle2dInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_asGraphicsObject);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeGraphicsObjectInterface::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_graphics_objects_Rectangle2dInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::Rectangle2dInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_graphics_objects_Rectangle2dInterface_00024CppProxy_native_1setFrame(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeRectD::JniType j_frame, ::djinni_generated::NativeRectD::JniType j_textureCoordinates)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Rectangle2dInterface>(nativeRef);
        ref->setFrame(::djinni_generated::NativeRectD::toCpp(jniEnv, j_frame),
                      ::djinni_generated::NativeRectD::toCpp(jniEnv, j_textureCoordinates));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_graphics_objects_Rectangle2dInterface_00024CppProxy_native_1loadTexture(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_textureHolder)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Rectangle2dInterface>(nativeRef);
        ref->loadTexture(::djinni_generated::NativeTextureHolderInterface::toCpp(jniEnv, j_textureHolder));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_graphics_objects_Rectangle2dInterface_00024CppProxy_native_1removeTexture(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Rectangle2dInterface>(nativeRef);
        ref->removeTexture();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_ch_ubique_mapscore_shared_graphics_objects_Rectangle2dInterface_00024CppProxy_native_1asGraphicsObject(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Rectangle2dInterface>(nativeRef);
        auto r = ref->asGraphicsObject();
        return ::djinni::release(::djinni_generated::NativeGraphicsObjectInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
