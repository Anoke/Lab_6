#include <iterator>

template <typename range, typename object>

bool none_of(const range begin, const range end, bool (&func)(object)) {
    for (auto it = begin; it != end; it = std::next(it)) {
        if (func(*it)) {
            return false;
        }
    }
    return true;
}
template <typename range, typename object>
bool is_sorted(const range begin, const range end, bool (&func)(object, object)) {
    range prevIt = begin;
    for (auto it = next(begin); it != end; prevIt = it, it = std::next(it)) {
        if (!func(*prevIt, *it)) {
            return false;
        }
    }
    return true;
}
template <typename range, typename object>
range find_not(range begin, range end, const object& x) {
    for (auto it = begin; it != end; it = std::next(it)) {
        if ((*it) != x) {
            return it;
        }
    }
    return end;
}