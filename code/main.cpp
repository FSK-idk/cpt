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

#include <algorithm>
#include <ranges>
#include <numeric>
#include <numbers>
#include <bit>


#define FAST_IO
// #define TO_FILE
#define ONE_TEST

void prepare() {}

void solve() {}

int main() {
    #ifdef FAST_IO
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    #endif

    #ifdef TO_FILE
    std::freopen("input.txt", "r", stdin);
    std::freopen("output.txt", "w", stdout);
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