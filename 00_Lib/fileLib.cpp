#include "fileLib.h"
#include <sstream>
using namespace std;

fileLib::fileLib(string fileName)
{
    file.open(fileName);
}

fileLib::~fileLib()
{
    file.close();
}

void fileLib::readDataFromCsv(int **arr, unsigned int &rows, unsigned int &cols)
{
    string line;

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