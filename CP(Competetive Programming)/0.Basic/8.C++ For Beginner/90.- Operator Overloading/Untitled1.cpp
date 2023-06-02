#include<iostream>
#include<string>

using namespace std;

class Marks{
public:
    int intmarks;
    int extmarks;
    Marks(){
        int intmarks = 0;
        int extmarks = 0;
    }
    Marks(int im, int em){
        intmarks = im;
        extmarks = em;
    }

    void display(){
        cout << intmarks << endl << extmarks << endl;
    }
    Marks operator+(Marks d){
        Marks temp;
        temp.intmarks = intmarks + d.intmarks;
        temp.extmarks = extmarks + d.extmarks;
        return temp;
    }
    Marks operator-(Marks d);
};

Marks Marks :: operator-(Marks d){
    Marks temp;
    temp.intmarks = intmarks - d.intmarks;
    temp.extmarks = extmarks - d.extmarks;
    return temp;
}

int main(){
    Marks a(10, 13), b(19, 15);
    Marks c = a + b;
    c.display();
    Marks e = b - a;
    e.display();
    return 0;
}
