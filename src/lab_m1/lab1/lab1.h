#pragma once

#include "components/simple_scene.h"


namespace m1
{
    class Lab1 : public gfxc::SimpleScene   // clasa Lab1 mosteneste din gfx::SimpleScene
    {
     public:
        Lab1();
        ~Lab1();

        void Init() override;

     private:
        void FrameStart() override;
        void Update(float deltaTimeSeconds) override;
        void FrameEnd() override;

        void OnInputUpdate(float deltaTime, int mods) override;
        void OnKeyPress(int key, int mods) override;
        void OnKeyRelease(int key, int mods) override;
        void OnMouseMove(int mouseX, int mouseY, int deltaX, int deltaY) override;
        void OnMouseBtnPress(int mouseX, int mouseY, int button, int mods) override;
        void OnMouseBtnRelease(int mouseX, int mouseY, int button, int mods) override;
        void OnMouseScroll(int mouseX, int mouseY, int offsetX, int offsetY) override;
        void OnWindowResize(int width, int height) override;

        // TODO(student): Class variables go here
        glm::vec3 clearColor;
        int colorState;

        std::vector<std::string> meshNames;
        int currentMesh;

        glm::vec3 mainObjPos;
        float speed;

        glm::vec3 spherePos;
        float oscCenterY;                   // oscilation center on Y axis
        float amplitude;
        float freq;
        float totalTime;
    };
}   // namespace m1
