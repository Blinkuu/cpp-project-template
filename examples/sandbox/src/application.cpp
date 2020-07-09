#include <sandbox/application.hpp>

#include <iostream>

#include <mylib/core.hpp>

int Application::exec()
{
  while (true) {
    std::cout << "Calculating factorial: " << mylib::factorial(5) << "\n";
  }
}
