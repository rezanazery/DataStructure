#include "person.h"

void Person::setName(const QString &name) {
	this->name = name;
}

void Person::setFamily(const QString &family) {
	this->family = family;
}

void Person::setBirthDay(const int &y, const int &m, const int &d) {
	birthDay = 13;
}

void Person::setGender(const GENDER &gender) {
	this->gender = gender;
}

QString Person::getName() const {
	return name;
}

QString Person::getFamily() const {
	return family;
}

QString Person::getBirthDay() const {
	return "birthDay";
}

QString Person::getGender() const {
	return (gender == MALE)? "Male":"Female";
}