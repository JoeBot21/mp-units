// The MIT License (MIT)
//
// Copyright (c) 2018 Mateusz Pusz
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

module;

// Stuff I added to try and make this build

// #define MP_UNITS_IMPORT_STD 1  // Use `import std;`
#define MP_UNITS_USE_FMTLIB 0  // Use std::format
#define MP_UNITS_HOSTED 1  // Do not set up for freestanding use
#define MP_UNITS_API_NO_CRTP 1  // Use explicit `this` instead of CRTP
#define MP_UNITS_API_THROWING_CONSTRAINTS 1  // Some error handling thing?

// End of stuff I added

#ifdef MP_UNITS_IMPORT_STD
import std;
#endif

#include <mp-units/bits/core_gmf.h>

export module mp_units.core;

#define MP_UNITS_IN_MODULE_INTERFACE

#include <mp-units/core.h>
