import pytest
import ewcore


def testClamp():
    assert ewcore.math.mathutils.clamp(100, 0, 1) == 1.0
