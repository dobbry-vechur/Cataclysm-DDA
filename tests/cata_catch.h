#pragma once
#ifndef CATA_TESTS_CATA_CATCH_H
#define CATA_TESTS_CATA_CATCH_H

// To avoid ODR violations, it's important that whenever a file includes
// catch.hpp it also includes stringmaker.h, so that all specializations of
// StringMaker match.  Therefore, all test code should include catch.hpp via
// this file.

// IWYU pragma: begin_exports
#include "catch/catch_amalgamated.hpp"
#include "stringmaker.h"
// IWYU pragma: end_exports

// Catch2 v3 no longer injects Approx into the global namespace.
// Re-export it here so the 850+ existing call sites don't all need updating.
using Catch::Approx;

#endif // CATA_TESTS_CATA_CATCH_H
