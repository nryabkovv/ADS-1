// Copyright 2022 NNTU-CS
#include "alg.h"
#include <cstdint>
#include <cmath>


bool checkPrime(uint64_t value) {
    for (uint64_t i = 2; i <= sqrt(value); i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}
uint64_t nPrime(uint64_t n) {
    uint64_t res = 2;
    uint64_t num = 1;
    while (num != n) {
        res++;
        if (checkPrime(res) == true)
            num++;
    }
    return res;
}

uint64_t nextPrime(uint64_t value) {
    for (uint64_t i = value + 1; true; i++) {
        if (checkPrime(i)) {
            return i;
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t p = 0;
    uint64_t summ = 2;
    while (summ != hbound) {
        if (checkPrime(summ) == true)
            p += summ;
        p += summ;
        summ++;
    }
    return p;
}
