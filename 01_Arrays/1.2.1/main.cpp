#include <iostream>
#include "../../00_Lib/arrayLib.h"
using namespace std;



void calculateMedianOfArray(int arr[], int size)
{
    float medianValue;
    
    if(size % 2 == 0)
    {
        medianValue = (float)(arr[size/2] + arr[size/2 - 1]) / 2.0;
    }
    else
    {
        medianValue = arr[size/2];
    }

    cout << "Median value of the array is: " << medianValue << endl;
}

void calculateModeOfArray(int arr[], int size)
{
    int modeValue;
    int modeCount = 0;
    int maxModeCount = 0;
    bool modeValidFlag = true;

    for(int i = 0; i < size; i++)
    {
        modeCount = 0;
        for(int j =i; j < size; j++)
        {
            if(i != j)
            {
                if(arr[i] == arr[j])
                {
                    modeCount++;
                }
            }            
        }
        if(modeCount > maxModeCount)
        {
            maxModeCount = modeCount;
            modeValue = arr[i];
            modeValidFlag = true;
        }
        else if(modeCount == maxModeCount)
        {
            if(arr[i] != modeValue)
            {
                modeValidFlag = false;
            }
        }
        else
        {
            /* Do nothing */
        }
    }

    if(modeValidFlag == true)
    {
        cout << "Mode value of the array is: " << modeValue << endl;
    }
    else
    {
        cout << "Mode value is not found" << endl;
    }

}

int main()
{
    arrayLib arrObj;
    int testArray[20];
    int arraySize;
    
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    cout << "Enter a numeric array of " << arraySize << " elements:" << endl;

    arrObj.readArray(testArray, arraySize);
    arrObj.sortArray(testArray, arraySize);

    calculateMedianOfArray(testArray, arraySize);
    calculateModeOfArray(testArray, arraySize);

    return 0;
}