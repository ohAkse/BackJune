// BackJune.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int nMax = (2 * n) - 1;
    int i = 0;
    int j = 0;
    int nBlank = -1;
    int nCountOfStars = nMax;
    int mid = nMax / 2;
  
    for (i = 0; i <= mid; i++)
    {
        for (j = 0; j < nCountOfStars; j++)
        {
            cout << "*";
        }
        if (nCountOfStars == 1)
        {
            break;
        }
        cout << endl;
        while (i != nBlank)
        {
            cout << " ";
            nBlank++;
        }
        nBlank = -1;
        nCountOfStars -= 2;

    }


    for (i = mid; i > 0; i--)
    {
        cout << endl;

        while (i - 2 != nBlank)//별이 한개일때는 두칸이 증가해야함
        {
            cout << " ";
            nBlank++;
        }
        nBlank = -1;
        nCountOfStars += 2;

        for (j = 0; j < nCountOfStars; j++)
        {
            cout << "*";
        }
    }



}



// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
