#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// 연습문제1 
void solution01(){
    int cnt = 0;
    for(int i = 1; i <= 100; i++){
        cout << i << "\t";
        cnt++;
        if(cnt == 10){
            cout << endl;
            cnt = 0;
        }
    }
}

// 연습문제2
void solution02(){
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <=9; j++){
            cout << j << "x" << i << "=" << i*j << "\t";
        }
        cout << endl;
    }
}

// 연습문제3
void solution03(){
    int n1, n2;
    cout << "두 수를 입력하라>>";
    cin >> n1 >> n2;
    cout << endl;

    cout << "큰 수 = ";
    n1 > n2 ? cout << n1 : cout << n2;
}

// 연습문제4
void solution04(){
    vector<float> v;
    for(int i = 0; i < 5; i++){
        float temp;
        cin >> temp;
        v.push_back(temp);
    }

    auto max_iter = max_element(v.begin(), v.end()); // 이터레이터 반환
    cout << *max_iter;
}

// 연습문제5
void solution05(){
    int cnt = 0;

    // string, getline() 사용하기
    string str;
    getline(cin, str);

    // c-sring 사용하기
    char cstr[110];
    cin.getline(cstr, 110, '\n');

    
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'x') cnt++;
    }

    cout << cnt;
}

// 연습문제6
void solution06(){
    string str1;
    string str2;

    cin >> str1;
    cin >> str2;

    if(str1 == str2) cout << "같습니다";
    else cout << "같지 않습니다";

}

// 연습문제 7
void solution07(){
    char cmd[100] = "";
    char yes[5] = "yes";

    while(strcmp(cmd, yes) != 0){
        cin.getline(cmd, 100, '\n');
    }
    cout << "종료합니다";
}

// 연습문제 8
void solution08(){
    char str[1000];
    cin.getline(str, 1000, '\n');

    int idx = 1;
    for(int i = 0; i < strlen(str); i++){
        cout << idx << " : ";
        while(1){
            if(';' == str[i]) break;
            cout << str[i++];
        }
        idx++;
        cout << endl;
    }
}

// 연습문제 9
void solution09(){
    string name;
    string address;
    int age;

    getline(cin, name);
    getline(cin, address, '\n');
    cin >> age;

    cout << name << ", " << address << ", " << age << "세";
}

// 연습문제 10
void solution10(){
    string str;
    cin >> str;

    for(int i = 1; i <= str.length(); i++){
        for(int j = 0; j < i; j++){
            cout << str[j];
        }
        cout << endl;
    }
}

// 연습문제 11
void solution11(){
    int k, n;
    int sum = 0;

    cin >> n;
    for(k = 1; k <= n; k++) sum +=k;
    cout << "sum = " << sum;
}

// 연습문제 12
int sum(int a, int b){
    int res = 0;
    for(int k = 0; k <= b; k++) res += k;
    return res;
}
void solution12(){
    int n = 0;
    cin >> n;
    cout << "sum: " << sum(1, n);
}

// 연습문제 13
void solution13(){
    string order_menu = "짬뽕: 1, 짜장: 2, 군만두: 3, 종료:4>> ";
    string order_cnt = "몇인분? ";
    while(1){
        int menu_n, cnt;
        string menu = "재주문";
        cout << order_menu;
        cin >> menu_n;

        if(menu_n == 1) menu = "짬뽕";
        if(menu_n == 2) menu = "짜장";
        if(menu_n == 3) menu = "군만두";
        if(menu_n == 4) menu = "영업종료";

        if(menu == "재주문"){
            cout << menu << endl;
            continue;
        }
        if(menu == "영업종료"){
            cout << menu;
            break;
        }

        cout << order_cnt;
        cin >> cnt;

        cout << menu << " " << cnt <<"인분" << endl;
    }
}

// 연습문제 14
void solution14(){
    int today = 0;      // 오늘 매출
    int close = 20000;  // 영업 종료 조건

    while(today < close){
        string menu;    // 주문 메뉴
        int cnt;        // 주문 개수
        int price = 0;  // 메뉴 가격

        cin >> menu >> cnt;

        if(menu == "에스프레소") price = 2000;
        if(menu == "아메리카노") price = 2300;
        if(menu == "카푸치노") price = 2500;

        cout << (cnt * price) << "원 입니다." << endl;
        today += (cnt * price);
    }

    cout << "오늘 매출은 " << today << "원";
}

// 연습문제 15
void solution15(){
    char c;
    int n1, n2;
    cin >> n1 >> c >> n2;
    
    if(c == '+') cout << n1+n2;
    if(c == '-') cout << n1-n2;
    if(c == '*') cout << n1*n2;
    if(c == '/') cout << n1/n2;
    if(c == '%') cout << n1%n2;
}

// 연습문제 16
void printAsterisk(int n);
void countAlpha(string text, int alphaCnt[]);
void printAlpha(int alphaCnt[]);
    
void solution16(){
    string text;
    int alphaCnt[26] = {0}; // 0 = 'a' , 1 = 'b' ...

    getline(cin, text, ';');

    countAlpha(text, alphaCnt);
    printAlpha(alphaCnt);
}
void printAsterisk(int n){
    for(int i = 0; i < n; i++){
        cout << '*';
    }
    cout << endl;
}

// C++에서는 배열이 자동으로 참조타입 매개변수로 넘어간다
void countAlpha(string text, int alphaCnt[]){
    int allCnt = 0;
    for(int i = 0; i < text.length(); i++){
        if(isspace(text[i])) continue;      //공백이면 넘어가기
        if(!isalpha(text[i])) continue;     //알파벳 아니면 넘어가기

        // 대문자면 소문자로 치환
        if(isupper(text[i])) text[i] = tolower(text[i]); 
        alphaCnt[text[i]-'a']++;
        allCnt++;
    }
}

void printAlpha(int alphaCnt[]){
    for(int i = 0; i < 26; i++){
        cout << (char)('a' + i) << " (" << alphaCnt[i] << ") \t: ";
        printAsterisk(alphaCnt[i]);
    }
}