#include "timeLib.h"

timeLib::timeLib(void)
{
    startTime = high_resolution_clock::now();
    stopTime = high_resolution_clock::now();
}

void timeLib::startMeasurement(void)
{
    startTime = high_resolution_clock::now();
}

void timeLib::stopMeasurement(void)
{
    stopTime = high_resolution_clock::now();
}

long timeLib::getMeasurement(void)
{
    high_resolution_clock::duration duration = (stopTime - startTime);
    return (duration.count());
}