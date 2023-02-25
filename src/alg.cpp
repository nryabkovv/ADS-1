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
    uint64_t result = 0;
    for (uint64_t j = 2; num <= n; j++) {
        if (checkPrime(j)) {
            result = j;
            num += 1;
        }
    }
}

uint64_t nextPrime(uint64_t value) {
    while (true) {
        value += 1;
        if (checkPrime(value)) {
            return value;
            break;
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

