#include "Application.h"

extern Application* createApplication();

int main() {

    auto app = createApplication();
    app->run();
    delete app;

    return 0;
}