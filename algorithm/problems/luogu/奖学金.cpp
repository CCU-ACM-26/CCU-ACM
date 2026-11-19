#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Student {
    int number;
    int chinese;
    int total;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<Student> students(n);
    for (int i = 0; i < n; ++i) {
        int chinese, math, english;
        cin >> chinese >> math >> english;
        students[i] = {i + 1, chinese, chinese + math + english};
    }

    sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        if (a.total != b.total)
            return a.total > b.total;
        if (a.chinese != b.chinese)
            return a.chinese > b.chinese;
        return a.number < b.number;
    });

    for (int i = 0; i < 5 && i < n; ++i)
        cout << students[i].number << ' ' << students[i].total << '\n';

    return 0;
}