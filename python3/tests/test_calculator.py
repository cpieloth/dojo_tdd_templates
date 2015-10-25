import unittest
import dojo.calculator as calc

__author__ = 'Christof Pieloth'


class CalculatorTest(unittest.TestCase):
    """
    Example unit test for calculator module.
    """

    def test_add(self):
        self.assertEqual(calc.add(1, 2), 3)
