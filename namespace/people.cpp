#include "people.h"


namespace jitae
{
    int _noise = 1;
    int _mouse = 1;

    int weight()
    {
	return 70;
    }

    int noise()
    {
	return jitae::_noise;
    }

    int mouse()
    {
	return jitae::_mouse;
    }

    int cin_noise(int arg)
    {
	jitae::_noise = arg;

	return 0;
    }

    int cin_mouse(int arg)
    {
	jitae::_mouse = arg;

	return 0;
    }
}

namespace hyojin
{
    int _noise = 2;
    int _mouse = 3;

    int weight()
    {
	return 55;
    }

    int noise()
    {
	return hyojin::_noise;
    }

    int mouse()
    {
	return hyojin::_mouse;
    }
}
