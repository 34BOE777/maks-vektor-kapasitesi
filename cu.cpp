#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> cu(55);
	cout<<cu.size()<<endl;
	cu.resize(35);
	cout<<cu.size()<<endl;
	cout<<cu.capacity()<<endl;//vektörün alabileceği maksimum kapasite
	return 0;
	
}