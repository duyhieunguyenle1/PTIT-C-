#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(int a, int b)
{
    return a > b;	
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    // Copy mảng a sang vector v. Sau đây v = {1, 2, 3, 4, 5, 4, 3, 2, 1}.
    vector < int > v(a, a + 9); 
	
    // a = {1, 1, 2, 2, 3, 3, 4, 4, 5}.
    sort(a, a + 9);
    if (binary_search(a, a + 9, 5))
        cout << binary_search(a, a + 9, 5) << endl;
    else 
        cout << "Không tìm thấy phần tử 5" << endl;
	
    // v = {5, 4, 4, 3, 3, 2, 2, 1, 1}.
    sort(v.begin(), v.end(), comp);
    if (binary_search(a, a + 9, 6, comp))
        cout << "Tìm thấy phần tử 6";
    else 
        cout << "Không tìm thấy phần tử 6";

    return 0;
}