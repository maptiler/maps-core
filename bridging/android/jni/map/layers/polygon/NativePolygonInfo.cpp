// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from polygon.djinni

#include "NativePolygonInfo.h"  // my header
#include "Marshal.hpp"
#include "NativeColor.h"
#include "NativeCoord.h"

namespace djinni_generated {

NativePolygonInfo::NativePolygonInfo() = default;

NativePolygonInfo::~NativePolygonInfo() = default;

auto NativePolygonInfo::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativePolygonInfo>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.identifier)),
                                                           ::djinni::get(::djinni::List<::djinni_generated::NativeCoord>::fromCpp(jniEnv, c.coordinates)),
                                                           ::djinni::get(::djinni::List<::djinni::List<::djinni_generated::NativeCoord>>::fromCpp(jniEnv, c.holes)),
                                                           ::djinni::get(::djinni::Bool::fromCpp(jniEnv, c.isConvex)),
                                                           ::djinni::get(::djinni_generated::NativeColor::fromCpp(jniEnv, c.color)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativePolygonInfo::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 6);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativePolygonInfo>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_identifier)),
            ::djinni::List<::djinni_generated::NativeCoord>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_coordinates)),
            ::djinni::List<::djinni::List<::djinni_generated::NativeCoord>>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_holes)),
            ::djinni::Bool::toCpp(jniEnv, jniEnv->GetBooleanField(j, data.field_isConvex)),
            ::djinni_generated::NativeColor::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_color))};
}

}  // namespace djinni_generated
