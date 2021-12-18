#include <iostream>
#include <string>
#include <vector>

using namespace std;

int valueAtPoint(int timeStep, int firstYear, int startingPopulation, int growthDuration, int growthRate){

	int valueAtPoint = 0;
	int peakTimeStep = firstYear + growthDuration;

	if(timeStep > peakTimeStep){
		valueAtPoint = startingPopulation + (growthRate * growthDuration);
		valueAtPoint -= growthRate * (timeStep - peakTimeStep);
	}else if(timeStep < firstYear)
		return 0;
	else{
		valueAtPoint = startingPopulation + (growthRate * (timeStep - firstYear));
	}

	if(valueAtPoint < 0)
		return 0;

	return valueAtPoint;
}

int main(){

	int N = 0;

	cin >> N;
	int growthDuration[N], growthRate[N], initialPopulation[N], firstYear[N];

	for(int k=0; k < N; ++k){

		int y,i,s,b;
		cin >> y >> i >> s >> b;
		growthDuration[k] = y;
		growthRate[k] = i;
		initialPopulation[k] = s;
		firstYear[k] = b;
	}

	int maxPopulation = 0;

	for(int k=0; k<N; ++k){

		int timeStep = firstYear[k] + growthDuration[k];
		int peakSpeciesPopulation = valueAtPoint(timeStep, firstYear[k], initialPopulation[k], growthDuration[k], growthRate[k]);
		for(int m=0; m<N; ++m){

			if(m == k)
				continue;

			int valueAtPeak = valueAtPoint(timeStep, firstYear[m], initialPopulation[m], growthDuration[m], growthRate[m]);
			peakSpeciesPopulation += valueAtPeak;
		}
		if(peakSpeciesPopulation > maxPopulation)
			maxPopulation = peakSpeciesPopulation;
	}

	cout << maxPopulation;

	return 0;
}
