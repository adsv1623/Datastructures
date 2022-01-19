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
#define MAX 100
using namespace std;

void a_s_c(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   //#ifndef ONLINE_JUDGE
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    //#endif
}


// Implement stack
class Stack{
	int top;
public:
	Stack(){
		top =-1;
	}
	int arr[MAX];

	//push-op
	void push(int val){
		//size is FULL
		if(top>=MAX){
			cout<<"STACKOVERFLOW";
		}else{
			// still have some space to Add Elements
			arr[++top]=val;
			cout<<"PUSH:"<<val<<"\n";
		}
	} 

	//pop -op
	int pop(){
		if(top==-1){
			cout<<"STACK EMPTY";
			return -1;
		}else{
			int x = arr[top--];
			return x;
		}
	}

	//TOP
	int Top(){
		if(top==-1){
			cout<<"STACK EMPTY";
			return -1;
		}else{
			return arr[top];
		}
	}

	//Empty
	bool isEmpty(){
		if(top==-1) return true;
		else return false;
	}

};

int main(){
    a_s_c();

    Stack s = Stack();
    s.push(8);
    s.push(10);
    s.push(11);
    s.push(8);
    s.push(10);
    s.push(11);
    s.push(8);
    s.push(10);
    s.push(11);
    
    while(!s.isEmpty()){
    	cout<<s.Top()<<"\n";
    	s.pop();
    }
    return 0;
}