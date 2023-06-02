#include<iostream>
#include<string>

using namespace std;

class Marks{
public:
    int mark;
    Marks(){
        mark = 0;
    }
    Marks(int m){
        mark = m;
    }
    void display(){
        cout << "Your mark is " << mark << endl;
    }
    void operator+=(int bonusmark){
        mark  = mark + bonusmark;
    }
    void operator-=(int redmark){
        mark = mark - redmark;
    }

};

int main(){
    Marks emonsmarks(20);
    emonsmarks.display();

    emonsmarks += 15;
    emonsmarks.display();

    emonsmarks -= 13;
    emonsmarks.display();
    return 0;
}
