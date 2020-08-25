#include "name.h"

Name::Name()
{

}
void Name::SetName(string name)
{
    this->name = name;
}
void Name::SetNickName(string nickName)
{
    this->nickName = nickName;
}
string Name::GetName()
{
    return name;
}
string Name::GetNickName()
{
    return nickName;
}
