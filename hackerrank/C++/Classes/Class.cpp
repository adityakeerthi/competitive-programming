#include <bits/stdc++.h>
using namespace std;

class Student {
    private:
        int age, standard;
        string first_name, last_name, final;
    public:
        void set_age(int i) {
            age = i;
        }
        void set_standard(int i) {
            standard = i;
        }
        void set_first_name(string i) {
            first_name = i;
        }
        void set_last_name(string i) {
            last_name = i;
        }

        int get_age() {
            return age;
        }
        int get_standard() {
            return standard;
        }
        string get_first_name() {
            return first_name;
        }
        string get_last_name() {
            return last_name;
        }
        void to_string() {
            cout << age << "," << first_name << "," << last_name << "," << standard;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
    
    return 0;
}