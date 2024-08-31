#include <iostream>
#include <raylib.h>

using namespace std;

Color green = {173, 204, 96, 255};
Color darkGreen = {43, 51, 24, 255};

int cellSize = 30;
int cellCount = 25;

class Food
{
public:
    Vector2 position;

    Food()
    {
        position = generateRandomPos();
    };

    void Draw()
    {
        DrawRectangle(position.x * cellSize, position.y * cellSize, cellSize, cellSize, RED);
    };

    void generateRandomPosition() {};

    Vector2 generateRandomPos()
    {
        float x = GetRandomValue(0, cellCount - 1);
        float y = GetRandomValue(0, cellCount - 1);
        return Vector2{x, y};
    }
};

int main()
{

    InitWindow(cellSize * cellCount, cellSize * cellCount, "Retro snake");
    SetTargetFPS(60);

    Food food = Food();

    while (WindowShouldClose() == false)
    {
        BeginDrawing();

        ClearBackground(green);

        food.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
