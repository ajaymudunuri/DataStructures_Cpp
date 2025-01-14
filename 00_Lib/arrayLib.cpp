#include <iostream>
#include "arrayLib.h"

using namespace std;

void arrayLib::printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void arrayLib::readArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void arrayLib::sortArray(int arr[], int n)
{
    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

twoDArrayLib::twoDArrayLib(int **arr, int row, int col)
{
    numRows = row;
    numCols = col;

    twoDArray = new int*[numRows];

    for(int i = 0; i < numRows; i++)
    {
        twoDArray[i] = new int[numCols];

        for(int j = 0; j < numCols; j++)
        {
            twoDArray[i][j] = arr[i][j];
        }
    }
}

twoDArrayLib::~twoDArrayLib()
{
    for(int i = 0; i < numRows; i++)
    {
        delete[] twoDArray[i];
    }
    delete[] twoDArray;

}

void twoDArrayLib::printArray(void)
{
    cout << "Printing 2-D array..." << endl;
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            cout << twoDArray[i][j] << " ";
        }
        cout << endl;
    }
}

void twoDArrayLib::getRow(int *arr, int rowIndex)
{
    if(rowIndex <= numRows)
    {
        for(int i = 0; i < numCols; i++)
        {
            arr[i] = twoDArray[rowIndex][i];
        }
    }
}