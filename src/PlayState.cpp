#include "PlayState.hpp"

PlayState::PlayState(StateManager *manager)
{
	this->manager = manager;
}


PlayState::~PlayState()
{

}

void PlayState::processEvents()
{
	sf::Event event;
	while (this->manager->window.pollEvent(event))
	{
		switch (event.type)
		{
			case sf::Event::KeyPressed:
				if (event.key.code == sf::Keyboard::Escape)
					this->manager->window.close();
				break;
			case sf::Event::Closed:
				this->manager->window.close();
				break;
		}
	}
}

void PlayState::update(float delta)
{

}

void PlayState::draw(float delta)
{

}

void PlayState::handlePlayerInput()
{

}
