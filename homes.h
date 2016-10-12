#include <string>
#include <cmath>
#include <iostream>

class Homes {
public:
	Homes(double cost = 0, double c = 0, std::string m = "")
	{
		cost_per_cubic_meter = cost; color = c; material = m;
	}
	double cost()
	{
		return cost_per_cubic_meter * volume();
	}
	virtual double volume() = 0;
	virtual void input(std::istream &ins);
	virtual void output(std::ostream &outs);

private:
	double cost_per_cubic_meter;
	std::string color;
	std::string material;
};

class Chicken : public Homes {
public:
	Chicken(double h = 0, double w = 0, double l = 0)
	{
		height= h; width = w; length = l; 
	}
	double volume()
	{
		return height * width * length;
	}
	void input(std::istream &ins);
	void output(std::ostream &outs);

private:
	double height, width, length;
};

class Duck : public Homes {
public:
	Duck(double h = 0, double w = 0, double l = 0, bool w_w = false)
	{
		height = h; width = w; length = l; warm_water = w_w;
	}
	double volume()
	{
		return height * width * length;
	}
	void input(std::istream &ins);
	void output(std::ostream &outs);

private:
	double height, width, length;
	bool warm_water;
};

class Goose : public Homes {
public:
	Goose(double r = 0, double h = 0, bool w_w = false)
	{
		radius = r; height = h; warm_water = w_w;
	}
	double volume()
	{
		return 3.14 * radius * radius * height;
	}
	void input(std::istream &ins);
	void output(std::ostream &outs);

private:
	double radius, height;
	bool warm_water;
};

class Dog : public Homes {
public:
	Dog(double h = 0, double w = 0, double l = 0, int q_h = 0, bool n_s = false)
	{
		height = h; width = w; length = l; quantity_homes = q_h; need_swings = n_s;
	}
	double volume()
	{
		return height * width * length * quantity_homes;
	}
	void input(std::istream &ins);
	void output(std::ostream &outs);

private:
	double height, width, length;
	int quantity_homes;
	bool need_swings;
};

class Cat : public Homes {
public:
	Cat(double r = 0, double h = 0, int q_h = 0, bool n_s = false)
	{
		radius = r; height = h; quantity_homes = q_h; need_sand = n_s;
	}
	double volume()
	{
		return 3.14 * radius * radius * height * quantity_homes;
	}
	void input(std::istream &ins);
	void output(std::ostream &outs);

private:
	double radius, height;
	int quantity_homes;
	bool need_sand;
};
