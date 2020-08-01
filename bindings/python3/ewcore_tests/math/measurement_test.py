import ewcore


def test_metersToFeet():
    # Calculate
    feet = ewcore.math.measurement.metersToFeet(1.0)

    # Use eps to compare with answer
    assert (ewcore.math.epsilonEquals(feet, 3.28084, 0.0001) == True)


def test_feetToMeters():
    # Calculate
    meters = ewcore.math.measurement.feetToMeters(1.0)

    # Use eps to compare with answer
    assert (ewcore.math.epsilonEquals(meters, 0.3048, 0.0001) == True)


def test_metersToInches():
    # Calculate
    inches = ewcore.math.measurement.metersToInches(1.0)

    # Use eps to compare with answer
    assert (ewcore.math.epsilonEquals(inches, 39.3701, 0.0001) == True)


def test_inchesToMeters():
    # Calculate
    meters = ewcore.math.measurement.inchesToMeters(1.0)

    # Use eps to compare with answer
    assert (ewcore.math.epsilonEquals(meters, 0.0254, 0.0001) == True)


def test_rotationsPerMinuteToRadiansPerSecond():
    # Calculate
    rads = ewcore.math.measurement.rotationsPerMinuteToRadiansPerSecond(1.0)

    # Use eps to compare with answer
    assert (ewcore.math.epsilonEquals(rads, 0.104719755, 0.000000001) == True)


def test_radiansPerSecondToRotationsPerMinute():
    # Calculate
    rpm = ewcore.math.measurement.radiansPerSecondToRotationsPerMinute(1.0)

    # Use eps to compare with answer
    assert (ewcore.math.epsilonEquals(rpm, 9.549296, 0.000001) == True)
