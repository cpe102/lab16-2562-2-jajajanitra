#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
vector<int> randomVector(int N)
{
	int y  =0;
	vector<int> myVector(N);
	for(int i =0;i<N;i++)
	{
		y = rand()%10;
		myVector[i] = y;
	}
	
	return myVector;
}

void showVector(vector<int> Vec)
{
	cout << "[";
	for(int i = 0;i < Vec.size() ;i++)
	{
		cout << Vec[i] << " ";
	}
	cout << "]";
}

int dotProduct(vector<int> Vec1,vector<int> Vec2)
{
	int result = 0;
	for(int i =0;i < Vec1.size();i++)
	{
		result = result + (Vec1[i]*Vec2[i]);
	}

	return result;
}
