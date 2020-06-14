#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <QString>

using namespace std;

class Person
{
private:
    QString _name;

public:
    Person(QString name) : _name(name) {}
    QString getName() { return _name; }
};

#endif // PERSON_H
