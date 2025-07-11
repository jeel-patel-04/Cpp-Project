#include<bits/stdc++.h>
#include<windows.h>

using namespace std;

int main() {
    while (true) {
        auto now = chrono::system_clock::now();
        time_t currentTime = chrono::system_clock::to_time_t(now);

        tm* localTime = localtime(&currentTime);
        
        system("cls");
        
        cout << put_time(localTime, "%H:%M:%S") << endl;

        
        Sleep(1000);  // Sleep for 1000 milliseconds (1 second)
    }

    return 0;
}
