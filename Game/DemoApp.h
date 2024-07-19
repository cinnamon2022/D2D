#pragma once
#include"../D2D0610/pch.h"
#include "../D2D0610/GameApp.h"
#include "../D2D0610/BitmapScene.h"
#include "../D2D0610/AnimationScene.h"
#include "../D2D0610/World.h"
#include <vector>
class DemoApp : public GameApp
{
public:
	DemoApp() {}
	virtual ~DemoApp() {}


	virtual BOOL Initialize(HINSTANCE hInstance, int nCmdShow);

	virtual void Update(float fTimeElapsed) override;
	virtual void Render(ID2D1RenderTarget* pRenderTarget) override;

	AnimationScene midnight;

	World* pWorld = nullptr;

};

