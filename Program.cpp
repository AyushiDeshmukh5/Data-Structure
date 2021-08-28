#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }

    bool isFull()
    {
        if (top == 4)
        {
            return true;
        }
        else
            return false;
    }
    //------------------------------push----------------------------------
    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack overflow";
        }
        else{
            top++;
        arr[top] = val;
        }
    }
    // ------------------------------pop------------------------------------
    int pop()
    {
        if (isEmpty())
        {
            cout << "stack underflow";
            return 0;
        }
        else
        {
            int popvalue = arr[top];
            arr[top] = 0;
            top--;
            return popvalue;
        }
    }

    //--------------------------------count------------------------------
    int count()
    {
        return (top + 1);
    }

    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "stack underflow";
            return 0;
        }
        else
            return arr[pos];
    }

    //---------------------------change-----------------------------

    void change(int pos, int val)
    {

        arr[pos] = val;
    }

    //---------------------------------display----------------------------------
    void display()
    {
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack s;
    int option, position, value;

    do
    {
        cout << "Choose which operation you want to perform on stack" << endl;
        cout << "enter 0 to exit"<<endl;
        cout << "1.Push()"<<endl;
        cout << "2.Pop()"<<endl;
        cout << "3.Peek()"<<endl;
        cout << "4.Count()l"<<endl;
        cout << "5.Change()"<<endl;
        cout << "6.Display()"<<endl;
        cout << "7.isEmpty()"<<endl;
        cout << "8.isFull()"<<endl;
        cout << "9.Clear screen"<<endl;

        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Enter an item to push in the stack";
            cin >> value;
            s.push(value);
            break;

        case 2:
            cout << "The value is" << s.pop() << endl;
            break;

        case 3:
            cout << "Enter the position" << endl;
            cin >> position;
            cout << "the value at" << position << "is" << s.peek(position);
            break;

        case 4:
            cout << "the total number of elements in stack is" << s.count() << endl;
            break;

        case 5:
            cout << "Enter the position";
            cin >> position;
            cout << "Enter the value";
            cin >> value;
            s.change(position, value);
            cout << "the value at" << position << "changed to" << value << endl;
            break;

        case 6:
            cout <<"elements are"<<endl;
             s.display();
            break;

        case 7:
            if(s.isEmpty())
            cout<<"empty"<<endl;
            else
            cout<<"not empty"<<endl;
            break;

        case 8:
            if(s.isFull()){
                cout<<"Full"<<endl;
            }
            else{
                cout<<"not full";
            }
            break;

        case 9:
            system("cls");
            break;

        default:
            cout << "invalid choice" << endl;
        }
    } while (option != 0);

    return 0;
}
