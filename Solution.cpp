#include <bits/stdc++.h>
#define mp make_pair
#define eb emplace_back
#define ll             long long int
#define pii            pair<int, int>
#define vi               vector<int>
#define vll              vector<long long int>
#define vs               vector<string>
#define si				set<int>
#define mii              map<int,int>
#define msi				 map<string,int>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define MOD             1000000007  //1e9+7
#define INF             1e18
#define PI              acos(-1)
#define fprecision(x,y) fixed<<setprecision(y)<<x
#define T()            int x; cin>>x; while(x--)
#define mk(arr,n,type)  type *arr = new type[n]; //dynamic
using namespace std;

void a_s_c(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   //#ifndef ONLINE_JUDGE
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    //#endif
}

//STACK WITH LinkedList

class Node{
public:
	int data;
	Node* next;
	Node(int val){
		data = val;
		next = NULL;
	}
};


class Stack{
	Node* top;
public:
	Stack(){
		top=NULL;
	}

	//O(1): TOP Points to Last Added Node
	void push(int val){
		Node* node = new Node(val);
		if(top==NULL){
			top=node;
		}else{
			node->next = top;
			top= node; 
		}
	}

	//
	void pop(){
		if(top==NULL){
			cout<<"Heap EMPTY";
		}else{
			//This is TOP
			Node* temp= top;

			// Move TOP to Next 
			top= top->next;

			//Free Up Node Bro;)
			temp->next=NULL;
			free(temp);
		}
	}

	int TOP(){
		if(top==NULL){
			cout<<"Heap EMPTY";
			return -1;
		}else{
			return top->data;
		}
	}

	bool isEmpty(){
		if(top==NULL) return true;
		else return false;
	}
};


int main(){
    a_s_c();
    Stack s = Stack(); // 19->15->14->13->12

    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(19);

    while(!s.isEmpty()){
    	cout<<s.TOP()<<" ";
    	s.pop();
    }
    
    return 0;
}