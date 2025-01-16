#ifndef TIME_LIB_H
#define TIME_LIB_H
#include <chrono>
using namespace std::chrono;

class timeLib
{
    private:
        high_resolution_clock::time_point startTime;
        high_resolution_clock::time_point  stopTime;

    public:
        timeLib();
        void startMeasurement(void);
        void stopMeasurement(void);
        int getMeasurement(void);
};

#endif // TIME_LIB_H
