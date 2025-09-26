//
//  main.cpp
//  CPC
//
//  Created by Omar Nouh on 2/20/25.
//

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
/*    std::cout << "Hello, World!\n";
    int i = 0;
    long l = 0;
    char ch = 'a';
    float f = 0.0;
    double d = 0.0;
    std::cout << "Enter an integer, a long integer, a character, a float, and a double: \n";
    scanf("%d %ld %c %f %lf", &i, &l, &ch, &f, &d);
    printf("%d\n%ld\n%c\n%0.3f\n%0.9lf\n", i, l, ch, f, d); */
/*    double a, b, c;
    cin >> a >> b >> c;
    cout << a+b+c; */
/*    long long n, m, a, l, w, numFlagstones;
    cin >> n >> m >> a;
    l = ((n + a - 1)/a);
    w = ((m + a - 1)/a);
    numFlagstones = l * w;
    cout << numFlagstones; */
/*    int x;
    cin >> x;
    if ( (x % 2) || (x <= 2) ) {
        cout << "NO";
    } else {
        cout << "YES";
    } */
/*     long long M, N, a = 2, numDominos;
     cin >> M >> N;
     numDominos = (M * N)/a;
     cout << numDominos << endl; */
/*	int w,z;
	cin >> w;
    z = w % 100;
    cout << setfill('0') << setw(2) << z << endl; */
/*    int timeHours = 21,  timeMinutes = 00, K;
    cin >> K;
    timeHours += (K/60);
    timeMinutes += (K%60);
    cout << setfill('0') << setw(2) << timeHours << ":" << setfill('0') << setw(2) << timeMinutes << endl; */
/*    int t, s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> s;
        if (s >= 1900) {
            cout << "Division 1" << endl;
        } else if (s >= 1600) {
            cout << "Division 2" << endl;
        } else if (s >= 1400) {
            cout << "Division 3" << endl;
        } else {
            cout << "Division 4" << endl;
        }
    } */
/*    int a, b, years = 0;
    cin >> a >> b;
    do {
        a *= 3;
        b *= 2;
        years++;
    } while (a <= b);
    cout << years << endl; */    
/*    int loop, size, value;
    cin >> loop;
    for (int k = 0; k < loop; k++) {
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++) {
            cin >> value;
            arr[i] = value;
        }
        int* min = min_element(arr, arr+size);
        int sum = 1;
        for (int i = 0; i < size; i++) {
            if (arr[i] == *min) {
                arr[i]++;
                break;
            }
        }
        for (int i = 0; i < size; i++) {
            sum *= arr[i];
        }
        cout << sum << endl;
    } */
    
    

    
    return 0;
}
