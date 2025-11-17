#include <iostream>
#include <ctime>

using namespace std;

int main(void) {
    struct tm *t;
    time_t timer;
    timer = time(NULL);

    const long KST_OFFSET = 9 * 3600;
    timer += KST_OFFSET;

    t = gmtime(&timer);

    cout << t->tm_year + 1900 << "-";
    cout.width(2);
    cout.fill('0');
    cout << t->tm_mon + 1 << "-";
    cout.width(2);
    cout.fill('0');
    cout << t->tm_mday;
    
    return 0;
}