#include <iostream>
#include "people.h"

using namespace std;

int main()
{
    cout << "Welcome CPP PROGRAMMING !!\n";

    cout << "Jitae Weight : " << jitae::weight() << "\r\n";
    cout << "Jitae Noise : " << jitae::noise() << "\r\n";
    cout << "Jitae Mouse : " << jitae::mouse() << "\r\n";
    cout << "Hyojin Weight : " << hyojin::weight() << "\r\n";
    cout << "Hyojin Noise : " << hyojin::noise() << "\r\n";
    cout << "Hyojin Mouse : " << hyojin::mouse() << "\r\n";

    cout << "지태의 Noise, Mouse를 순서대로 입력하세요\r\n";
    int arg1, arg2 = 0;
    cin >> arg1;
    cin >> arg2;
    
    cout << "지태의 Noise, Mouse를 입력중이 입니다 ...\r\n";
    jitae::cin_noise(arg1);
    jitae::cin_mouse(arg2);

    cout << "Jitae Weight : " << jitae::weight() << "\r\n";
    cout << "Jitae Noise : " << jitae::noise() << "\r\n";
    cout << "Jitae Mouse : " << jitae::mouse() << "\r\n";

    return 0;
}
