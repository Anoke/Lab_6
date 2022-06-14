#pragma once

template <typename range, typename object>
bool none_of(range, range, bool (&func)(object));
template <typename range, typename object>
bool is_sorted(range, range, bool (&func)(object, object));
template <typename range, typename object>
range find_not(range begin, range end, const object& x);

#include "Iterator.cpp"