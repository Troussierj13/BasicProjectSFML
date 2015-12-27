#ifndef MENUSTATE_HPP
#define MENUSTATE_HPP

#include <SFML/Window/Event.hpp>
#include "GameState.hpp"

class PlayState : public GameState
{
public:
	PlayState	(StateManager* manager);
	~PlayState	();

	void	processEvents		();
	void	update			(float delta);
	void	draw				(float delta);
	void	handlePlayerInput		();

private:


};

#endif // MENUSTATE_HPP
