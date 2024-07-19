#pragma once
#include "Component.h"

class Movement : public Component
{
public:
	Movement() {}
	virtual ~Movement() {}
	virtual void Init() override;
	virtual void Update() override;
	virtual void Render() override;

	void SetDirection(Vector2D dir) { _direction = dir; }
	void SetSpeed(float speed) { _speed = speed; }

private:
	Vector2D _direction = { 0,0 };
	float _speed = 0.f;
};