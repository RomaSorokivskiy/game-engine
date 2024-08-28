
#include <GameEngine.h>


class SandBox : public GameEngine::Application {
public:
	SandBox() {

	}
	~SandBox() {

	}
};

GameEngine::Application* GameEngine::CreateApplication() {
	return new SandBox();
}