#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <cmath>
#include <tuple>
using namespace std;
vector <int> strtovec(string str)
{
	vector <int> vec;
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (str[i] == 'a')
			vec.push_back(1);
		else if (str[i] == 'b')
			vec.push_back(2);
		else if (str[i] == 'c')
			vec.push_back(3);
		else if (str[i] == 'd')
			vec.push_back(4);
		else if (str[i] == 'e')
			vec.push_back(5);
		else if (str[i] == 'f')
			vec.push_back(6);
		else if (str[i] == 'g')
			vec.push_back(7);
		else if (str[i] == 'h')
			vec.push_back(8);
		else if (str[i] == 'i')
			vec.push_back(9);
		else if (str[i] == 'j')
			vec.push_back(10);
		else if (str[i] == 'k')
			vec.push_back(11);
		else if (str[i] == 'l')
			vec.push_back(12);
		else if (str[i] == 'm')
			vec.push_back(13);
		else if (str[i] == 'n')
			vec.push_back(14);
		else if (str[i] == 'o')
			vec.push_back(15);
		else if (str[i] == 'p')
			vec.push_back(16);
		else if (str[i] == 'q')
			vec.push_back(17);
		else if (str[i] == 'r')
			vec.push_back(18);
		else if (str[i] == 's')
			vec.push_back(19);
		else if (str[i] == 't')
			vec.push_back(20);
		else if (str[i] == 'u')
			vec.push_back(21);
		else if (str[i] == 'v')
			vec.push_back(22);
		else if (str[i] == 'w')
			vec.push_back(23);
		else if (str[i] == 'x')
			vec.push_back(24);
		else if (str[i] == 'y')
			vec.push_back(25);
		else if (str[i] == 'z')
			vec.push_back(26);
		else if (str[i] == 'A')
			vec.push_back(27);
		else if (str[i] == 'B')
			vec.push_back(28);
		else if (str[i] == 'C')
			vec.push_back(29);
		else if (str[i] == 'D')
			vec.push_back(30);
		else if (str[i] == 'E')
			vec.push_back(31);
		else if (str[i] == 'F')
			vec.push_back(32);
		else if (str[i] == 'G')
			vec.push_back(33);
		else if (str[i] == 'H')
			vec.push_back(34);
		else if (str[i] == 'I')
			vec.push_back(35);
		else if (str[i] == 'J')
			vec.push_back(36);
		else if (str[i] == 'K')
			vec.push_back(37);
		else if (str[i] == 'L')
			vec.push_back(38);
		else if (str[i] == 'M')
			vec.push_back(39);
		else if (str[i] == 'N')
			vec.push_back(40);
		else if (str[i] == 'O')
			vec.push_back(41);
		else if (str[i] == 'P')
			vec.push_back(42);
		else if (str[i] == 'Q')
			vec.push_back(43);
		else if (str[i] == 'R')
			vec.push_back(44);
		else if (str[i] == 'S')
			vec.push_back(45);
		else if (str[i] == 'T')
			vec.push_back(46);
		else if (str[i] == 'U')
			vec.push_back(47);
		else if (str[i] == 'V')
			vec.push_back(48);
		else if (str[i] == 'W')
			vec.push_back(49);
		else if (str[i] == 'X')
			vec.push_back(50);
		else if (str[i] == 'Y')
			vec.push_back(51);
		else if (str[i] == 'Z')
			vec.push_back(52);
		else if (str[i] == '0')
			vec.push_back(53);
		else if (str[i] == '1')
			vec.push_back(54);
		else if (str[i] == '2')
			vec.push_back(55);
		else if (str[i] == '3')
			vec.push_back(56);
		else if (str[i] == '4')
			vec.push_back(57);
		else if (str[i] == '5')
			vec.push_back(58);
		else if (str[i] == '6')
			vec.push_back(59);
		else if (str[i] == '7')
			vec.push_back(60);
		else if (str[i] == '8')
			vec.push_back(61);
		else if (str[i] == '9')
			vec.push_back(62);
	}
	return vec;
}

string vectostr(vector <int> vec)
{
	string str;
	for (int i = 0; i < (int)vec.size(); i++)
	{
		if (vec[i] == 1)
			str += 'a';
		else if (vec[i] == 2)
			str += 'b';
		else if (vec[i] == 3)
			str += 'c';
		else if (vec[i] == 4)
			str += 'd';
		else if (vec[i] == 5)
			str += 'e';
		else if (vec[i] == 6)
			str += 'f';
		else if (vec[i] == 7)
			str += 'g';
		else if (vec[i] == 8)
			str += 'h';
		else if (vec[i] == 9)
			str += 'i';
		else if (vec[i] == 10)
			str += 'j';
		else if (vec[i] == 11)
			str += 'k';
		else if (vec[i] == 12)
			str += 'l';
		else if (vec[i] == 13)
			str += 'm';
		else if (vec[i] == 14)
			str += 'n';
		else if (vec[i] == 15)
			str += 'o';
		else if (vec[i] == 16)
			str += 'p';
		else if (vec[i] == 17)
			str += 'q';
		else if (vec[i] == 18)
			str += 'r';
		else if (vec[i] == 19)
			str += 's';
		else if (vec[i] == 20)
			str += 't';
		else if (vec[i] == 21)
			str += 'u';
		else if (vec[i] == 22)
			str += 'v';
		else if (vec[i] == 23)
			str += 'w';
		else if (vec[i] == 24)
			str += 'x';
		else if (vec[i] == 25)
			str += 'y';
		else if (vec[i] == 26)
			str += 'z';
		else if (vec[i] == 27)
			str += 'A';
		else if (vec[i] == 28)
			str += 'B';
		else if (vec[i] == 29)
			str += 'C';
		else if (vec[i] == 30)
			str += 'D';
		else if (vec[i] == 31)
			str += 'E';
		else if (vec[i] == 32)
			str += 'F';
		else if (vec[i] == 33)
			str += 'G';
		else if (vec[i] == 34)
			str += 'H';
		else if (vec[i] == 35)
			str += 'I';
		else if (vec[i] == 36)
			str += 'J';
		else if (vec[i] == 37)
			str += 'K';
		else if (vec[i] == 38)
			str += 'L';
		else if (vec[i] == 39)
			str += 'M';
		else if (vec[i] == 40)
			str += 'N';
		else if (vec[i] == 41)
			str += 'O';
		else if (vec[i] == 42)
			str += 'P';
		else if (vec[i] == 43)
			str += 'Q';
		else if (vec[i] == 44)
			str += 'R';
		else if (vec[i] == 45)
			str += 'S';
		else if (vec[i] == 46)
			str += 'T';
		else if (vec[i] == 47)
			str += 'U';
		else if (vec[i] == 48)
			str += 'V';
		else if (vec[i] == 49)
			str += 'W';
		else if (vec[i] == 50)
			str += 'X';
		else if (vec[i] == 51)
			str += 'Y';
		else if (vec[i] == 52)
			str += 'Z';
		else if (vec[i] == 53)
			str += '0';
		else if (vec[i] == 54)
			str += '1';
		else if (vec[i] == 55)
			str += '2';
		else if (vec[i] == 56)
			str += '3';
		else if (vec[i] == 57)
			str += '4';
		else if (vec[i] == 58)
			str += '5';
		else if (vec[i] == 59)
			str += '6';
		else if (vec[i] == 60)
			str += '7';
		else if (vec[i] == 61)
			str += '8';
		else if (vec[i] == 0)
			str += '9';
	}
	return str;
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

vector <int> dis(vector <int> vec)
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (int i = 0; i < (int)vec.size(); i++)
	{
		if (i < (int)vec.size() / 3)
			a += (vec[i]) * (10 ^ ((vec.size() / 3) - i));
		else if ((i >= (int)vec.size() / 3) & (i < (int)(vec.size() / 3) * 2))
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

vector <int> exp(string a)
{
	std::string p;
	vector <int> b;
	while (a.find('0') != -1)
		a.erase(a.find('0'), 1);
	if (a.length() % 2 != 0)
		a.erase(a.length() - 1, 1);
	for (int i = 0; i < (int)a.length(); i += 2)
	{
		p.assign(a, i, 2);
		b.push_back(stoi(p));
	}
	return b;
}

string vectostrws(vector <int> vec)
{
	string str;
	for (int i = 0; i < (int)vec.size(); i++)
	{
		if (vec[i] == 1)
			str += 'a';
		else if (vec[i] == 2)
			str += 'b';
		else if (vec[i] == 3)
			str += 'c';
		else if (vec[i] == 4)
			str += 'd';
		else if (vec[i] == 5)
			str += 'e';
		else if (vec[i] == 6)
			str += 'f';
		else if (vec[i] == 7)
			str += 'g';
		else if (vec[i] == 8)
			str += 'h';
		else if (vec[i] == 9)
			str += 'i';
		else if (vec[i] == 10)
			str += 'j';
		else if (vec[i] == 11)
			str += 'k';
		else if (vec[i] == 12)
			str += 'l';
		else if (vec[i] == 13)
			str += 'm';
		else if (vec[i] == 14)
			str += 'n';
		else if (vec[i] == 15)
			str += 'o';
		else if (vec[i] == 16)
			str += 'p';
		else if (vec[i] == 17)
			str += 'q';
		else if (vec[i] == 18)
			str += 'r';
		else if (vec[i] == 19)
			str += 's';
		else if (vec[i] == 20)
			str += 't';
		else if (vec[i] == 21)
			str += 'u';
		else if (vec[i] == 22)
			str += 'v';
		else if (vec[i] == 23)
			str += 'w';
		else if (vec[i] == 24)
			str += 'x';
		else if (vec[i] == 25)
			str += 'y';
		else if (vec[i] == 26)
			str += 'z';
		else if (vec[i] == 27)
			str += 'A';
		else if (vec[i] == 28)
			str += 'B';
		else if (vec[i] == 29)
			str += 'C';
		else if (vec[i] == 30)
			str += 'D';
		else if (vec[i] == 31)
			str += 'E';
		else if (vec[i] == 32)
			str += 'F';
		else if (vec[i] == 33)
			str += 'G';
		else if (vec[i] == 34)
			str += 'H';
		else if (vec[i] == 35)
			str += 'I';
		else if (vec[i] == 36)
			str += 'J';
		else if (vec[i] == 37)
			str += 'K';
		else if (vec[i] == 38)
			str += 'L';
		else if (vec[i] == 39)
			str += 'M';
		else if (vec[i] == 40)
			str += 'N';
		else if (vec[i] == 41)
			str += 'O';
		else if (vec[i] == 42)
			str += 'P';
		else if (vec[i] == 43)
			str += 'Q';
		else if (vec[i] == 44)
			str += 'R';
		else if (vec[i] == 45)
			str += 'S';
		else if (vec[i] == 46)
			str += 'T';
		else if (vec[i] == 47)
			str += 'U';
		else if (vec[i] == 48)
			str += 'V';
		else if (vec[i] == 49)
			str += 'W';
		else if (vec[i] == 50)
			str += 'X';
		else if (vec[i] == 51)
			str += 'Y';
		else if (vec[i] == 52)
			str += 'Z';
		else if (vec[i] == 53)
			str += '0';
		else if (vec[i] == 54)
			str += '1';
		else if (vec[i] == 55)
			str += '2';
		else if (vec[i] == 56)
			str += '3';
		else if (vec[i] == 57)
			str += '4';
		else if (vec[i] == 58)
			str += '5';
		else if (vec[i] == 59)
			str += '6';
		else if (vec[i] == 60)
			str += '7';
		else if (vec[i] == 61)
			str += '8';
		else if (vec[i] == 62)
			str += '9';
		else if (vec[i] == 63)
			str += '!';
		else if (vec[i] == 64)
			str += '@';
		else if (vec[i] == 65)
			str += '#';
		else if (vec[i] == 66)
			str += '$';
		else if (vec[i] == 67)
			str += '%';
		else if (vec[i] == 68)
			str += '&';
		else if (vec[i] == 69)
			str += '*';
		else if (vec[i] == 70)
			str += '(';
		else if (vec[i] == 71)
			str += ')';
		else if (vec[i] == 72)
			str += '-';
		else if (vec[i] == 73)
			str += '+';
		else if (vec[i] == 74)
			str += '=';
		else if (vec[i] == 75)
			str += ':';
		else if (vec[i] == 76)
			str += ',';
		else if (vec[i] == 77)
			str += '.';
		else if (vec[i] == 0)
			str += '?';
	}
	return str;
}

vector <int> strtovecws(string str)
{
	vector <int> vec;
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (str[i] == 'a')
			vec.push_back(1);
		else if (str[i] == 'b')
			vec.push_back(2);
		else if (str[i] == 'c')
			vec.push_back(3);
		else if (str[i] == 'd')
			vec.push_back(4);
		else if (str[i] == 'e')
			vec.push_back(5);
		else if (str[i] == 'f')
			vec.push_back(6);
		else if (str[i] == 'g')
			vec.push_back(7);
		else if (str[i] == 'h')
			vec.push_back(8);
		else if (str[i] == 'i')
			vec.push_back(9);
		else if (str[i] == 'j')
			vec.push_back(10);
		else if (str[i] == 'k')
			vec.push_back(11);
		else if (str[i] == 'l')
			vec.push_back(12);
		else if (str[i] == 'm')
			vec.push_back(13);
		else if (str[i] == 'n')
			vec.push_back(14);
		else if (str[i] == 'o')
			vec.push_back(15);
		else if (str[i] == 'p')
			vec.push_back(16);
		else if (str[i] == 'q')
			vec.push_back(17);
		else if (str[i] == 'r')
			vec.push_back(18);
		else if (str[i] == 's')
			vec.push_back(19);
		else if (str[i] == 't')
			vec.push_back(20);
		else if (str[i] == 'u')
			vec.push_back(21);
		else if (str[i] == 'v')
			vec.push_back(22);
		else if (str[i] == 'w')
			vec.push_back(23);
		else if (str[i] == 'x')
			vec.push_back(24);
		else if (str[i] == 'y')
			vec.push_back(25);
		else if (str[i] == 'z')
			vec.push_back(26);
		else if (str[i] == 'A')
			vec.push_back(27);
		else if (str[i] == 'B')
			vec.push_back(28);
		else if (str[i] == 'C')
			vec.push_back(29);
		else if (str[i] == 'D')
			vec.push_back(30);
		else if (str[i] == 'E')
			vec.push_back(31);
		else if (str[i] == 'F')
			vec.push_back(32);
		else if (str[i] == 'G')
			vec.push_back(33);
		else if (str[i] == 'H')
			vec.push_back(34);
		else if (str[i] == 'I')
			vec.push_back(35);
		else if (str[i] == 'J')
			vec.push_back(36);
		else if (str[i] == 'K')
			vec.push_back(37);
		else if (str[i] == 'L')
			vec.push_back(38);
		else if (str[i] == 'M')
			vec.push_back(39);
		else if (str[i] == 'N')
			vec.push_back(40);
		else if (str[i] == 'O')
			vec.push_back(41);
		else if (str[i] == 'P')
			vec.push_back(42);
		else if (str[i] == 'Q')
			vec.push_back(43);
		else if (str[i] == 'R')
			vec.push_back(44);
		else if (str[i] == 'S')
			vec.push_back(45);
		else if (str[i] == 'T')
			vec.push_back(46);
		else if (str[i] == 'U')
			vec.push_back(47);
		else if (str[i] == 'V')
			vec.push_back(48);
		else if (str[i] == 'W')
			vec.push_back(49);
		else if (str[i] == 'X')
			vec.push_back(50);
		else if (str[i] == 'Y')
			vec.push_back(51);
		else if (str[i] == 'Z')
			vec.push_back(52);
		else if (str[i] == '0')
			vec.push_back(53);
		else if (str[i] == '1')
			vec.push_back(54);
		else if (str[i] == '2')
			vec.push_back(55);
		else if (str[i] == '3')
			vec.push_back(56);
		else if (str[i] == '4')
			vec.push_back(57);
		else if (str[i] == '5')
			vec.push_back(58);
		else if (str[i] == '6')
			vec.push_back(59);
		else if (str[i] == '7')
			vec.push_back(60);
		else if (str[i] == '8')
			vec.push_back(61);
		else if (str[i] == '9')
			vec.push_back(62);
		else if (str[i] == '!')
			vec.push_back(63);
		else if (str[i] == '@')
			vec.push_back(64);
		else if (str[i] == '#')
			vec.push_back(65);
		else if (str[i] == '$')
			vec.push_back(66);
		else if (str[i] == '%')
			vec.push_back(67);
		else if (str[i] == '&')
			vec.push_back(68);
		else if (str[i] == '*')
			vec.push_back(69);
		else if (str[i] == '(')
			vec.push_back(70);
		else if (str[i] == ')')
			vec.push_back(71);
		else if (str[i] == '-')
			vec.push_back(72);
		else if (str[i] == '+')
			vec.push_back(73);
		else if (str[i] == '=')
			vec.push_back(74);
		else if (str[i] == ':')
			vec.push_back(75);
		else if (str[i] == ',')
			vec.push_back(76);
		else if (str[i] == '.')
			vec.push_back(77);
		else if (str[i] == '?')
			vec.push_back(78);
	}
	return vec;
}

vector <int> shifrws(vector <int> a, vector <int> b)
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
		a[i] %= 78;
	}
	return (a);
}