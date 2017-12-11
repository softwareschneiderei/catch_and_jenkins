
#include "string_utils.h"

std::string string_utils::left_pad(std::string input, std::size_t length, char filler) {
  if (input.length() >= length) {
    return input;
  }

  auto to_insert = length - input.length();
  input.insert(input.begin(), to_insert, filler);
  return input;
}
