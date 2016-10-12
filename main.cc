#include "homes.h"
#include <list>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int menu();

int main() {
	list<Homes*> homes;
	Homes *tmp;
	int choice;
	list<Homes*>::iterator it;
	ifstream ins;
	ofstream outs;
	string type;

	ins.open("Info.txt");
	if (ins.fail()) {
		cout << "Error opening the file." << endl;
		exit(1);
	}
	ins >> type;
	while (!ins.eof()) {
		if (type == "Chicken") {
			tmp = new Chicken;
			tmp->input(ins);
			homes.push_back(tmp);
		}
		else if (type == "Duck") {
			tmp = new Duck;
			tmp->input(ins);
			homes.push_back(tmp);
		}
		else if (type == "Goose") {
			tmp = new Goose;
			tmp->input(ins);
			homes.push_back(tmp);
		}
		else if (type == "Dog") {
			tmp = new Dog;
			tmp->input(ins);
			homes.push_back(tmp);
		}
		else if (type == "Cat") {
			tmp = new Cat;
			tmp->input(ins);
			homes.push_back(tmp);
		}
		ins >> type;
	}
	ins.close();

	choice = menu();
	while (choice != 7) {
		if (choice == 1) {
			tmp = new Chicken;
			tmp->input(cin);
			homes.push_back(tmp);
		}
		else if (choice == 2) {
			tmp = new Duck;
			tmp->input(cin);
			homes.push_back(tmp);
		}
		else if (choice == 3) {
			tmp = new Goose;
			tmp->input(cin);
			homes.push_back(tmp);
		}
		else if (choice == 4) {
			tmp = new Dog;
			tmp->input(cin);
			homes.push_back(tmp);
		}
		else if (choice == 5) {
			tmp = new Cat;
			tmp->input(cin);
			homes.push_back(tmp);
		}
		else if (choice == 6) {
			it = homes.begin();
			while (it != homes.end()) {
				(*it)->output(cout);
				++it;
			}
		}
		choice = menu();
	}

	outs.open("Info.txt");
	if (outs.fail()) {
		cout << "Error writing to the file." << endl;
		exit(1);
	}
	it = homes.begin();
	while (it != homes.end()) {
		(*it)->output(outs);
		++it;
	}
	outs.close();

	return 0;

}

int menu() {
	int num;
	cout << "1-Chicken" << endl;
	cout << "2-Duck" << endl;
	cout << "3-Goose" << endl;
	cout << "4-Dog" << endl;
	cout << "5-Cat" << endl;
	cout << "6-See all the homes" << endl;
	cout << "7-Quit" << endl;
	cin >> num;
	return num;
}