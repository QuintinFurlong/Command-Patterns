#pragma once
#include <iostream>
using namespace std;

class Command
{
public:
	virtual ~Command() {}
	virtual void execute() = 0;
	virtual void undo() { cout << "\b" << " " << "\b";}
protected:
	Command() {};
};

class QCommand : public Command
{
public:
	virtual void execute() { cout << "q"; }
};
class WCommand : public Command
{
public:
	virtual void execute() { cout << "w"; }
};
class ECommand : public Command
{
public:
	virtual void execute() { cout << "e"; }
};
class RCommand : public Command
{
public:
	virtual void execute() { cout << "r"; }
};
class TCommand : public Command
{
public:
	virtual void execute() { cout << "t"; }
};
class YCommand : public Command
{
public:
	virtual void execute() { cout << "y"; }
};