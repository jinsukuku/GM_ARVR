#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


// 실습문제1
class ColorRGB{
    int r, g, b;
public:
    ColorRGB() {r = g = b = 0;}
    ColorRGB(int r, int g, int b) {
        this -> r = r; 
        this -> g = g; 
        this -> b = b;
    }
    void setColor(int r, int g, int b){
        this -> r = r; 
        this -> g = g; 
        this -> b = b;
    }
    void show() {cout << r << ' ' << g << ' ' << b << endl;}
};
void solution01(){
    ColorRGB screenColor(255, 0, 0);
    ColorRGB *p;
    p = &screenColor;
    p -> show();
    ColorRGB colors[3];
    p = colors;

    p[0].setColor(255, 0, 0);
    p[1].setColor(0, 255, 0);
    p[2].setColor(0, 0, 255);

    for(int i = 0; i < 3; i++){
        p[i].show();
    }
}

// 실습문제2
void solution02(){
    int* arr = new int[5];
    int sum = 0;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "평균 " << sum / 5.0;
    delete[] arr;
}

// 실습문제3
void solution03(){
    string str;
    getline(cin, str, '\n');

    int cnt = 0;
    for(auto c: str){
        if (c == 'a' || c == 'A') cnt++;
    }
    cout << "문자 a는 " << cnt << "개 있습니다.";
}

// 실습문제4
class Sample{
    int *p;
    int size;
public:
    Sample(int n){
        size = n;
        p = new int [n];
    }
    void read();
    void write();
    int big();
    ~Sample(){ delete[] p; }
};

void Sample :: read(){
    for(int i = 0; i < size; i++){
        cin >> p[i];
    }
}
void Sample :: write(){
    for(int i = 0; i < size; i++){
        cout << p[i] << " ";
    }
}
int Sample :: big(){
    int max = p[0];
    for(int i = 1; i < size; i++){
        if(max < p[i]) max = p[i];
    }
    return max;
}

// 실습문제5
void solution05(){
    string str = "Falling int love with you";
    srand(time(0));
    int n = rand() % str.length();
    cout << str[n];
}

/*
⭐️ srand(time(0));는 rand()의 결과를 매번 다르게 만들기 위해 꼭 필요한 초기화 작업
📌 기본적으로 rand()는 어떻게 작동하나요?
    - rand()는 의사난수(pseudo-random number) 생성기
    - 항상 같은 시드(seed) 값을 사용하면, rand()는 항상 같은 숫자 순서를 생성
🔧 srand(time(0))를 안 쓰면?: 여러 번 실행해도 항상 같은 숫자 출력
*/

// 실습문제6
void solution061(){
    string str;
    getline(cin, str, '\n');

    int len = str.length();
    for(int i = len-1; i >= 0; i--){
        cout << str[i];
    }
    cout << endl;
}
void solution062(){
    string str;
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << str << endl;
}

// 실습문제7,8
class Circle{
    int r;
    Circle* p;
public:
    Circle();
    Circle(int n){
        p = new Circle[n];
    };
    void setR(int r) { this -> r = r; };
    double getArea() { return r * r * 3.14; };
};

void solution07(){
    int cnt = 0;
    Circle* c = new Circle[3];
    for(int i = 0; i < 3; i++){
        int r;
        cin >> r;
        c[i].setR(r);
        if(c[i].getArea() >= 100) cnt++;
    }
    cout << cnt;
}

void solution08(){
    int n;
    cin >> n;
    Circle *c = new Circle(n);
}


// 실습문제9
class Person{
    string name;
    string tel;
public:
    Person();
    string getName() {return name;};
    string getTel() {return tel;};
    void set(string name, string tel);
};
void solution09(){
    Person* p = new Person[3];
    for(int i = 0; i < 3; i++){
        string name, tel;
        getline(cin, name, ' ');
        getline(cin, tel);
        p[i].set(name, tel);
    }

    string name;
    cin >> name;
    for(int i = 0; i < 3; i++){
        if(p[i].getName() == name){
            cout << p[i].getTel();
            break;
        }
    }
    delete []p;
}


// 실습문제10
class Member{
    string name;
public:
    Member();
    Member(string name) { this -> name = name; }
    string getName() { return name; }
    void setName(string name) { this -> name = name; }
};
class Family{
    Member *p;
    string familyName;
    int size;
public:
    Family(string name, int size);
    void show();
    void setName(int i, string name);
    ~Family() { delete []p; } 
};

Family :: Family(string name, int size){
    familyName = name;
    this -> size = size;
    p = new Member[size];
}
void Family :: setName(int i, string name){
    p[i].setName(name);
}
void Family :: show(){
    cout << familyName << "가족은 다음과 같이 " << size << "명 입니다." << endl;
    for(int i = 0; i < size; i++){
        cout << p[i].getName() << '\t';
    }
}