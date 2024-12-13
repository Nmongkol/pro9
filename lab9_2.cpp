#include <iostream>
using namespace std;

void printO(int N, int M) {
    // ตรวจสอบค่า N และ M ว่ามากกว่าศูนย์หรือไม่
    if (N <= 0 || M <= 0) {
        cout << "Invalid input" << endl;
        return;
    }

    // ใช้ for loop 2 ชั้นในการพิมพ์ตัว O
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "O";
        }
        cout << endl; // พิมพ์บรรทัดใหม่หลังจากพิมพ์ M ตัว O เสร็จ
    }
}