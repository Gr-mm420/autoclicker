#include <windows.h>
#include <stdio.h>
#include <stdbool.h>
void print_help(){
    printf("Program accepts 1 natural number as an optional parameter.\n This parameter represents how many clicks per second user wants perform (default value is 1)\n Example uses in Powershell:\n ./autoclicker.exe \n ./autoclicker.exe 5  \n ./autoclicker.exe -h\n in Command prompt: \n start autoclicker.exe \n start autoclicker.exe 5");
    exit(0);
}
int check_program_parameters(int argc, char *argv[]){
    if (argc == 1){
        return 1;
    }
    else if (argc == 2){
        if(!strcmp(argv[1],"-h"))
            print_help();
        char **ptr = NULL;
        long arg = strtol(argv[1], ptr,10);
        if(ptr != NULL){
            fprintf(stderr,"please enter a natural number");
            exit(2);
        }
        return arg;
    }
    else{
        fprintf(stderr, "Program accepts only 1, optional character");
        exit(2);
    }
}
int main(int argc, char *argv[]) {
    int clicks_per_second = check_program_parameters(argc,argv);

    float delay = 1000 / clicks_per_second; // Delay in milliseconds (1000ms = 1 second)
    bool clicking = false;

    printf("Auto Clicker is running. Press 'F6' to start/stop. Press 'F5' to exit the program. Run with -h for help.\n");

    while (true) {
        if (GetAsyncKeyState(VK_F6) & 1) {
            clicking = !clicking;
        }
        if(GetAsyncKeyState(VK_F5) & 1){
            exit(0);
        }

        if (clicking) {
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        }

        Sleep(delay);
    }
}
