
#include<iostream>
using namespace std;
class que
{
    int arr[10];
public:
    int rear,front,maxsize,i,fre,count=0;
    int x;
    void full();
    void empty();
    void insert();
    void del();
    void frequency();
    void display();


    que()
    {
        rear=front=-1;
        maxsize=10;
    }


};
void que::full()
{
    if(rear==maxsize-1)
    {
        cout << "Queue is full";
    }
    else {
        cout << "Queue is not full";
    }
}
void que::empty()
{
    if(front==rear)
    {
        cout<<"Queue is empty";
    }
    else
    {
        cout<<"Queue is not empty";
    }
}
void que::insert()
{
    if(rear<maxsize-1) {
        cout << "enter the element you wat insert";
        cin >> x;
        rear++;
        arr[rear] = x;
    }
    else
    {
        cout<<"queue is full";
    }
}
void que::del()
{
    if(front!=rear)
    {
        front++;
        x=arr[front];
        cout<<"Deleted element is"<<x;
    }
    else
    {
        cout<<"queue is empty";

    }
}
void que::frequency()
{
    {
        cout<<"Enter the element of which frequency is to be found."<<"\n";
        cin>>fre;
        for(i=0;i<rear;i++)
        {
            if(fre==arr[i])
            {
                count++;
            }
        }
        cout<<"The frequency is : "<<count<<"\n\n";
    }

}
void que::display()
{
    if(front!=rear)
    {
        cout<<"queue elements are :";
        for(i=front+1;i<rear+1;i++)
        {
            cout<<arr[i];

        }

    }
    else
    {
        cout<<"Queue is empty";

    }
}

int main()
{
    que obj;
    int check=7;
    while(check!=0)
    {
        cout<<"\n"<<"1)Press 1 to insert."<<"\n"<<"2)Press 2 to delete."<<"\n"<<"3)Press 3 to frequency."<<"\n"<<"4)Press 4 for display."<<"\n"<<"5)press 5 to check queue is full"<<"\n"<<"6)press 6 to check queue is empty or not"<<"5)Press 0 to exit."<<"\n\n";


        cin>>check;
        switch(check)
        {
            case 1 :
            {
                obj.insert();
                break;
            }
            case 2 :
            {
                obj.del();
                break;
            }
            case 3:
            {
                obj.frequency();
                break;
            }
            case 4 :
            {
                obj.display();
                break;
            }
            case 5 :
            {
                obj.full();
                break;
            }
            case 6 :
            {
                obj.empty();
                break;
            }


            case 0:
            {
                return 0;
            }
        }
    }
}



