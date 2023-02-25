// Copyright 2022 NNTU-CS
#include "alg.h"
#include <cstdint>
#include <cmath>


bool checkPrime(uint64_t value) {
    for (uint64_t i = 2; i <= sqrt(value); i++) {
        if (value % i != 0) {
            return true;
        }
    }
    return false;
}

uint64_t nPrime(uint64_t n) {
    uint64_t num = 0;
    for (uint64_t j = 2; num <= n; j++) {
        if (checkPrime(j)) {
            num += 1;
        }
        if (num == n) {
            return j;
        }
    }
    return 0;
}

uint64_t nextPrime(uint64_t value) {
    int64_t np = 0;
    while (true) {
        value = value + 1;
        if (checkPrime(value)) {
            return value;
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t summ = 0;
    for (uint64_t p = 2; p < hbound; p++) {
        if (checkPrime(p)) {
            summ = summ + 1;
        }
    }
    return summ;
}

