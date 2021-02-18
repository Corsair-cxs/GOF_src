#pragma once

class Command;

class Sender
{
public:
	Sender(void);
	~Sender(void);
	void SetCommand(Command *pCommand);
	void SendCommand();

private:
	Command *_pCommand;
};
