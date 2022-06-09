/*-------------------following code is the implementation of different types of queues using cpp--------------*/
/*by jashwanth 9-6-2022*/
#include <iostream>
using namespace std;
class simple_queue{
    public:
        int* array;
        int size;
        int front;
        int rear;
        simple_queue(int n)
        {
            array= (int *)malloc(sizeof(int)*n);
            size=n;
            front=0;
            rear=0;
        }

        void display()
        {cout<<"\n";
            for(int i=front;i<rear;i++)
            {
                cout<<" "<<array[i];
            }
        }

        void enqueue(int element)
        {
            if(rear<=size-1)
            {
                array[rear]=element;
                rear++;
            }
            else{
                cout<<"queue is full";
            }
        }
        int dequeue()
        {
            if(front==rear)
            {
                cout<<"\nqueue is empty";
            }
            else{
                int output=array[front];
                front++;
                return output;
            }
        }


};
int main()
{
    simple_queue a(5);
    a.enqueue(5);
    a.enqueue(2);
    a.enqueue(3);
    a.enqueue(4);
    a.enqueue(5);
    a.display();
    cout<<endl<<"dequed element is : "<<a.dequeue();
    a.display();
}
