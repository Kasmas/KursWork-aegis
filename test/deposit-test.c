#include <ctest.h>
#include <../src/deposit.h>

CTEST(input_check, test_input)
{
    int result = Check(555666, 333);
    
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(input_check_less_0_week, test_input)
{
    int result = Check(100000, -1);
    
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(input_check_more_52_week, test_input)
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

CTEST(calc_less_5_week_less_100k, calc)
{
    int result = Profit(50000, 30);
    const int exp = 45000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_less_5_week_more_100k, calc)
{
    int result = Profit(150000, 30);
    const int exp = 135000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_5_week_less_100k, calc)
{
    int result = Profit(50000, 31);
    const int exp = 51000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_5_week_more_100k, calc)
{
    int result = Profit(150000, 31);
    const int exp = 154500;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_17_week_less_100k, calc)
{
    int result = Profit(50000, 120);
    const int exp = 51000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_17_week_more_100k, calc)
{
    int result = Profit(150000, 31);
    const int exp = 154500;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_18_week_less_100k, calc)
{
    int result = Profit(50000, 121);
    const int exp = 53000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_18_week_more_100k, calc)
{
    int result = Profit(150000, 121);
    const int exp = 162000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_34_week_less_100k, calc)
{
    int result = Profit(50000, 121);
    const int exp = 53000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_34_week_more_100k, calc)
{
    int result = Profit(150000, 121);
    const int exp = 162000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_35_week_less_100k, calc)
{
    int result = Profit(50000, 241);
    const int exp = 56000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_35_week_more_100k, calc)
{
    int result = Profit(150000, 241);
    const int exp = 172500;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_52_week_less_100k, calc)
{
    int result = Profit(50000, 241);
    const int exp = 56000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_52_week_more_100k, calc)
{
    int result = Profit(150000, 241);
    const int exp = 172500;

    ASSERT_EQUAL(exp, result);
}
