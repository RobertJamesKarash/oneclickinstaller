//Custom Developed By Robert James Karash
//OneClickInstaller (1ClickInstaller)
//White Hacker in C/DOS/BASH
//First Open Source Release (This is the only software that is legal)
//FOR WINDOWS
	//Use Visual Studio Community with C/C++ 
	//https://visualstudio.microsoft.com/vs/features/cplusplus/ 
	//Download The 7zip and wget Files and put them in the directory with the sln file and in the debug/release
	//Option: Check box to place project/solution in same folder
	//WGET: https://eternallybored.org/misc/wget/
	//7ZIP: https://www.7-zip.org/download.html
	//Get The x86 / x64 - 7-Zip Extra: standalone console version, 7z DLL, Plugin for Far Manager
	//Put all files in the same directory or use another direct with double backslashes to escape 
	//cd Directory\\Another-Directory\\ & COMMAND-HERE &&
	//ANOTHER-COMMAND
//FOR LINUX (Example for Ubuntu)
	//GCC should also work
	//sudo apt-get install g++ && sudo apt-get install p7zip-full && sudo apt-get install wget
	//g++ oneclickinstaller.cpp
	//./a.out
	//For 7zip use 
	//sudo add-apt-repository universe
	//sudo apt update
	//sudo apt=get install p7zip-full p7zip-rar
	//7z e file.7z
	//./ProgramFile
	//cd Directory/Another-Directory/ & COMMAND-HERE &&
	//COMMAND-HERE &&
	//ANOTHER-COMMAND &&
	//cd Directory/Another-Directory/; COMMAND-HERE &&
	//Use rm instead of del AND/OR rmdir
	//Research to add parameters
//FOR MAC
	//Reference and Hack using Linux
#include <cstdlib>
int main()
{
	system("echo One Click Installer &&"
		"echo Downloading 7zip File... &&"
		"wget DIRECTLINK/7zip-file.7z -q --show-progress &&"
		"echo Extracting Game Files... &&"
		"7za -aoa e 7zip-File.7z &&"
		"echo Retrieving Prerequisites... &&"
		"echo Downloading Microsoft.NET FrameWork 4.0... &&"
		"wget https://download.microsoft.com/download/1/B/E/1BE39E79-7E39-46A3-96FF-047F95396215/dotNetFx40_Full_setup.exe -q --show-progress &&"
		"echo Running Microsoft.NET FrameWork 4.0... &&"
		"start dotNetFx40_Full_setup.exe &&"
		"wget https://aka.ms/vs/16/release/vc_redist.x64.exe -q --show-progress &&"
		"echo Running Microsoft C++ Redistributable x64... &&"
		"start vc_redist.x64.exe &&"
		"echo Downloading C++ Redistributable x86... &&"
		"wget https://aka.ms/vs/16/release/vc_redist.x86.exe -q --show-progress &&"
		"echo Running C++ Redistributable x86... &&"
		"start vc_redist.x86.exe &&"
		"echo Downloading Microsoft Directx 9.0... &&"
		"wget https://download.microsoft.com/download/8/4/A/84A35BF1-DAFE-4AE8-82AF-AD2AE20B6B14/directx_Jun2010_redist.exe -q --show-progress &&"
		"echo Running Microsoft Directx 9.0..."
		"start directx_Jun2010_redist.exe &&"
		"echo Deleting Installation Files... &&"
		"del /q /f \"7zip-File.7z\" &&"
		"del /q /f \"dotNetFx40_Full_setup.exe\" &&"
		"del /q /f \"vc_redist.x64.exe\" &&"
		"del /q /f \"vc_redist.x86.exe\" &&"
		"del /q /f \"directx_Jun2010_redist.exe\""
		"rmdir /Q /S nonemptydir &&"
		"echo Installation Complete... &&"
		"echo Launching Game... &&"
		"timeout /t 5 /nobreak &&"
		"start Launcher.exe & exit");
}
