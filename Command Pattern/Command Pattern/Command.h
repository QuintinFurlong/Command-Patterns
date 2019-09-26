#pragma once
#include <iostream>
#include <string>
using namespace std;

class Command
{
public:
	virtual ~Command() {}
	virtual void execute() = 0;
	virtual void undo() { cout << "\b" << " " << "\b";}
	virtual void addString(string* t_word) { m_word = t_word; }
protected:
	Command() {}
	string* m_word;
};

class QCommand : public Command
{
public:
	virtual void execute() { *m_word += 'q'; }
};
class WCommand : public Command
{
public:
	virtual void execute() { *m_word += 'w'; }
};
class ECommand : public Command
{
public:
	virtual void execute() { *m_word += 'e'; }
};
class RCommand : public Command
{
public:
	virtual void execute() { *m_word += 'r'; }
};
class TCommand : public Command
{
public:
	virtual void execute() { *m_word += 't'; }
};
class YCommand : public Command
{
public:
	virtual void execute() { *m_word += 'y'; }
};