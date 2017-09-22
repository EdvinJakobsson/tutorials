
#include <iostream>
using namespace std;

double dailyEURSEKrate = 9.533;
double commision = 0.005;

double converter(double buy){
	
	double cost = buy*dailyEURSEKrate*(1+commision);
	return cost;	
}

int main() {

	double buy;

	cout << "\nWelcome. The daily EUR-SEK rate is " << dailyEURSEKrate << " SEK to 1 EUR and the charged commision is " << commision*100 << "%. \nPlease state how much in euro you would like to purchase: \n";

	cin >> buy;
	double cost = converter(buy);

	cout << "Buying " << buy << " euro will cost " << cost << " swedish kronor including commision. \n";
}




