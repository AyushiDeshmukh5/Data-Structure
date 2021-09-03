#include <iostream>
using namespace std;

class Queue
{
private:
    int front, rear, arr[5];

public:
    Queue()
    {
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    // ------------------isEmpty()---------------------
    bool isEmpty()
    {
        if (front==-1 && rear==-1)
        {
            return true;
            
        }
      else

      return false;
}
        //--------------------- isFull()--------------------
        bool isFull()
        {
        	
            if (rear == 4)
                return true;
            else
                return false;
        }

        //--------------------- enqueue()-------------------
        void enqueue(int value)
        {
            if (isFull())
            {
            	cout<<"Queue is full"<<endl;
                return;
            }
            else if (isEmpty())
            {
                rear = front = 0;
                arr[rear] = value;
            }
            else {
            	rear++;
            	arr[rear]=value;
			}
				
        }
        //  ---------------------------dequeue------------------------
        int dequeue()
        {
            int x = 0;
            if (isEmpty()){
			
            cout<<"queue  is empty"<<endl;
                return 0;
            }
            else if(front == rear )
            {
                x = arr[rear];
                arr[rear] = 0;
                front = rear = -1;
           
            return x;
            }
            else{
            	x=arr[front];
            	arr[front]=0;
            	front++;
            	return x;
            	
			}
        }

        //------------------------------ count------------------------------
        int count()
        {
            return (rear-front+1);
        }

        // -----------------------------display------------------------------

        void display()
        {
            for (int i = 0; i < 5; i++)
            {
                cout << arr[i] <<" "<< endl;
            }
        }
    };


int main()
{
    Queue q1;
    int value, option;

    do
    {
        cout << "Enter your choice." << endl;
        cout << "Press 0 to exit"<<endl;

        cout << "1.Check whether the queue is empty or not" << endl;
        cout << "2.Check whether the queue is full or not" << endl;
        cout << "3.Insert a value in the queue" << endl;
        cout << "4.Remove a value from the queue" << endl;
        cout << "5.Total number of elements in the queue" << endl;
        cout << "6.Display the elemenets of queue" << endl;
        cout << "7.Clear the screen" << endl;

        cin >> option;
        switch (option)
        {
        case 1:
            if (q1.isEmpty())
            
                cout << "Queue is empty" << endl;
            
             else
			  cout << "Queue is not empty" << endl;
            break;

        case 2:
            if (q1.isFull())
            
                cout << "Queue is full" << endl;
           
            else
			
			 cout << "queue is not full" << endl;
            
            break;

        case 3:
            cout << "enter a value to insert in the queue" << endl;
            cin >> value;
            q1.enqueue(value);
           break;

        case 4:
            cout << "the dequeued value is" << q1.dequeue() << endl;
            break;

        case 5:
            cout << "the total number of elements are" << q1.count() << endl;
            break;

        case 6:
        	cout<<"the values are"<<endl;
             q1.display();
            break;

        case 7:
            system("cls");
            break;

        default:
            cout << "inavlid choice" << endl;
        }

    } while (option != 0);

    return 0;
}
