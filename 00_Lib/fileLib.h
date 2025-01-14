#ifndef FILE_LIB_H
#define FILE_LIB_H
#include <string>
#include <fstream>

using namespace std;

class fileLib
{
    private:
        ifstream file;

    public:
        fileLib(string fileName);
        ~fileLib();
        void readDataFromCsv(int **arr, unsigned int &rows, unsigned int &cols);
};

#endif //FILE_LIB_H