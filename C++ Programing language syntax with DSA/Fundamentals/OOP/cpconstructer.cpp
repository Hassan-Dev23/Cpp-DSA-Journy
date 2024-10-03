#include<iostream>
#include<string>
#include<ctime>
using namespace std;
class Greeting{
public:
    string morning;
    string evening;
    string night;
    int age;

    Greeting(string morning ,string evening , string night , int age){
    this->morning=morning;
    this->evening=evening;
    this->night=night;
    this->age=age;
    };
//    Function to return the greeting message based on current time of day
    string getGreetingMessage(){
        time_t now = time(0);
        tm* localTime = localtime(&now);
        int hour = localTime->tm_hour;

        if (hour >= 5 && hour < 12) {   // Morning (5am to 11:59am)
            return morning;
        } else if (hour >= 12 && hour < 18) {  // Afternoon (12pm to 5:59pm)
            return evening;
        } else {                        // Evening (6pm to 4:59am)
            return night;
        }
    };
};
int main(){
    Greeting g1("morning ho gi uth\n","evening ho gi\n","Night ho gi so ja\n",19);
    cout<<g1.getGreetingMessage();
}