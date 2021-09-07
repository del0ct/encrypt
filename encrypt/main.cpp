#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <tuple>
#include <cmath>
using namespace std;
string pas1, pas2, pas3, res;
vector <int> pus1, pus2, pus3;

tuple<string, vector <int>> strtovec(string str, vector <int> vec);

tuple<vector <int>, string> vectostr(vector <int> vec, string str);

void entr();

void exp();

string pis(string a);

vector <int> shifr(vector <int> a, vector <int> b);

vector <int> dis(vector <int> vec);

int main()
{
	setlocale(0, "");
	entr();
	pus1 = get<1>(strtovec(pas1, pus1)); //first
	exp(); // second
	pas3 = pis(pas3); //thr
	pus3 = get<1>(strtovec(pas3, pus3)); //thr
	pus3 = dis(pus3); //thr
	pus1 = shifr(pus1, pus2);
	pus1 = shifr(pus1, pus3);
	cout << get<1>(vectostr(pus1, pas1)) << endl;
}

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

vector <int> shifr(vector <int> a, vector <int> b)
{
	int r = 0;
	for (int i = 0; i < (int)a.size(); i++)
	{
		if (r < (int)b.size())
		{
			a[i] *= b[r];
			r += 1;
		}
		else
		{
			r = 0;
			a[i] *= b[r];
			r += 1;
		}
	}
	for (int i = 0; i < (int)a.size(); i++)
	{
		a[i] %= 62;
	}
	return (a);
}

vector <int> dis(vector <int> vec)
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (int i = 0; i < (int)vec.size(); i++)
	{
		if (i < (int)vec.size() / 3)
			a += (vec[i]) * (10 ^ ((vec.size() / 3) - i));
		else if ((i >= (int)vec.size() / 3) and (i < (int)(vec.size() / 3) * 2))
			b += (vec[i]) * (10 ^ (((vec.size() / 3)) * 2 - i));
		else
			c += (vec[i]) * (10 ^ (vec.size() - i));
	}
	int diskr = b * b - 4 * a * c;
	if (diskr < 0)
		return (vector <int> { a, b, c });
	else if (diskr == 0)
		return (vector <int> { a, -b / (a * 2), c });
	else
		return (vector <int> { ((-b - (int)round(sqrt(diskr))) / (a * 2)), b, ((-b + (int)round(sqrt(diskr))) / (a * 2))});
}

string pis(string a)
{
	int b = 0;
	while ((a.length() % 3) != 0)
	{
		if (b == 0)
		{
			a.erase(a.length() - 1, 1);
			b = 1;
		}
		else
		{
			a.erase(0, 1);
			b = 0;
		}
	}
	return a;
}