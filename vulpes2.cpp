#include <iostream>
using namespace std;
//итеративный подход
int fibonacci(int n) {
if (n <= 1) {
return n;
} else {
int prev = 0;
int current = 1;
for (int i = 2; i <= n; ++i) {
int temp = current;
current = prev + current;
prev = temp;
}
return current;
}
}

int main() {
int n;
cin >> n;
cout << fibonacci(n) << endl;
return 0;
}