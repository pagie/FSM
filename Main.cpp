#include <iostream>
#include <windows.h>

enum State { Off, On }; // define our states
State Current_State; // create variable to hold which state we are currently on
int Power = 0; // define variable called Power and set its value to 0

int main() { // main application loop

	while (true) { // infinite loop (true is always true)

		switch (Current_State) { // conditional based on Current_State

			case Off: // if current state is: OFF
				std::cout << "Off" << std::endl; // output "OFF"
				Power += 25; // power starts to regenerate
				if (Power >= 100) { // if we have 100 power or more
					Current_State = On; // change it to ON
				}
				break; // exit the switch statement

			case On: // if current state is: ON
				std::cout << "On" << std::endl; // output "ON"
				Power -= 25; // lose power
				if (Power <= 0) { // if we have no power left
					Current_State = Off; // change it to OFF
				}
				break; // exit the switch statement

		}

		std::cout << "Power: " << Power << std::endl; // output value of variable Power    (need #include <iostream> for this)

		Sleep(1000); // wait for 1000 milliseconds    (need #include <windows.h> for this)
		system("cls"); // clear the console window    (need #include <windows.h> for this)

	}

}