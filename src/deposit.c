#include <stdio.h>
#include "deposit.h"

int Profit(int deposit, int time) {
    if (deposit > 100000) {
		if (time <= 30) {
			deposit = deposit - deposit / 10;
		}

		if (time > 30 && time <= 120) {
			deposit = 1.03 * deposit;
		}

		if (time > 120 && time <= 240) {
			deposit = 1.08 * deposit;
		}

		if (time > 240 && time <= 365) {
			deposit = 1.15 * deposit;
		}
    }

    if (deposit <= 100000) {
		if (time <= 30) {
			deposit = deposit - deposit / 10;
		}

		if (time > 30 && time <= 120) {
			deposit = 1.02 * deposit;
		}

		if (time > 120 && time <= 240) {
			deposit = 1.06 * deposit;
		}

		if (time > 240 && time <= 365) {
			deposit = 1.12 * deposit;
		}
    }

    return deposit;
}

int Check(int deposit, int time) {
    if (deposit < 10000) {
    	return 1;
    }

    if (time <= 0 || time > 365) {
    	return 1;
    }
    return 0;
}
