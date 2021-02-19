// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#include "NativePolygon2dInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeGraphicsObjectInterface.h"
#include "NativeVec2D.h"

namespace djinni_generated {

NativePolygon2dInterface::NativePolygon2dInterface() : ::djinni::JniInterface<::Polygon2dInterface, NativePolygon2dInterface>("ch/ubique/mapscore/shared/graphics/objects/Polygon2dInterface$CppProxy") {}

NativePolygon2dInterface::~NativePolygon2dInterface() = default;

NativePolygon2dInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativePolygon2dInterface::JavaProxy::~JavaProxy() = default;

void NativePolygon2dInterface::JavaProxy::setPolygonPositions(const std::vector<::Vec2D> & c_positions, const std::vector<std::vector<::Vec2D>> & c_holes, bool c_isConvex) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativePolygon2dInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setPolygonPositions,
                           ::djinni::get(::djinni::List<::djinni_generated::NativeVec2D>::fromCpp(jniEnv, c_positions)),
                           ::djinni::get(::djinni::List<::djinni::List<::djinni_generated::NativeVec2D>>::fromCpp(jniEnv, c_holes)),
                           ::djinni::get(::djinni::Bool::fromCpp(jniEnv, c_isConvex)));
    ::djinni::jniExceptionCheck(jniEnv);
}
std::shared_ptr<::GraphicsObjectInterface> NativePolygon2dInterface::JavaProxy::asGraphicsObject() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativePolygon2dInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_asGraphicsObject);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeGraphicsObjectInterface::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_graphics_objects_Polygon2dInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::Polygon2dInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_graphics_objects_Polygon2dInterface_00024CppProxy_native_1setPolygonPositions(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_positions, jobject j_holes, jboolean j_isConvex)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Polygon2dInterface>(nativeRef);
        ref->setPolygonPositions(::djinni::List<::djinni_generated::NativeVec2D>::toCpp(jniEnv, j_positions),
                                 ::djinni::List<::djinni::List<::djinni_generated::NativeVec2D>>::toCpp(jniEnv, j_holes),
                                 ::djinni::Bool::toCpp(jniEnv, j_isConvex));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_ch_ubique_mapscore_shared_graphics_objects_Polygon2dInterface_00024CppProxy_native_1asGraphicsObject(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Polygon2dInterface>(nativeRef);
        auto r = ref->asGraphicsObject();
        return ::djinni::release(::djinni_generated::NativeGraphicsObjectInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated