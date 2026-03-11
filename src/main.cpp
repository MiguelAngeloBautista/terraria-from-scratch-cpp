#include <iostream>
#include <raylib.h>
#include <imgui.h>
#include <rlImGui.h>

int main()
{
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(800, 450, "window name");

	rlImGuiSetup(true);

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(WHITE);

		rlImGuiBegin();


		DrawText("Congrats! You created your first window!", 190, 200, 20, RED);

		DrawRectangle(75, 75, 100, 100, { 0, 255, 0, 127 });
		DrawRectangle(50, 50, 100, 100, { 255, 0, 0, 127 });

		DrawCircle(400, 200, 50, { 0, 255, 255, 127 });

		DrawRing({ 400, 200 }, 80, 100, 0, 360, 32, { 255, 0, 255, 127 });

		DrawRectangleGradientEx({ 500, 50, 200, 100 }, { 255, 0, 0, 127 }, { 0, 255, 0, 127 }, { 0, 0, 255, 127 }, { 255, 255, 0, 127 });

		ImGui::ShowDemoWindow();
		
		ImGui::Begin("test");
		ImGui::Text("hello");
		ImGui::Button("button");

		ImGui::End();
		
		rlImGuiEnd();

		EndDrawing();
	}

	rlImGuiShutdown();
	CloseWindow();

	return 0;
}