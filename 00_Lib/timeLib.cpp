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

int timeLib::getMeasurement(void)
{
    high_resolution_clock::duration duration = duration_cast<microseconds>(stopTime - startTime);
    return (duration.count());
}