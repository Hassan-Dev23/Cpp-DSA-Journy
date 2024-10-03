// #include <iostream>
// using namespace std;
// class MyData {
// public:
//     string name="Hassan";
//     int age = 19;
//     MyData(const MyData &obj){
//         this->age=obj.age;
//         this->name=obj.name;
//     }
// };
// int main() {
//     MyData d1;
//     d1.name="hasan";
//     MyData d2(d1);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class MyData {
// public:
//     string name = "Hassan";
//     int age = 19;

//     // Corrected copy constructor
//     MyData(const MyData &obj) {
//         this->age = obj.age;
//         this->name = obj.name;
//     }
// };

// int main() {
//     MyData d1;  // Corrected object declaration
//     d1.name = "hasan";  // Corrected string assignment
//     MyData d2(d1);  // Copy construction
//     return 0;
// }
#include <iostream>
using namespace std;

class MyData {
public:
    string name ;
    int* ageptr ;

    // Corrected copy constructor
    MyData(MyData &obj) {
        this->name = obj.name;
        this->ageptr = obj.ageptr;
    }

    // Default constructor
    MyData(string name,int age) {
        this->name=name;
        ageptr=new int;
        *ageptr=age;

        // Optionally initialize members here if needed
    }
};

int main() {
    MyData d1("hassan",19);  // Corrected object declaration
    d1.name = "ha$an";  // Corrected string assignment
    MyData d2(d1);  // Copy construction
    d2.ageptr;
    return 0;
}
