#include <bits/stdc++.h>
using namespace std;
const int MAXSIZE=5;
class Deque{
	int arr[MAXSIZE];
	int front,rear;
public:
	Deque(){
		front=rear=-1;
	}
	//methods
	void insertFront(int val){
		if(rear==-1 && front==-1){
			rear=front=0;
			arr[front]=val;
		}else if((front-1+MAXSIZE)%MAXSIZE ==rear){
			cout<<"FULL \n";
		}else{
			front = (front-1+MAXSIZE)%MAXSIZE;
			arr[front]=val;
		}
	}

	int pop_front(){
		if(front==-1 && rear==-1) return -1;
		else if(front==rear){
			// single elemnt left
			int x = arr[front];
			//reset
			front =rear=-1;
			return x;
		}else{
			int val = arr[front];
			front = (front+1)%MAXSIZE;
			return val;
		}
	}

	void insertRear(int val){
		if(rear==-1 && front==-1){
			rear=front=0;
			arr[rear]=val;
		}else if( (rear+1)%MAXSIZE ==front ){
			cout<<"FULL\n";
		}else{
			rear = (rear+1)%MAXSIZE;
			arr[rear]=val;
		}
	}

	int pop_rear(){
		if(rear==-1 && front==-1){
			return -1;
		}else if(front==rear){
			int val = arr[rear];
			//reset
			rear = front=-1;
			return val;
		}else{
			int val = arr[rear];
			rear = (rear-1+MAXSIZE)%MAXSIZE;
			return val;
		}
	}

	int size(){
		if(front==-1 && rear==-1) return 0;
		else if(front==0) return rear+1;
		else{
			return MAXSIZE - abs(front-rear-1);
		}
	}
};


int main(){
	Deque dq = Deque();
	dq.insertFront(10);
	dq.insertRear(9);
	dq.insertFront(8);
	dq.insertRear(7);
	dq.insertFront(6);
	dq.insertRear(5);

	while(dq.size()!=0){
		cout<<dq.pop_front()<<" ";
	}
    
    return 0;
}
