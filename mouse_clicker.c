#include<stdio.h>
#include<windows.h>
int main(){
//  printf("Mouse clicker");
DWORD start_time = GetTickCount();
while(GetTickCount() - start_time < 10000) // Run for 10 seconds
{
    // Simulate mouse right-click
    mouse_event(
        MOUSEEVENTF_RIGHTDOWN,
        0, 0, 0, 0
    );
     mouse_event(
        MOUSEEVENTF_RIGHTUP,
        0, 0, 0, 0
    );  
    Sleep(1000); // Wait for 1 second before the next click
}
return 0;
}