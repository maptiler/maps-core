// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#pragma once

#include "CameraInterface.h"
#include "Coord.h"
#include "MapCamera2dListenerInterface.h"
#include "RectCoord.h"
#include <memory>

class MapInterface;

class MapCamera2dInterface {
public:
    virtual ~MapCamera2dInterface() {}

    static std::shared_ptr<MapCamera2dInterface> create(const std::shared_ptr<MapInterface> & mapInterface, float screenDensityPpi);

    virtual void moveToCenterPositionZoom(const ::Coord & centerPosition, double zoom, bool animated) = 0;

    virtual void moveToCenterPosition(const ::Coord & centerPosition, bool animated) = 0;

    virtual ::Coord getCenterPosition() = 0;

    virtual void setZoom(double zoom, bool animated) = 0;

    virtual double getZoom() = 0;

    virtual void setPaddingLeft(float padding, bool animated) = 0;

    virtual void setPaddingRight(float padding, bool animated) = 0;

    virtual void setPaddingTop(float padding, bool animated) = 0;

    virtual void setPaddingBottom(float padding, bool animated) = 0;

    virtual ::RectCoord getVisibleRect() = 0;

    virtual void addListener(const std::shared_ptr<::MapCamera2dListenerInterface> & listener) = 0;

    virtual void removeListener(const std::shared_ptr<::MapCamera2dListenerInterface> & listener) = 0;

    virtual std::shared_ptr<::CameraInterface> asCameraInterface() = 0;
};
