// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from shader.djinni

#pragma once

#include "RenderingContextInterface.h"
#include <memory>
#include <string>

class LineShaderProgramInterface {
public:
    virtual ~LineShaderProgramInterface() {}

    virtual std::string getRectProgramName() = 0;

    virtual void setupRectProgram(const std::shared_ptr<::RenderingContextInterface> & context) = 0;

    virtual std::string getPointProgramName() = 0;

    virtual void setupPointProgram(const std::shared_ptr<::RenderingContextInterface> & context) = 0;

    virtual void preRenderRect(const std::shared_ptr<::RenderingContextInterface> & context) = 0;

    virtual void preRenderPoint(const std::shared_ptr<::RenderingContextInterface> & context) = 0;
};
