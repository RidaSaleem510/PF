#include <iostream>
using namespace std;
int main ()
{
	cout << "GAME MENU"<< endl;
	cout << "-----------" << endl;
	cout << "1. Display options"<< endl;
	cout << "2. Sound options"<< endl;
	cout << "3. Exit" << endl;
	
	int option, disopt, soundopt;
	cout << "Select an option=";
	cin >> option;
	
	switch (option)
	{
		case 1:
			{
			
			cout << "DISPLAY OPTIONS" << endl;
			cout << "----------------" << endl;
			cout << "1. Brightness level" << endl;
			cout << "2. Full Screen Mode" << endl;
			cout << "Select an option=";
			cin >> disopt;
			
			switch (disopt)
			{
				case 1:
					{
						int brightness;
						cout << "select a brightness level(0-100)=";
						cin >> brightness;
						if ((brightness>0)&& (brightness<100))
						{
							cout << "brightness set to" << brightness << "%" << endl;
						}
						else 
						{
							cout << "invalid brightness value";
						}
						
					}
					break;
					
				case 2:
					{
						int fullscreen;
						cout << "For full screen Press 1 otherwise 2=";
						cin >> fullscreen;
						if (fullscreen==1)
						{
							cout << "full screen mode enabled";
						}
						else if (fullscreen ==2) 
						{
							cout << "full screen mode disabled";	
						}
						else
						{
							cout << "invalid number";
						}
						break;
					
				default:
					{
						cout << "invalid display option";
					}
					break;
				}
					
			}
			break;
			
			case 2:
				{
				
				cout << "SOUND OPTIONS" << endl;
				cout << "--------------" << endl;
				cout << "1.Volume" << endl;
				cout << "2.Mute" << endl;
				cout << "select an option=";
				cin >> soundopt;
				
				switch (soundopt)
				{
					case 1:
						{
						
						int vol;
						cout << "Set Volume (0=100)=";
						cin >> vol;
						if ((vol>=0)&&(vol<=100))
						{
							cout << "Volume set to" << vol << "%" << endl;
						}
						else 
						{
							cout << "invalid volume value";
						}
						}
						break;
					
					case 2:
						{
						
						int mute;
						cout << "Select 1 for mute and 2 for unmute=";
						cin >> mute;
						if (mute==1)
						{
							cout << "Sound muted" << endl;
						}
						else if (mute==2)
						{
							cout << "Sound unmuted" << endl;
						}
						else 
						{
							cout << "invalid value"<< endl;
						}
						}
						break;
						
					default:
						{
							cout << "invalid option"<< endl;
						}
						break;
					}
					}
			case 3:
				{
					cout << "Exiting the Menu...." << endl;
				}
				break;
						
						
						
			default:
				{
					cout << "Invalid option. Please select a valid option."<< endl;
				}
				break;
						
						
				}
				}
	}
	

