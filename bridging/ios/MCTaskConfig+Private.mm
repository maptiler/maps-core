// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from task_scheduler.djinni

#import "MCTaskConfig+Private.h"
#import "DJIMarshal+Private.h"
#import "MCExecutionEnvironment+Private.h"
#import "MCTaskPriority+Private.h"
#include <cassert>

namespace djinni_generated {

auto TaskConfig::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.id),
            ::djinni::I64::toCpp(obj.delay),
            ::djinni::Enum<::TaskPriority, MCTaskPriority>::toCpp(obj.priority),
            ::djinni::Enum<::ExecutionEnvironment, MCExecutionEnvironment>::toCpp(obj.executionEnvironment)};
}

auto TaskConfig::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCTaskConfig alloc] initWithId:(::djinni::String::fromCpp(cpp.id))
                                      delay:(::djinni::I64::fromCpp(cpp.delay))
                                   priority:(::djinni::Enum<::TaskPriority, MCTaskPriority>::fromCpp(cpp.priority))
                       executionEnvironment:(::djinni::Enum<::ExecutionEnvironment, MCExecutionEnvironment>::fromCpp(cpp.executionEnvironment))];
}

}  // namespace djinni_generated