#include <stdio.h>
#include "deposit.h"

int Profit(int deposit, int time) {
    if (deposit > 100000) {
		if (time <= 4) {
			deposit = deposit - deposit / 10;
		}

		if (time > 4 && time <= 17) {
			deposit = 1.03 * deposit;
		}

		if (time > 17 && time <= 34) {
			deposit = 1.08 * deposit;
		}

		if (time > 34 && time <= 52) {
			deposit = 1.15 * deposit;
		}
    }

    if (deposit <= 100000) {
		if (time <= 4) {
			deposit = deposit - deposit / 10;
		}

		if (time > 4 && time <= 17) {
			deposit = 1.02 * deposit;
		}

		if (time > 17 && time <= 34) {
			deposit = 1.06 * deposit;
		}

		if (time > 34 && time <= 52) {
			deposit = 1.12 * deposit;
		}
    }

    return deposit;
}

int Check(int deposit, int time) {
    if (deposit < 10000) {
    	return 1;
    }

    if (time <= 0 || time > 52) {
    	return 1;
    }
    return 0;
}
