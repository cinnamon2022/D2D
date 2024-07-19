#include "pch.h"
#include "BitmapScene.h"
#include "D2DRenderer.h"

BitmapScene::BitmapScene()
{
}

BitmapScene::~BitmapScene()
{
	if (m_pBitmap)
	{
		m_pBitmap->Release();
		m_pBitmap = nullptr;
	}
}
bool BitmapScene::Load(const std::wstring& strFileName)
{
	D2DRenderer::Get()->CreateD2DBitmapFromFile(strFileName.c_str(), &m_pBitmap);
	D2D1_SIZE_F size = m_pBitmap->GetSize();
	m_RelativeCenter = { size.width / 2, size.height / 2 };
	return true;
}

void BitmapScene::Update(float fTimeElapsed)
{
	UpdateTransform();
}

void BitmapScene::Render(ID2D1HwndRenderTarget* pRenderTarget)
{
	assert(m_pBitmap != nullptr);
	D2D_MATRIX_3X2_F transform = D2D1::Matrix3x2F::Translation(-m_RelativeCenter.x, -m_RelativeCenter.y) * m_WorldTransform;

	pRenderTarget->SetTransform(transform);
	pRenderTarget->DrawBitmap(m_pBitmap);
}
