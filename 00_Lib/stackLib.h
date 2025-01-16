#ifndef STACK_LIB_H
#define STACK_LIB_H

#define STACKSIZE 100

struct intStackType
{
    int top;
    int items[STACKSIZE];
};

struct charStackType
{
    int top;
    char items[STACKSIZE];
};

class stackLib
{
    private:
        intStackType intStack;
        charStackType charStack; 
        
    public:
        stackLib(void);
        void pushInt(int data);
        int popInt(void);
        int stackTop(void);
        bool isEmpty(void);
        void printStack(void);
        void pushChar(char data);
        char popChar(void);
        bool isEmptyChar(void);
        void printCharStack(void);        
};

#endif //STACK_LIB_H