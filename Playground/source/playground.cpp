
#include <esk.h>

namespace Esk {

	class Playground : public Application {

	public:

		Playground() {

		}

		~Playground() {

		}

	};


	Application* createApplication(void) {

		return new Playground();

	}

}