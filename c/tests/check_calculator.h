#ifndef CHECK_CALCULATOR_H_
#define CHECK_CALCULATOR_H_

#include <check.h>

#include "dojo/calculator.h"

START_TEST(test_calculator_add)
{
    ck_assert_int_eq(calc_add(1, 2), 3);
}
END_TEST

//START_TEST(test_calculator_sub)
//{
//    ck_assert_int_eq(calc_sub(3, 2), 1);
//}
//END_TEST

#endif // CHECK_CALCULATOR_H_
