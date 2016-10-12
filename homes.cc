#include "homes.h"

using namespace std;

void Homes::input(istream &ins) {
	if (ins == cin)
		cout << "Enter cost per cubic meter: ";
	ins >> cost_per_cubic_meter;
	if (ins == cin)
		cout << "Enter the color: ";
	ins >> color;
	if (ins == cin)
		cout << "Enter the material: ";
	ins >> material;
}

void Homes::output(ostream &outs) {
	if (outs == cout)
		outs << "Cost per cubic meter: " << cost_per_cubic_meter << endl;
	if (outs == cout)
		outs << "Color: " << color << endl;
	if (outs == cout)
		outs << "Material: " << material << endl;
}

void Chicken::input(istream &ins) {
	Homes::input(ins);
	if (ins == cin)
		cout << "Enter the height:";
	ins >> height;
	if (ins == cin)
		cout << "Enter the width:";
	ins >> width;
	if (ins == cin)
		cout << "Enter the length:";
	ins >> length;
}

void Chicken::output(ostream &outs) {
	outs << "Chicken\n";
	Homes::output(outs);
	if (outs == cout)
		outs << "Height: " << height << endl;
	if (outs == cout)
		outs << "Width: " << width << endl;
	if (outs == cout)
		outs << "length: " << length << endl;
	if (outs == cout) {
		outs << "Cost: " << cost() << endl << endl;
	}
}

void Duck::input(istream &ins) {
	char c;
	Homes::input(ins);
	if (ins == cin)
		cout << "Enter the height:";
	ins >> height;
	if (ins == cin)
		cout << "Enter the width:";
	ins >> width;
	if (ins == cin)
		cout << "Enter the length:";
	ins >> length;

	if (ins == cin) {
		do {
			cout << "Need warm water? Y/N:";
			ins >> c;
			if (c == 'Y' || c == 'y')
				warm_water = true;
			else if (c == 'N' || c == 'n')
				warm_water = false;
		} while (!(c == 'Y' || c == 'y' || c == 'N' || c == 'n'));
	}
	else {
		ins >> warm_water;
	}
}

void Duck::output(ostream &outs) {
	outs << "Duck\n";
	Homes::output(outs);
	if (outs == cout)
		outs << "Height: " << height << endl;
	if (outs == cout)
		outs << "Width: " << width << endl;
	if (outs == cout)
		outs << "length: " << length << endl;
	if (outs == cout) {
		outs << "Need warm water? " << boolalpha << warm_water << endl;
	}
	else {
		outs << warm_water << endl;
	}
	if (outs == cout) {
		outs << "Cost: " << cost() << endl << endl;
	}
}

void Goose::input(istream &ins) {
	char c;
	Homes::input(ins);
	if (ins == cin)
		cout << "Enter the radius:";
	ins >> radius;
	if (ins == cin)
		cout << "Enter the height:";
	ins >> height;
	if (ins == cin) {
		do {
			cout << "Need warm water? Y/N:";
			ins >> c;
			if (c == 'Y' || c == 'y')
				warm_water = true;
			else if (c == 'N' || c == 'n')
				warm_water = false;
		} while (!(c == 'Y' || c == 'y' || c == 'N' || c == 'n'));
	}
	else {
		ins >> warm_water;
	}
}

void Goose::output(ostream &outs) {
	outs << "Goose\n";
	Homes::output(outs);
	if (outs == cout)
		outs << "Radius: " << radius << endl;
	if (outs == cout)
		outs << "Height: " << height << endl;
	if (outs == cout) {
		outs << "Need warm water? " << boolalpha << warm_water << endl;
	}
	else {
		outs << warm_water << endl;
	}
	if (outs == cout) {
		outs << "Cost: " << cost() << endl << endl;
	}
}

void Dog::input(istream &ins) {
	char c;
	Homes::input(ins);
	if (ins == cin)
		cout << "Enter the height:";
	ins >> height;
	if (ins == cin)
		cout << "Enter the width:";
	ins >> width;
	if (ins == cin)
		cout << "Enter the length:";
	ins >> length;
	if (ins == cin)
		cout << "Enter the quantity of homes:";
	ins >> quantity_homes;

	if (ins == cin) {
		do {
			cout << "Need swings? Y/N:";
			ins >> c;
			if (c == 'Y' || c == 'y')
				need_swings = true;
			else if (c == 'N' || c == 'n')
				need_swings = false;
		} while (!(c == 'Y' || c == 'y' || c == 'N' || c == 'n'));
	}
	else {
		ins >> need_swings;
	}
}

void Dog::output(ostream &outs) {
	outs << "Dog\n";
	Homes::output(outs);
	if (outs == cout)
		outs << "Height: " << height << endl;
	if (outs == cout)
		outs << "Width: " << width << endl;
	if (outs == cout)
		outs << "Length: " << length << endl;
	if (outs == cout)
		outs << "Quantity of homes: " << quantity_homes << endl;
	if (outs == cout) {
		outs << "Need swings? " << boolalpha << need_swings << endl;
	}
	else {
		outs << need_swings << endl;
	}
	if (outs == cout) {
		outs << "Cost: " << cost() << endl << endl;
	}
}

void Cat::input(istream &ins) {
	char c;
	Homes::input(ins);
	if (ins == cin)
		cout << "Enter the radius:";
	ins >> radius;
	if (ins == cin)
		cout << "Enter the height:";
	ins >> height;
	if (ins == cin)
		cout << "Enter the quantity of homes:";
	ins >> quantity_homes;
	if (ins == cin) {
		do {
			cout << "Need sand? Y/N:";
			ins >> c;
			if (c == 'Y' || c == 'y')
				need_sand = true;
			else if (c == 'N' || c == 'n')
				need_sand = false;
		} while (!(c == 'Y' || c == 'y' || c == 'N' || c == 'n'));
	}
	else {
		ins >> need_sand;
	}
}

void Cat::output(ostream &outs) {
	outs << "Cat\n";
	Homes::output(outs);
	if (outs == cout)
		outs << "Radius: " << radius << endl;
	if (outs == cout)
		outs << "Height: " << height << endl;
	if (outs == cout)
		outs << "Quantity of homes: " << quantity_homes << endl;
	if (outs == cout) {
		outs << "Need sand? " << boolalpha << need_sand << endl;
	}
	else {
		outs << need_sand << endl;
	}
	if (outs == cout) {
		outs << "Cost: " << cost() << endl << endl;
	}
}











