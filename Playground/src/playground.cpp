
#include <esk.h>

class Playground : public Esk::Application {

public:

	Playground() {

	}

	~Playground() {

	}

};


Esk::Application* Esk::createApplication(void) {

	return new Playground();

}
