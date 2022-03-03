#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <tuple>
#include <cmath>
using namespace std;
string pas1, pas2, pas3;
int a;
//vector <int> pus1, pus2, pus3;

vector <int> strtovec(string str);

vector <int> exp(string str);

string vectostr(vector <int> vec);

string pis(string a);

vector <int> shifr(vector <int> a, vector <int> b);

vector <int> dis(vector <int> vec);

string vectostrws(vector <int> vec);

vector <int> strtovecws(string str);

vector <int> shifrws(vector <int> a, vector <int> b);
void entr()
{
	cout << "first (any english letters or numbers): ";
	cin >> pas1;
	cout << "second (ONLY numbers minimum 2, but preferably more): ";
	cin >> pas2;
	cout << "third (ONLY letters minimum 3, but preferably more): ";
	cin >> pas3;
	cout << "symbol on?" << endl;
	cin >> a;
}

int main()
{
	setlocale(0, "");
	entr();
	//pus1 = strtovec(pas1, pus1); //first
	//exp(); // second
	//pas3 = pis(pas3); //thr
	//pus3 = strtovec(pas3, pus3); //thr
	//pus3 = dis(pus3); //thr
	//pus1 = shifr(pus1, pus2);
	//pus1 = shifr(pus1, pus3);
	if (a == 1) 
	{
		cout << vectostrws(shifrws((shifrws(strtovecws(pas1), exp(pas2))), dis(strtovecws(pis(pas3))))) << endl;
	}
	else 
	{
		cout << vectostr(shifr((shifr(strtovec(pas1), exp(pas2))), dis(strtovec(pis(pas3))))) << endl;
	}
	system("pause");
}