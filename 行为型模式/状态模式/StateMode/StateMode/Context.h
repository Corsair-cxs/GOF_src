#pragma once

class State;

class Context
{
public:
	Context(void);
	~Context(void);
	void Request();
	void ChangeState(State *pState);
private:
	State *_pState;
};
