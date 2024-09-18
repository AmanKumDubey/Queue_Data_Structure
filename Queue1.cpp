#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int>q;
    cout<<q.size()<<endl;
    cout<<"Queue first element is : "<<q.front()<<endl;
    q.push(12);
    q.push(14);
    q.push(20);
    cout<<q.size()<<endl;
    cout<<"Queue first element is : "<<q.front()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<q.size()<<endl;
    cout<<"Queue first element is : "<<q.front()<<endl;
    if(q.empty()){
        cout<<"Queue is Empty ";
    }
    else{
        cout<<"Queue is not Empty "<<endl;
    }

}