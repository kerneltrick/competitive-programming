#include <iostream>
#include <set>
#include <string>

using namespace std;
typedef set<char> SC;


int main(){
	
	int n=0;
	int k=0;
	scanf("%d %d", &n, &k );
	SC answers [k];
	for(int i = 0; i < n; ++i)
	{
		string a;
		cin >> a;
		for(int j = 0; j < k; ++j)
			answers[j].insert(a[j]);
	}

	int maxLowest=0;
	for(auto a: answers){
		if (a.size() == 1)
			maxLowest++;
	}

	printf("%d\n", maxLowest);

	return 0;

}
