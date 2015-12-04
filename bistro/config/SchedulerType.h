/*
 *  Copyright (c) 2015, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#pragma once

#include <folly/FBString.h>

namespace facebook { namespace bistro {

enum class SchedulerType {
  UnitTest,  // Cannot be returned by getSchedulerType()
  RoundRobin,
  RankedPriority,
  RandomizedPriority,
  LongTail,
};

SchedulerType getSchedulerType(const folly::fbstring& s);

}}
