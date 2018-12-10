// Caiden Plummer 

#include <iomanip>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class boxClass
{
private:
	double length;
	double width;
	double height;

public:
	boxClass();
	boxClass(double len, double wid, double hei);
	void printem(ofstream &outf);
	int getLen();
	int getWid();
	int getHei();
	void setLen(double len);
	void setWid(double wid);
	void setHei(double hei);
	double getVolIn();
	double getVolFt();
	double getSurArIn();
	double getSurArFt();
};

void main()
{
	boxClass box1, box2(4, 10.25, 2.450);
	ofstream outf("project8.ot");
	box1.printem(outf);
	box2.printem(outf);
	//B
	box1.setLen(13.0);
	box1.setWid(9.0);
	box1.setHei(1.5);
	box1.printem(outf);
	//C
	outf << "Volume of Box1 in in3 = " << box1.getVolIn() << endl
		<< "Volume of Box2 in in3 = " << box2.getVolIn() << endl
		<< endl;
	//D
	outf << "Volume of box1 in ft3 = " << box1.getVolFt() << endl
		<< "Volume of box2 in ft3 = " << box2.getVolFt() << endl
		<< endl;
	//E
	outf << "Surface Area of Box1 in in2 = " << box1.getSurArIn() << endl
		<< "Surface Area of Box2 in in2 = " << box2.getSurArIn() << endl
		<< endl;
	//F
	outf << "Surface Area of Box1 in ft2 = " << box1.getSurArFt() << endl
		<< "Surface Area of Box2 in ft2 = " << box2.getSurArFt() << endl
		<< endl;
	//G
	outf << "You Will Need  " << box1.getSurArFt() + box2.getSurArFt()
		<< " Square Feet of Wrapping Paper" << endl;

	//H
	outf << "You Will Have  " << box1.getVolFt() + box2.getVolFt()
		<< " Cubic Feet of Fudge" << endl;
}

boxClass::boxClass()
{
	length = 0;
	width = 0;
	height = 0;
}

boxClass::boxClass(double len, double wid, double hei)
{
	length = len;
	width = wid;
	height = hei;
}

void boxClass::printem(ofstream &outf)
{
	outf << "The Object has the Following Dimensions:" << endl<<  "length = "
		<< length << " inches" << endl << "width = " << width << " inches" 
		<< endl << "heigth = " << height << " inches" << endl << endl;
}


int boxClass::getLen()
{
	return length;
}

int boxClass::getWid()
{
	return width;
}

int boxClass::getHei()
{
	return height;
}

void boxClass::setLen(double len)
{
	length = len;
}

void boxClass::setWid(double wid)
{
	width = wid;
}

void boxClass::setHei(double hei)
{
	height = hei;
}

double boxClass::getVolIn()
{
	double volumeIn;
	volumeIn = length * width * height;
	return volumeIn;
}

double boxClass::getVolFt()
{
	double lengthFt, widthFt, heightFt, volumeFt;
	volumeFt = length * width * height / 1728;
	return volumeFt;
}

double boxClass::getSurArIn()
{
	double surArIn;
	surArIn = (2 * length * width) + (2 * length * height) + (2 * height * width);
	return surArIn;
}

double boxClass::getSurArFt()
{
	double surArFt;
	surArFt = ((2 * length * width) + (2 * length * height) + (2 * height * width)) * .0069;
	return surArFt;
}





