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
	cout << "小猪的名字叫" << name << "。" << endl;
	return name;
}
double Pig::getWeight() {
	cout << "小猪现在" << weight << "斤了。" << endl;
	return weight;
}
void Pig::eat(double f = 1) {
	weight += f;
	cout << "小猪吃了" << f << "斤东西。" << endl;
	getWeight();
}
Pig::Pig() {
	weight = 100;
	name = "小肥猪";
	cout << "一只新的小猪出生了，他叫" << name << "，他出生就" << weight << "斤。" << endl;
}
int main()
{
	Pig tsn;
	tsn.eat();
	return 0;
}