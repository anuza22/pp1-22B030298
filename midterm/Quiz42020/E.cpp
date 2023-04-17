//Calendar
#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

struct Student{
    int yy, mm, dd;
    char a, b;

    void read(){
        cin >> dd >> a >> mm >> b >> yy;
    }
    void print(){
        cout << dd << a << mm << b << yy << endl;
    }
    
    };
    bool sort_by_yy(Student s1, Student s2){
        return s1.yy < s2.yy;
    }
    bool sort_by_mm(Student s1, Student s2){
        return s1.mm < s2.mm;
    }
    bool sort_by_dd(Student s1, Student s2){
        return s1.dd < s2.dd;
    }

    bool sortbyAll (Student s1, Student s2){
        if(sort_by_yy(s1, s2)){
            if(sort_by_mm(s1, s2)){
                return sort_by_dd(s1,s2);
            }
        }
        return false;
    }


int main(){
    int n;
    cin >> n;
    vector <Student> s;

    for(int i=0; i<n; i++){
        Student k;
        k.read();
        s.push_back(k);
    }
    sort (s.begin(), s.end(), sortbyAll);

    for(int i=0; i<n; i++){
        s[i].print();
    }
    

}