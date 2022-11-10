#include "Dimensions.h"
#include <iostream>
#include <string.h>
using namespace std;

Dimensions::Dimensions(int width, int height, int thickness, int weight) {
	this->width = width;
	this->height = height;
	this->thickness = thickness;
	this->weight = weight;
}
Dimensions::Dimensions(int weight) {
	this->weight = weight;
}
Dimensions::Dimensions() {

}
Dimensions::~Dimensions() {

}
void Dimensions::read() {
	cout << "������ ���������� � ���������� ��������" << endl;
	cout << "������(��): ";
	cin >> width;
	cout << "������(��): ";
	cin >> height;
	cout << "�������(��): ";
	cin >> thickness;
	cout << "���(� �������): ";
	cin >> weight;
}
void Dimensions::display() {
	cout << endl;
	cout << "���������:" << endl;
	cout << "-������:" << width << endl;;
	cout << "-������:" << height << endl;
	cout << "-�������:" << thickness << endl;
	cout << "-���:" << weight << endl;
}