import pytest
import ewcore


def testClamp():
    assert ewcore.math.mathutils.clamp(100, 0, 1) == 1.0


def testEpsilonEquals():
    assert (ewcore.math.mathutils.epsilonEquals(2, 0, 4) == True)
    assert (ewcore.math.mathutils.epsilonEquals(0, 0) == True)


def testMap():
    assert (ewcore.math.mathutils.map(1, 0, 10, 0, 100) ==  10)
