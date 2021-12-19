
/*
	H file for host applications entry point main(_void) to be specific.
*/

#ifdef ESK_WINDOWS_PLATFORM

#ifndef HOST_ENTRY_POINT_H

#define HOST_ENTRY_POINT_H

extern Esk::Application* Esk::createApplication();

int main(int argc, char** argv) {

	Esk::Application* application = Esk::createApplication();
	
	application->run();
	
	delete application;

	return 0;

}

#endif

#endif
