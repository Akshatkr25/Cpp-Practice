#include <iostream>
#include <vector>

using namespace std;

const int N = 40;

template <typename T>
int sum(T res)
{
	int s = 0;
	for(int i = 0; i < res.size(); ++i)
		s += res[i];
	return s;
}

int main()
{
	vector<int> data;

	for(int i = 0 ; i < N ; ++i)
		  data.push_back(i);

	cout<<"sum is "<< sum(data) <<endl;
	return 0;
}

