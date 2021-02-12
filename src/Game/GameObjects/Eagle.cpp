#include "Eagle.h"

#include "../../Renderer/Sprite.h"
#include "../../Resource/RecourceManager.h"

Eagle::Eagle(const glm::vec2& position, const glm::vec2& size, const float rotation, const float layer)
	: IGameObject(position, size, rotation, layer)
	, m_sprite{ ResourceManager::getSprite("eagle"),
				ResourceManager::getSprite("eagle_dead") }
	, m_eCurrenrState(EEagleState::Dead)
{ }



void Eagle::render()const
{
	m_sprite[static_cast<size_t>(m_eCurrenrState)]->render(m_position, m_size, m_rotation, m_layer);
}

void Eagle::update(const uint64_t delta)
{

}