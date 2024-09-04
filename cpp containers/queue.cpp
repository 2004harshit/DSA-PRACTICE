// Queue container
#include<iostream>
#include<queue>
using namespace std;


int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    cout<<"size = "<<q.size()<<endl;
    q.pop();
     cout<<"size after poped = "<<q.size()<<endl;
     cout<<q.front()<<endl;
     
     
    //  Swap function in queue

    queue<int>q1,q2;
    q1.push(123);
    q2.push(321);
    cout<<"q1 contains "<<q1.front()<<"  and q2 contains "<<q2.front()<<endl;

    q1.swap(q2);
    cout<<"After swapping q1 contains "<<q1.front()<<"  and q2 contains "<<q2.front()<<endl;


    return 0;
}