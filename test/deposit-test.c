#include <ctest.h>
#include <../src/deposit.h>

CTEST(input_check, test_input)
{
    int result = Check(555666, 333);
    
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(input_check_less_0_day, test_input)
{
    int result = Check(100000, -1);
    
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(input_check_more_365_day, test_input)
{
    int result = Check(100000, 366);
    
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(input_check_less_10k, test_input)
{
    int result = Check(1000, 100);
    
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(calc_less_31_day_less_100k, calc)
{
    int result = Profit(50000, 30);
    const int exp = 45000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_less_31_day_more_100k, calc)
{
    int result = Profit(150000, 30);
    const int exp = 135000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_31_day_less_100k, calc)
{
    int result = Profit(50000, 31);
    const int exp = 51000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_31_day_more_100k, calc)
{
    int result = Profit(150000, 31);
    const int exp = 154500;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_120_day_less_100k, calc)
{
    int result = Profit(50000, 120);
    const int exp = 51000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_120_day_more_100k, calc)
{
    int result = Profit(150000, 31);
    const int exp = 154500;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_121_day_less_100k, calc)
{
    int result = Profit(50000, 121);
    const int exp = 53000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_121_day_more_100k, calc)
{
    int result = Profit(150000, 121);
    const int exp = 162000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_240_day_less_100k, calc)
{
    int result = Profit(50000, 121);
    const int exp = 53000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_240_day_more_100k, calc)
{
    int result = Profit(150000, 121);
    const int exp = 162000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_241_day_less_100k, calc)
{
    int result = Profit(50000, 241);
    const int exp = 56000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_241_day_more_100k, calc)
{
    int result = Profit(150000, 241);
    const int exp = 172500;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_365_day_less_100k, calc)
{
    int result = Profit(50000, 241);
    const int exp = 56000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_365_day_more_100k, calc)
{
    int result = Profit(150000, 241);
    const int exp = 172500;

    ASSERT_EQUAL(exp, result);
}
