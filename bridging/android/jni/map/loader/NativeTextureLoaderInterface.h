// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from loader.djinni

#pragma once

#include "TextureLoaderInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeTextureLoaderInterface final : ::djinni::JniInterface<::TextureLoaderInterface, NativeTextureLoaderInterface> {
public:
    using CppType = std::shared_ptr<::TextureLoaderInterface>;
    using CppOptType = std::shared_ptr<::TextureLoaderInterface>;
    using JniType = jobject;

    using Boxed = NativeTextureLoaderInterface;

    ~NativeTextureLoaderInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeTextureLoaderInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeTextureLoaderInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeTextureLoaderInterface();
    friend ::djinni::JniClass<NativeTextureLoaderInterface>;
    friend ::djinni::JniInterface<::TextureLoaderInterface, NativeTextureLoaderInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::TextureLoaderInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        ::TextureLoaderResult loadTexture(const std::string & url) override;

    private:
        friend ::djinni::JniInterface<::TextureLoaderInterface, ::djinni_generated::NativeTextureLoaderInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("ch/ubique/mapscore/shared/map/loader/TextureLoaderInterface") };
    const jmethodID method_loadTexture { ::djinni::jniGetMethodID(clazz.get(), "loadTexture", "(Ljava/lang/String;)Lch/ubique/mapscore/shared/map/loader/TextureLoaderResult;") };
};

}  // namespace djinni_generated
