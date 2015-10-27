/**
 * @author Christof Pieloth
 */

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dojo/calculator.h"

/**
 * Prints a help messages.
 */
static void print_help(char* const *argv)
{
    assert(argv);
    printf("Calculates the sum.\n");
    printf("\n");
    printf("Usage: %s SUMMAND1 SUMMAND2\n", argv[0]);
    printf("\n");
    printf("Arguments:\n");
    printf("   SUMMAND1   First summand.\n");
    printf("   SUMMAND2   Second summand.\n");
}

/**
 * Structure for all command line interface arguments.
 */
struct cli_args
{
    int summand1;
    int summand2;
};

/**
 * Parses and sets the command line interface arguments.
 *
 * @param argc Number of provided arguments.
 * @param argv Pointers to provided arguments.
 * @param args Structure which holds the CLI arguments.
 * @return True if all required values are set.
 */
static bool parse_arguments(int argc, char* const *argv, struct cli_args* const args)
{
    assert(argv);
    assert(args);

    if (argc < 3)
    {
        print_help(argv);
        return false;
    }

    // No error check for this example
    args->summand1 = strtol(argv[1], NULL, 10);
    args->summand2 = strtol(argv[2], NULL, 10);

    return true;
}

int main(int argc, char **argv)
{
    struct cli_args args;
    if (parse_arguments(argc, argv, &args) != true)
    {
        return EXIT_FAILURE;
    }

    printf("%d + %d = %ld\n", args.summand1, args.summand2, calc_add(args.summand1, args.summand2));

    return EXIT_SUCCESS;
}
