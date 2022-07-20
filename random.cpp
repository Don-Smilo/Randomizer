#include <iostream>
#include <cstdlib>
#include <ctime>;
using namespace std;

int main(){
	srand(time(0));
	int a=0, b=100, choice=0, ans;
	while (true){
		cout<<"1 - Counting once\n";
		cout<<"2 - Counting in range\n";
		cout<<"3 - Counting average\n --> ";
		cin>>choice;
		cout<<"Limits: from ... to ... --> ";
		cin>>a>>b;
		while (a>=b){
			cout<<"Error! Try again --> ";
			cin>>a>>b;
		}
		switch (choice){
		case 1:
			cout<<"Result:  "<<rand()%(b-1)+a<<"\n\n";
			break;
		case 2:
			cout<<"Number of times --> ";
			cin>>ans;
			for (int i = 0; i<ans; i++){
				cout<<"Result:  "<<rand()%(b-1)+a<<endl;
			}
			cout<<"Finish"<<endl<<endl;
			break;
		case 3:
			cout<<"Number of times --> ";
			cin>>ans;
			int sum = 0;
			float aver;
			for (int i = 0; i<ans; i++){
				sum += rand()%(b-1)+a;
			}
			aver = sum/ans;
			cout<<"Average:  "<<aver<<endl<<endl;
			break;
		}
	}
}