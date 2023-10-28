# AUTOCLICKER FOR WINDOWS
A C program that automatically performs left mouse clicks. Tested on Windows 11.
##  How it works
 I recommend running it via Command Prompt or Powershell, as by clicking on the exe you will lose the opportunity to specify the frequency of clicking.
## Controls
After running the executable, The clicking is started by pressing F6 key. This key can be again used to pause and resume clicking. You can exit the program by pressing F5, or Ctrl+C in Powershell or Command prompt it is running in.
### Powershell
Example usages:
- `./{PATH_TO_EXECUTABLE}/autoclicker.exe` starts the autoclicker, with default value 1 click per second.
- `./{PATH_TO_EXECUTABLE}/autoclicker.exe 5` starts the autoclicker, doing 5 clicks per second.
- `./{PATH_TO_EXECUTABLE}/autoclicker.exe -h`  prints a help message.
### Command Prompt
Example usages:
- `start autoclicker.exe` starts the autoclicker, with default value 1 click per second.
- `start autoclicker.exe 10` starts the autoclicker, doing 10 clicks per second.
- `start autoclicker.exe -h` prints a help message.