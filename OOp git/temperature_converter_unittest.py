import unittest
from temperature_converter import c_to_f, f_to_c

class TestConverter(unittest.TestCase):

    def test_fahrenheit_to_celsius(self):
        self.assertEqual(f_to_c(32), 0)
        self.assertEqual(f_to_c(212), 100)
        self.assertAlmostEqual(f_to_c(31.0), -0.5555555555)
        self.assertRaises(TypeError, f_to_c, 'freezing')
    
    def test_celsius_to_fahrenheit(self):
        self.assertEqual(c_to_f(0), 32)
        self.assertEqual(c_to_f(100), 212)
        self.assertAlmostEqual(c_to_f(-0.5555555555), 31.0, places=1)
        self.assertRaises(TypeError, c_to_f, 'freezing')

if __name__ == '__main__':
    unittest.main()
