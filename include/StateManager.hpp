#ifndef STATEMANAGER_HPP
#define STATEMANAGER_HPP

#include <SFML/Graphics/RenderWindow.hpp>



class GameState;

class StateManager
{
public:

	StateManager();
	~StateManager();

	void pushState(GameState * state);
	void popState();
	void changeState(GameState * state);
	GameState* peekState();

	void gameLoop();

public:

	std::stack<GameState*> states;
	sf::RenderWindow window;

};

#endif //STATEMANAGER_HPP
