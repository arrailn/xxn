#include <iostream>
using namespace std;
//рекурсивный подход
int fibonacci(int n) {
if (n <= 1) {
return n;
} else {
return fibonacci(n - 1) + fibonacci(n - 2);
}
}

int n;
cin >> n;
cout << fibonacci(n) << endl;
return 0;
}