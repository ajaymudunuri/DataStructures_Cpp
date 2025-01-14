#ifndef STACK_LIB_H
#define STACK_LIB_H

#define STACKSIZE 100

struct intStackType
{
    int top;
    int items[STACKSIZE];
};

class stackLib
{
    private:
        intStackType intStack; 
        
    public:
        stackLib(void);
        void pushInt(int data);
        int popInt(void);
        int stackTop(void);
        bool isEmpty(void);
        void printStack(void);
        
};

#endif //STACK_LIB_H