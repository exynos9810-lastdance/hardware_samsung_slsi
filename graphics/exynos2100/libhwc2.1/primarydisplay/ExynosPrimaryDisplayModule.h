/*
 * Copyright (C) 2012 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef EXYNOS_DISPLAY_MODULE_H
#define EXYNOS_DISPLAY_MODULE_H

#include "ExynosDisplay.h"
#include "ExynosPrimaryDisplay.h"

class ExynosPrimaryDisplayModule : public ExynosPrimaryDisplay {
    public:
        ExynosPrimaryDisplayModule(DisplayIdentifier node);
        ~ExynosPrimaryDisplayModule();
        virtual int32_t validateWinConfigData();
        virtual void doPreProcessing(DeviceValidateInfo &validateInfo,
                uint64_t &geometryChanged) override;
        virtual bool isEnabled() {
#ifdef USES_DUAL_DISPLAY
            if (!mPlugState) return false;
            if ((mPowerModeState == HWC2_POWER_MODE_ON) ||
                    (mPowerModeState == HWC2_POWER_MODE_DOZE))
                return true;
            return false;
#else
            return mPlugState;
#endif
        }
};

#endif
