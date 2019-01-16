
/**
 * This file is part of Nokia OMAF implementation
 *
 * Copyright (c) 2018-2019 Nokia Corporation and/or its subsidiary(-ies). All rights reserved.
 *
 * Contact: omaf@nokia.com
 *
 * This software, including documentation, is protected by copyright controlled by Nokia Corporation and/ or its
 * subsidiaries. All rights are reserved.
 *
 * Copying, including reproducing, storing, adapting or translating, any or all of this material requires the prior
 * written consent of Nokia.
 */
#pragma once

#include "Math/OMAFMathTypes.h"
#include "Math/OMAFMathConstants.h"

namespace OMAF
{
    OMAF_INLINE Point makePoint(float32_t x, float32_t y);
}

namespace OMAF
{
    Point makePoint(float32_t x, float32_t y)
    {
        Point result = { x, y };
        
        return result;
    }
}
