#include <iostream>
using namespace std;

class STACK
{
    private:
            int Stack[5];
            int max_size;
            int top;
    public:
            STACK()
            {
                max_size = 5;
                top = -1;
            }
            void display_stack();
            void push(int x);
            void pop();
            void isEmpty();
            void isFull();
            void get_stack_top_value();
            void get_current_index();
};


void STACK :: display_stack()
{
    cout<<"YOUR STACK IS READY\n";
    for(int i = top; i >= 0; i--)
    {
        cout<<Stack[i]<<" ";
    }
}


void STACK :: push(int x)
{
    if(top != max_size - 1)
    {
        top++;
        Stack[top] = x;
    }
    else
    {
        cout<<"\nTHERE'S NO SPACE IN STACK";
    }
}


void STACK :: pop()
{
    int a;
    if(top != -1)
    {
        a = Stack[top--];
        cout<<"THE DELETED VALUE IS "<<a;
    }
    else
    {
        cout<<"\nSTACK IS EMPTY";
    }
}



void STACK :: isFull()
{
    if(top == max_size - 1)
    {
        cout<<"\nTHE STACK IS FULL ";
    }
    else
    {
        cout<<"\nSTACK HAS SOME EMPTY PLACES";
    }
}

void STACK :: isEmpty()
{
    if(top == -1)
    {
        cout<<"\nThe STACK IS EMPTY";
    }
    else
    {
        cout<<"\nSTACK HAS SOME FILLED PLACES";
    }
}

void STACK :: get_stack_top_value()
{
    int b ;
    if(top != -1)
    {
        b = Stack[top];
        cout<<"\nTHE STACK TOP VALUE IS :"<<b;
    }
}


void STACK :: get_current_index()
{
    int c;
    if(top != -1)
    {
        c = (top +1);
        cout<<"\nTHE CURRENT INDEX OF TOP IS :"<<c;
    }
}


int main()
{
    STACK s;
    s.push(4);
    s.push(5);
    s.push(7);
    s.display_stack();
    s.get_stack_top_value();
    s.get_current_index();
    return 0;
}
