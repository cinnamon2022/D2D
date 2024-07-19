#include "pch.h"
#include "Movement.h"
#include "GameObject.h"
#include "TimeManager.h"
#include "Vector2D.h"

void Movement::Init()
{
}

void Movement::Update()
{
	m_pOwner->_location.x += _direction.x * _speed * TimeManager::GetInstance()->GetDeltaTime();
	m_pOwner->_location.y += _direction.y * _speed * TimeManager::GetInstance()->GetDeltaTime();
}

void Movement::Render()
{
}
