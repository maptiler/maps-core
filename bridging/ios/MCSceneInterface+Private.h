// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni
#ifdef __cplusplus

#include "SceneInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class MCSceneInterface;

namespace djinni_generated {

class SceneInterface
{
public:
    using CppType = std::shared_ptr<::SceneInterface>;
    using CppOptType = std::shared_ptr<::SceneInterface>;
    using ObjcType = MCSceneInterface*;

    using Boxed = SceneInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

#endif