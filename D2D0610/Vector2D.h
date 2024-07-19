class Vector2D
{
public:
	Vector2D(float x, float y) : x(x), y(y) {}
	float x, y;

	Vector2D operator * (float f)
	{
		return Vector2D{ x * f, y * f };
	}

	Vector2D operator * (Vector2D other)
	{
		return Vector2D{ x * other.x, y * other.y };
	}
	Vector2D operator - (Vector2D other)
	{
		return Vector2D{ x - other.x, y - other.y };
	}
	Vector2D operator + (Vector2D other)
	{
		return Vector2D{ x + other.x, y + other.y };
	}
	bool operator == (Vector2D other)
	{
		return (x == other.x && y == other.y);
	}
	static float Distance2(Vector2D a, Vector2D b)
	{
		return pow(a.x - b.x, 2) + pow(a.y - b.y, 2);
	}
	Vector2D Normalize()
	{
		float length = sqrt(pow(x, 2) + pow(y, 2));
		if (length == 0.f)
			return Vector2D{ x, y };
		return Vector2D({ x / length, y / length });
	}
};