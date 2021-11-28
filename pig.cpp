#include <iostream>
#include<string>
using namespace std;

class Pig {
private:
	string name;
	double weight;
public:
	Pig();
	void setName(string n);
	void setWeight(double w);
	string getName();
	double getWeight();
	void eat(double f);
};
void Pig::setName(string n) {
	name = n;
}
void Pig::setWeight(double w) {
	weight = w;
}
string Pig::getName() {
	cout << "С������ֽ�" << name << "��" << endl;
	return name;
}
double Pig::getWeight() {
	cout << "С������" << weight << "���ˡ�" << endl;
	return weight;
}
void Pig::eat(double f = 1) {
	weight += f;
	cout << "С�����" << f << "�ﶫ����" << endl;
	getWeight();
}
Pig::Pig() {
	weight = 100;
	name = "С����";
	cout << "һֻ�µ�С������ˣ�����" << name << "����������" << weight << "�" << endl;
}
int main()
{
	Pig tsn;
	tsn.eat();
	return 0;
}