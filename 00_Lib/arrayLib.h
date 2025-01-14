#ifndef ARRAY_LIB_H
#define ARRAY_LIB_H

class arrayLib
{
    public:
        void printArray(int arr[], int n);
        void readArray(int arr[], int n);
        void sortArray(int arr[], int n);
        float getAverageOfArray(int arr[], int n);
        bool isArrayEmpty(int arr[], int n);
};

class twoDArrayLib
{
    private:
        int numRows;
        int numCols;
        int **twoDArray;
        
    public:
        twoDArrayLib(int **arr, int row, int col);
        ~twoDArrayLib();
        void printArray(void);
        void getRow(int *arr, int rowIndex);
};

#endif // ARRAY_LIB_H