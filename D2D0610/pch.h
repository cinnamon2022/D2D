#pragma once
#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.

#include <d2d1.h>
#include <d2d1_1.h>
#include <d2d1_1helper.h>
#include <dwrite.h>
#include <wincodec.h>
#include <comdef.h>
#include <d2d1helper.h>
#include <unordered_map>
#include <string>
#include <vector>
#include <assert.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <dxgi1_4.h>

enum class Color
{
	RED = D2D1::ColorF::Red,
	BLACK = D2D1::ColorF::Black,
	WHITE = D2D1::ColorF::White
};
