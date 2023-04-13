#pragma once
#include <string>

class GameEngine
{
public:
	GameEngine();
	virtual ~GameEngine();

	virtual void Init();
	virtual void Load(std::string FileName);
	void Run();
	void Stop();

	inline class UWorld* GetWorld() const { return World; }

protected:
	void Input();
	void Tick();
	void Render();

	bool blsRunning = true;

	class UWorld* World;
};

