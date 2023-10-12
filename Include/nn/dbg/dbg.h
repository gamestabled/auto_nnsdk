#pragma once

#include <non_matchings.h>

namespace nn {

namespace dbg {

class BreakReason;

UNK_RETURN Panic();

UNK_RETURN Break(nn::dbg::BreakReason);

} // dbg

} // nn

