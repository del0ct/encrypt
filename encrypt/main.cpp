#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <tuple>
#include <cmath>
using namespace std;
string pas1, pas2, pas3, res;
vector <int> pus1, pus2, pus3;

vector <int> strtovec(string str, vector <int> vec);

string vectostr(vector <int> vec, string str);

string pis(string a);

vector <int> shifr(vector <int> a, vector <int> b);

vector <int> dis(vector <int> vec);

void entr()
{
	cout << "first (any english letters or numbers): ";
	cin >> pas1;
	cout << "second (ONLY numbers minimum 2, but preferably more): ";
	cin >> pas2;
	cout << "third (ONLY letters minimum 3, but preferably more): ";
	cin >> pas3;
}

void exp()
{
	string p;
	while (pas2.find('0') != -1)
		pas2.erase(pas2.find('0'), 1);
	if (pas2.length() % 2 != 0)
		pas2.erase(pas2.length() - 1, 1);
	for (int i = 0; i < (int)pas2.length(); i += 2)
	{
		p.assign(pas2, i, 2);
		pus2.push_back(stoi(p));
	}
}

int main()
{
	setlocale(0, "");
	entr();
	pus1 = strtovec(pas1, pus1); //first
	exp(); // second
	pas3 = pis(pas3); //thr
	pus3 = strtovec(pas3, pus3); //thr
	pus3 = dis(pus3); //thr
	pus1 = shifr(pus1, pus2);
	pus1 = shifr(pus1, pus3);
	cout << vectostr(pus1, pas1) << endl;
	system("pause");
}