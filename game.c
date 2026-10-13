#include "raylib.h"

int main(void) {
    
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Prueba de Raylib en C");

    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        Vector2 mousePosition = GetMousePosition();

            BeginDrawing();
            ClearBackground(DARKGRAY);
            DrawText("¡Raylib está funcionando correctamente!", 190, 150, 20, LIGHTGRAY);
            DrawText("Mueve el raton sobre la pantalla", 240, 200, 20, RAYWHITE);
            DrawCircleV(mousePosition, 25, RED);

        EndDrawing();
    }
    CloseWindow();

    return 0;
}