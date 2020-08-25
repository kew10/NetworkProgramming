#ifndef NAME_H
#define NAME_H
#include <iostream>
using namespace std;


class Name
{
public:
    Name();
    void SetName(string name = "Naam");// here you set the name of the champion
    void SetNickName(string nickName = "NickName");// here you set the nickname of the champion
    string GetName();// here you get the name of the champion
    string GetNickName();// here you get the nickname of the champion
private:
    string name; // is the variable that save the name
    string nickName; // is the variable that save the nickname
};

#endif // NAME_H
