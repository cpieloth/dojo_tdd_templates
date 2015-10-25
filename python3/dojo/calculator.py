import argparse

__author__ = 'Christof Pieloth'


def add(summand1, summand2):
    """
    Calculates the sum of summand1 and summand2.

    :param summand1: First summand.
    :param summand2: Second summand.
    :return: Sum of summand1+summand2
    """
    return float(summand1) + float(summand2)


def parse_arguments():
    """
    Parses command line arguments.

    :return: Parsed arguments.
    """
    parser = argparse.ArgumentParser()
    parser.prog = 'dojo'
    parser.name = 'Dojo'
    parser.description = 'TDD template for Python3.'

    parser.add_argument('summand1', help='First summand.')
    parser.add_argument('summand2', help='Second summand.')

    return parser.parse_args()


def main():
    args = parse_arguments()
    print('%d' % add(args.summand1, args.summand2))
    return 0
