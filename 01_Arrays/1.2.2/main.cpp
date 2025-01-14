#include <iostream>
#include <fstream>
#include <sstream>
#include "../../00_Lib/arrayLib.h"
using namespace std;

void readDataFromCsv(int **arr, unsigned int &rows, unsigned int &cols)
{
    ifstream file;
    string line;

    file.open("data.csv");

    for(rows = 0; getline(file, line); rows++)
    {
        stringstream lineStream(line);
        string cell;
        
        for(cols = 0; getline(lineStream, cell, ','); cols++)
        {
            arr[rows][cols] = atoi(cell.c_str());
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

    readDataFromCsv(array, rows, cols);

    twoDArrayLib twoDArray(array, rows, cols);
    
    for(int i = 0; i < maxRows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    
    return 0;
}