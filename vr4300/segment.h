//
// vr4300/segment.h: VR4300 MMU segment manager.
//
// CEN64: Cycle-Accurate Nintendo 64 Simulator.
// Copyright (C) 2014, Tyler J. Stachecki.
//
// This file is subject to the terms and conditions defined in
// 'LICENSE', which is part of this source code package.
//

#ifndef __vr4300_segment_h__
#define __vr4300_segment_h__
#include "common.h"

struct segment {
  uint64_t start;
  uint64_t length;
  uint64_t offset;

  bool cached;
  bool mapped;
};

const struct segment* get_default_segment(void);
const struct segment* get_segment(uint64_t address, uint32_t cp0_status);

#endif

