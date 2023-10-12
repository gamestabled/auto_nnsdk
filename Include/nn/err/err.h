#pragma once

#include <non_matchings.h>
#include <nn/Result.h>

namespace nn {

namespace err {

namespace CTR {

class FatalErrInfo;

namespace FatalErr {

UNK_RETURN Throw(nn::err::CTR::FatalErrInfo const&);

} // FatalErr

namespace {

UNK_RETURN Throw(nn::err::CTR::FatalErrInfo&);

} // (anonymous namespace)

UNK_RETURN ThrowFatalErr(nn::Result);

} // CTR

} // err

} // nn

