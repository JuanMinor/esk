
/*

	Entry point hook for Applications using ESK. This is triggered on import of ESK. Actual main function depends on host Application.

*/

#ifndef APPLICATION_ENTRY_POINT_H

#define  APPLICATION_ENTRY_POINT_H

#include "core/core.h"

namespace Esk {

	class ESK_DLL Application {

	public:

		Application();
		virtual ~Application();

		void run(void);

	};

	Application* createApplication(void);

}

#endif
