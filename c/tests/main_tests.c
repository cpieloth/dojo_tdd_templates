#include <stdlib.h>

#include <check.h>

#include "check_calculator.h"

Suite* dojo_suite(void)
{
    Suite* s = suite_create("Dojo");

    TCase* tc_calc = tcase_create("Calculator");
    tcase_add_test(tc_calc, test_calculator_add);
    // tcase_add_test(tc_calc, test_calculator_sub);
    suite_add_tcase(s, tc_calc);

    return s;
}

int main(void)
{
    int number_failed;
    Suite* s = dojo_suite();
    SRunner* sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
