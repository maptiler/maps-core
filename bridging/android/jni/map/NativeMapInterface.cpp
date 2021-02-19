// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#include "NativeMapInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeColor.h"
#include "NativeCoordinateConversionHelperInterface.h"
#include "NativeGraphicsObjectFactoryInterface.h"
#include "NativeLayerInterface.h"
#include "NativeMapCallbackInterface.h"
#include "NativeMapCamera2dInterface.h"
#include "NativeMapConfig.h"
#include "NativeRenderingContextInterface.h"
#include "NativeSchedulerInterface.h"
#include "NativeShaderFactoryInterface.h"
#include "NativeTouchHandlerInterface.h"
#include "NativeVec2I.h"

namespace djinni_generated {

NativeMapInterface::NativeMapInterface() : ::djinni::JniInterface<::MapInterface, NativeMapInterface>("ch/ubique/mapscore/shared/map/MapInterface$CppProxy") {}

NativeMapInterface::~NativeMapInterface() = default;


CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::MapInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_create(JNIEnv* jniEnv, jobject /*this*/, ::djinni_generated::NativeGraphicsObjectFactoryInterface::JniType j_graphicsFactory, ::djinni_generated::NativeShaderFactoryInterface::JniType j_shaderFactory, ::djinni_generated::NativeRenderingContextInterface::JniType j_renderingContext, jobject j_mapConfig, ::djinni_generated::NativeSchedulerInterface::JniType j_scheduler, jfloat j_pixelDensity)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::MapInterface::create(::djinni_generated::NativeGraphicsObjectFactoryInterface::toCpp(jniEnv, j_graphicsFactory),
                                        ::djinni_generated::NativeShaderFactoryInterface::toCpp(jniEnv, j_shaderFactory),
                                        ::djinni_generated::NativeRenderingContextInterface::toCpp(jniEnv, j_renderingContext),
                                        ::djinni_generated::NativeMapConfig::toCpp(jniEnv, j_mapConfig),
                                        ::djinni_generated::NativeSchedulerInterface::toCpp(jniEnv, j_scheduler),
                                        ::djinni::F32::toCpp(jniEnv, j_pixelDensity));
        return ::djinni::release(::djinni_generated::NativeMapInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_createWithOpenGl(JNIEnv* jniEnv, jobject /*this*/, jobject j_mapConfig, ::djinni_generated::NativeSchedulerInterface::JniType j_scheduler, jfloat j_pixelDensity)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::MapInterface::createWithOpenGl(::djinni_generated::NativeMapConfig::toCpp(jniEnv, j_mapConfig),
                                                  ::djinni_generated::NativeSchedulerInterface::toCpp(jniEnv, j_scheduler),
                                                  ::djinni::F32::toCpp(jniEnv, j_pixelDensity));
        return ::djinni::release(::djinni_generated::NativeMapInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1setCallbackHandler(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_callbackInterface)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        ref->setCallbackHandler(::djinni_generated::NativeMapCallbackInterface::toCpp(jniEnv, j_callbackInterface));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeGraphicsObjectFactoryInterface::JniType JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1getGraphicsObjectFactory(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        auto r = ref->getGraphicsObjectFactory();
        return ::djinni::release(::djinni_generated::NativeGraphicsObjectFactoryInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeShaderFactoryInterface::JniType JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1getShaderFactory(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        auto r = ref->getShaderFactory();
        return ::djinni::release(::djinni_generated::NativeShaderFactoryInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeSchedulerInterface::JniType JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1getScheduler(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        auto r = ref->getScheduler();
        return ::djinni::release(::djinni_generated::NativeSchedulerInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeRenderingContextInterface::JniType JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1getRenderingContext(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        auto r = ref->getRenderingContext();
        return ::djinni::release(::djinni_generated::NativeRenderingContextInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1getMapConfig(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        auto r = ref->getMapConfig();
        return ::djinni::release(::djinni_generated::NativeMapConfig::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeCoordinateConversionHelperInterface::JniType JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1getCoordinateConverterHelper(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        auto r = ref->getCoordinateConverterHelper();
        return ::djinni::release(::djinni_generated::NativeCoordinateConversionHelperInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1setCamera(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_camera)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        ref->setCamera(::djinni_generated::NativeMapCamera2dInterface::toCpp(jniEnv, j_camera));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1getCamera(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        auto r = ref->getCamera();
        return ::djinni::release(::djinni_generated::NativeMapCamera2dInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1setTouchHandler(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeTouchHandlerInterface::JniType j_touchHandler)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        ref->setTouchHandler(::djinni_generated::NativeTouchHandlerInterface::toCpp(jniEnv, j_touchHandler));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeTouchHandlerInterface::JniType JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1getTouchHandler(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        auto r = ref->getTouchHandler();
        return ::djinni::release(::djinni_generated::NativeTouchHandlerInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1getLayers(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        auto r = ref->getLayers();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeLayerInterface>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1addLayer(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_layer)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        ref->addLayer(::djinni_generated::NativeLayerInterface::toCpp(jniEnv, j_layer));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1insertLayerAt(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_layer, jint j_atIndex)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        ref->insertLayerAt(::djinni_generated::NativeLayerInterface::toCpp(jniEnv, j_layer),
                           ::djinni::I32::toCpp(jniEnv, j_atIndex));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1insertLayerAbove(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_layer, jobject j_above)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        ref->insertLayerAbove(::djinni_generated::NativeLayerInterface::toCpp(jniEnv, j_layer),
                              ::djinni_generated::NativeLayerInterface::toCpp(jniEnv, j_above));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1insertLayerBelow(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_layer, jobject j_below)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        ref->insertLayerBelow(::djinni_generated::NativeLayerInterface::toCpp(jniEnv, j_layer),
                              ::djinni_generated::NativeLayerInterface::toCpp(jniEnv, j_below));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1removeLayer(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_layer)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        ref->removeLayer(::djinni_generated::NativeLayerInterface::toCpp(jniEnv, j_layer));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1setViewportSize(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeVec2I::JniType j_size)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        ref->setViewportSize(::djinni_generated::NativeVec2I::toCpp(jniEnv, j_size));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1setBackgroundColor(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeColor::JniType j_color)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        ref->setBackgroundColor(::djinni_generated::NativeColor::toCpp(jniEnv, j_color));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1invalidate(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        ref->invalidate();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1drawFrame(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        ref->drawFrame();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1resume(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        ref->resume();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_MapInterface_00024CppProxy_native_1pause(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapInterface>(nativeRef);
        ref->pause();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated