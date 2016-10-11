//
// Created by Ivan Shynkarenka on 11.10.2016.
//

#include "benchmark/cppbenchmark.h"

#include <chrono>
#include <thread>

const uint64_t iterations = 100;
const auto settings = CppBenchmark::Settings().Iterations(iterations).Latency(1, 1000000000, 5);

BENCHMARK("std::this_thread::sleep_for(10)", settings)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
}

BENCHMARK_MAIN()
