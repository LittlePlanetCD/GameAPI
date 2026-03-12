#pragma once

#include "../Types.hpp"
#include "../EngineAPI.hpp"

#include "FixedPoint.hpp"

namespace RSDK
{
struct Vector2 {
    int32 x;
    int32 y;

    inline Vector2() : x(0), y(0){};
    inline Vector2(int32 X, int32 Y) : x(X), y(Y){};

    inline bool32 CheckOnScreen(Vector2 *range) { return RSDKTable->CheckPosOnScreen(this, range); }

    inline Vector2 &operator+=(Vector2 other)
    {
        this->x += other.x;
        this->y += other.y;
        return *this;
    }
    inline Vector2 &operator-=(Vector2 other)
    {
        this->x -= other.x;
        this->y -= other.y;
        return *this;
    }

    friend inline Vector2 operator+(Vector2 lhs, Vector2 rhs)
    {
        lhs += rhs;
        return lhs;
    }
    friend inline Vector2 operator-(Vector2 lhs, Vector2 rhs)
    {
        lhs -= rhs;
        return lhs;
    }
};

} // namespace RSDK
