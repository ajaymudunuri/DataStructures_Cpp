#include <iostream>

#include "../../00_Lib/arrayLib.h"
#include "../../00_Lib/fileLib.h"
using namespace std;



void printAverageTemperatureAtEachLatitude(twoDArrayLib arr, int rows, int cols)
{
    arrayLib rowObj;

    int rowData[cols]; 
    cout << "Latitude\tAverage Temperature " << endl;
    for(int i = 0; i < rows; i++)
    {
        arr.getRow(rowData, i);
        cout << rowData[0] << "\t\t";

        if(rowObj.isArrayEmpty(&rowData[1], (cols - 1)))
        {
            cout << "NO DATA" << endl;
        }
        else
        {
            cout << rowObj.getAverageOfArray(&rowData[1], (cols - 1)) << endl;
        }
    }
}

int main()
{
    const unsigned int maxRows = 200;
    const unsigned int maxCols = 10;

    unsigned int rows = 0;
    unsigned int cols = 0;

    int **array = new int*[maxRows];
    for(int i = 0; i < maxRows; i++)
    {
        array[i] = new int[maxCols];
    }

    fileLib csvFile("data.csv");
    csvFile.readDataFromCsv(array, rows, cols);

    twoDArrayLib twoDArray(array, rows, cols);
    printAverageTemperatureAtEachLatitude(twoDArray, rows, cols);
    


    
    for(int i = 0; i < maxRows; i++)
    {
        delete[] array[i];
    }
    delete[] array;
    
    return 0;
}