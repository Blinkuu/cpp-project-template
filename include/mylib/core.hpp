#pragma once

namespace mylib {

/// \brief Factorial
///
/// This computes a factorial
///

constexpr unsigned int factorial(unsigned int number)
{
  return number <= 1 ? number : factorial(number - 1) * number;
}

int fun();

}
