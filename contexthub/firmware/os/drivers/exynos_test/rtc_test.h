/*----------------------------------------------------------------------------
 *      Exynos SoC  -  RTC UTC
 *----------------------------------------------------------------------------
 *      Name:    rtc_test.h
 *      Purpose: To implement rtc UTC codes
 *      Rev.:    V1.00
 *----------------------------------------------------------------------------
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

#ifndef __RTC_TEST_H__
#define __RTC_TEST_H__

#include <csp_common.h>
#include <csp_assert.h>
#include <csp_printf.h>
#include <rtc.h>

void rtc_test(void);
void rtc_test_clean_up(void);
void timeSyncTest(void);

#endif
