// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from polygon.djinni

#pragma once

#include "Color.h"
#include "Coord.h"
#include <string>
#include <utility>
#include <vector>

struct PolygonInfo final {
    std::string identifier;
    std::vector<::Coord> coordinates;
    std::vector<std::vector<::Coord>> holes;
    bool isConvex;
    ::Color color;

    PolygonInfo(std::string identifier_,
                std::vector<::Coord> coordinates_,
                std::vector<std::vector<::Coord>> holes_,
                bool isConvex_,
                ::Color color_)
    : identifier(std::move(identifier_))
    , coordinates(std::move(coordinates_))
    , holes(std::move(holes_))
    , isConvex(std::move(isConvex_))
    , color(std::move(color_))
    {}
};
