#include <cstdint>
#include <climits>
#include <cmath>
#include <cstring>
#include <cassert>

#include <utility>
#include <iostream>
#include <iomanip>
#include <format>
#include <chrono>
#include <memory>
#include <functional>

#include <vector>
#include <string>
#include <list>
#include <deque>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>

#include <algorithm>
#include <ranges>
#include <numeric>
#include <numbers>
#include <bit>
#include <random>

#ifndef TO_FILE
// #define TO_FILE
#define IN_FILE "input.txt"
#define OUT_FILE "output.txt"
#endif
// #undef TO_FILE
#define FAST_IO
#define ONE_TEST

namespace stdn = std::numbers;
namespace stdc = std::chrono;
namespace stdr = std::ranges;
namespace stdv = std::views;

using i64 = int64_t;
using u64 = uint64_t;
using f64 = double_t;

void prepare() {}

void solve() {}

int main() {
    #ifdef FAST_IO
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    #endif

    #ifdef TO_FILE 
    std::freopen(IN_FILE, "r", stdin);
    std::freopen(OUT_FILE, "w", stdout);
    #endif

    prepare();

    #ifdef ONE_TEST
    solve();
    #else
    int64_t T; std::cin >> T;
    while (T--) solve();
    #endif

    return 0;
}