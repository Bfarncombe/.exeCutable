#include <stdio.h>
#include <windows.h>
#define MAXNAME 20

int main(void)
{
    int response;
    printf("Hello\n");
    printf("Would you like to do? \n1) Browse the internet \n2) Listen to music \n3) Code \n");
    scanf("%d", &response);
    switch (response)
    {
    case 1:
        printf("Opening FireFox");
        system("\"C:\\Program Files\\Mozilla Firefox\\firefox.exe\"");
        break;

    case 2:
        printf("Opening Spotify");
        system("\"C:\\Users\\Brandon\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Spotify.lnk\"");
        break;

    case 3:
        printf("Opening VSCode");
        system("\"C:\\Users\\Brandon\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Visual Studio Code\\Visual Studio Code.lnk\"");
        break;

    default:
        break;
    }
}
