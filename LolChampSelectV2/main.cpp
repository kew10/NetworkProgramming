#include <iostream>
#include <string>
#include <locale>
#include "champion.h"
#include "darius.h"
#include "irelia.h"
#include "mordekaiser.h"
#include "yasou.h"
#include "zed.h"
#include "leblanc.h"
#include "draven.h"
#include "jhin.h"
#include "caitlyn.h"
#include <sstream>


#include <locale>

#include <stdio.h>

#include <zmq.h>

#include <unistd.h>


void * context; //Global context, because you only need one !
using namespace std;



int main()
{
    context = zmq_ctx_new();
   // char buffer[100];

    void * pusher = zmq_socket( context, ZMQ_PUSH );
    void * subs = zmq_socket( context, ZMQ_SUB );


    zmq_connect( pusher, "tcp://benternet.pxl-ea-ict.be:24041" );
    zmq_connect( subs, "tcp://benternet.pxl-ea-ict.be:24042" );


    char chosenTop1[50];
    char chosenMid1[50];
    char chosenBot1[50];
    double chosenAdTop1 = 0;
    double chosenAdMid1 = 0;
    double chosenAdBot1 = 0;
    double chosenHTop1 = 0;
    double chosenHMid1 = 0;
    double chosenHBot1 = 0;
    double chosenWrTop1 = 0;
    double chosenWrMid1 = 0;
    double chosenWrBot1 = 0;
    double winRateTeam1 = 0;
    char chosenTop2[50];
    char chosenMid2[50];
    char chosenBot2[50];
    double chosenAdTop2 = 0;
    double chosenAdMid2 = 0;
    double chosenAdBot2 = 0;
    double chosenHTop2 = 0;
    double chosenHMid2 = 0;
    double chosenHBot2 = 0;
    double chosenWrTop2 = 0;
    double chosenWrMid2 = 0;
    double chosenWrBot2 = 0;
    double winRateTeam2 = 0;
    bool answer;
    Darius da;
    Irelia ir;
    Mordekaiser mo;
    Yasou ya;
    Zed ze;
    LeBlanc le;
    Draven dr;
    Jhin jh;
    Caitlyn ca;
    Champion *top1 = &da;
    Champion *top2 = &ir;
    Champion *top3 = &mo;
    Champion *mid1 = &ya;
    Champion *mid2 = &ze;
    Champion *mid3 = &le;
    Champion *bot1 = &dr;
    Champion *bot2 = &jh;
    Champion *bot3 = &ca;

    zmq_setsockopt(subs,ZMQ_SUBSCRIBE,"LOL>TOP1>",9);




    std::stringstream Top1A;
    Top1A << top1->GetAttackDamage();
    std::string Top1_A = Top1A.str();

    std::stringstream Top2A;
    Top2A << top2->GetAttackDamage();
    std::string Top2_A = Top2A.str();

    std::stringstream Top3A;
    Top3A << top3->GetAttackDamage();
    std::string Top3_A = Top3A.str();

    std::stringstream Mid1A;
    Mid1A << mid1->GetAttackDamage();
    std::string Mid1_A = Mid1A.str();

    std::stringstream Mid2A;
    Mid2A << mid2->GetAttackDamage();
    std::string Mid2_A = Mid2A.str();

    std::stringstream Mid3A;
    Mid3A << mid3->GetAttackDamage();
    std::string Mid3_A = Mid3A.str();

    std::stringstream Bot1A;
    Bot1A << bot1->GetAttackDamage();
    std::string Bot1_A = Bot1A.str();

    std::stringstream Bot2A;
    Bot2A << bot2->GetAttackDamage();
    std::string Bot2_A = Bot2A.str();

    std::stringstream Bot3A;
    Bot3A << bot3->GetAttackDamage();
    std::string Bot3_A = Bot3A.str();

    int Team1totAD=0;
    int Team2totAD=0;
    int Team1totH=0;
    int Team2totH=0;
    int Team1totWr=0;
    int Team2totWr=0;

    string message = "Welcome to LEAGUE OF LEGENDS";
    message.append("\n There are 3 lanes in the map to choose champions for:");
    message.append("\n Top - - - - - Mid - - - - - Bot");
    message.append("\n The following champs are available for top \n Name = ");
    message.append( top1->GetName() );
    message.append("\n AtackDamage = ");
    message.append(Top1_A);
    message.append("\n Name = ");
    message.append( top2->GetName() );
    message.append("\n AtackDamage = ");
    message.append(Top2_A);
    message.append( "\n Name = " );
    message.append( top3->GetName() );
    message.append("\n AtackDamage = ");
    message.append(Top3_A);
    message.append( "\n Type the name of your chosen top champ TEAM 1!" );

    zmq_send(pusher,message.c_str(),message.size(),0);
//    cout << endl;
//    cout << endl;
//    cout << "Welcome to LEAGUE OF LEGENDS" << endl;
//    cout << endl;
//    cout << "There are 3 lanes in the map to choose champions for:" << endl;
//    cout << endl;
//    cout << "Top - - - - - Mid - - - - - Bot" << endl;
//    cout << endl;
//    cout << "The following champs are available for top" << endl;
//    cout << endl;
//    cout << "Name = "<< top1->GetName() << endl;

//    cout << "\t Attack Damage = "<< top1->GetAttackDamage() << endl;
//    cout << "\t Health = "<< top1->GetHealth() << endl;
//    cout << "\t Lane = "<< top1->GetLane() << endl;
//    cout << "Name = "<< top2->GetName() << endl;
//    cout << "\t Attack Damage = "<< top2->GetAttackDamage() << endl;
//    cout << "\t Health = "<< top2->GetHealth() << endl;
//    cout << "\t Lane = "<< top2->GetLane() << endl;
//    cout << "Name = "<< top3->GetName() << endl;
//    cout << "\t Attack Damage = "<< top3->GetAttackDamage() << endl;
//    cout << "\t Health = "<< top3->GetHealth() << endl;
//    cout << "\t Lane = "<< top3->GetLane() << endl;
//    cout << endl;
//    cout << "Type the name of your chosen top champ TEAM 1!" << endl;
//    cin >> chosenTop1;
    zmq_recv(subs,chosenTop1,sizeof(chosenTop1),0);

   // char msg[] ="LOL>TOP1>Darius";
    char* sep = strtok(chosenTop1,">");
    char* sep1 = strtok(NULL,">");
    char* sep2 = strtok(NULL,">");
 //printf("%s",sep2);

//    while(sep2 != top1->GetName() && sep2 != top2->GetName() && sep2 != top3->GetName())
//    {

//        string message1 = "Wrong champ/nType the name of your chosen top champ TEAM 1! ";
//        zmq_send(pusher,message1.c_str(),message1.size(),0);
//        zmq_recv(subs,chosenTop1,sizeof(chosenTop1),0);
//    }

        if(sep2==top1->GetName())
        {
            chosenAdTop1 = top1->GetAttackDamage();
            chosenHTop1 = top1->GetHealth();
            chosenWrTop1 = top1->GetDiffecultyValue();
        }

        else if(sep2 == top2->GetName())

        {
            chosenAdTop1 = top2->GetAttackDamage();
            chosenHTop1 = top2->GetHealth();
            chosenWrTop1 = top2->GetDiffecultyValue();
        }

       else
        {
            chosenAdTop1 = top3->GetAttackDamage();
            chosenHTop1 = top3->GetHealth();
            chosenWrTop1 = top3->GetDiffecultyValue();
        }

        zmq_setsockopt(subs,ZMQ_UNSUBSCRIBE,"LOL>TOP1>",9);


        zmq_setsockopt(subs,ZMQ_SUBSCRIBE,"LOL>TOP2>",9);

        string message2 = "Type the name of your chosen top champ TEAM 2!";
        zmq_send(pusher,message2.c_str(),message2.size(),0);
        zmq_recv(subs,chosenTop2,sizeof(chosenTop2),0);

        char* sepr = strtok(chosenTop2,">");
        char* sepr1 = strtok(NULL,">");
        char* sepr2 = strtok(NULL,">");


        if(sepr2==top1->GetName())
        {
            chosenAdTop2 = top1->GetAttackDamage();
            chosenHTop2 = top1->GetHealth();
            chosenWrTop2 = top1->GetDiffecultyValue();
        }

        else if(sepr2 == top2->GetName())

        {
            chosenAdTop2 = top2->GetAttackDamage();
            chosenHTop2 = top2->GetHealth();
            chosenWrTop2 = top2->GetDiffecultyValue();
        }

       else
        {
            chosenAdTop2 = top3->GetAttackDamage();
            chosenHTop2 = top3->GetHealth();
            chosenWrTop2 = top3->GetDiffecultyValue();
        }

  //  cout << endl;
  //  cout << endl;
  //  cout << "Type the name of your chosen top champ TEAM 2!" << endl;
  //  cin >> chosenTop2;
//    while(sepr2 != top1->GetName() && sepr2 != top2->GetName() && sepr2 != top3->GetName())
//    {
//        string message3 = "Wrong champ/nType the name of your chosen top champ TEAM 2! ";
//        zmq_send(pusher,message3.c_str(),message3.size(),0);
//        zmq_recv(subs,chosenTop2,sizeof(chosenTop2),0);


//        cout << "Wrong champ" << endl;
//        cout << "Type the name of your chosen top champ TEAM 2!" << endl;
//        cin >> chosenTop2;
//    }



    zmq_setsockopt(subs,ZMQ_UNSUBSCRIBE,"LOL>TOP2>",9);


    zmq_setsockopt(subs,ZMQ_SUBSCRIBE,"LOL>MID1>",9);
    //?
    string message4 = "";
    message4.append("\n The following champs are available for mid \n Name =");
    message4.append( mid1->GetName() );
    message4.append("\n AtackDamage = ");
    message4.append(Mid1_A);

    message4.append( "\n Name = " );
    message4.append( mid2->GetName() );
    message4.append("\n AtackDamage = ");
    message4.append(Mid2_A);

    message4.append( "\n Name = " );
    message4.append( mid3->GetName() );
    message4.append("\n AtackDamage = ");
    message4.append(Mid3_A);
    message4.append( "\nType the name of your chosen mid champ TEAM 1! " );

    zmq_send(pusher,message4.c_str(),message4.size(),0);
    zmq_recv(subs,chosenMid1,sizeof(chosenMid1),0);


    char* a = strtok(chosenMid1,">");
    char* b = strtok(NULL,">");
    char* c = strtok(NULL,">");



    if(c==mid1->GetName())
    {
        chosenAdMid1 = mid1->GetAttackDamage();
        chosenHMid1 = mid1->GetHealth();
        chosenWrMid1 = mid1->GetDiffecultyValue();
    }

    else if(c == mid2->GetName())

    {
        chosenAdMid1 = mid2->GetAttackDamage();
        chosenHMid1 = mid2->GetHealth();
        chosenWrMid1 = mid2->GetDiffecultyValue();
    }

   else
    {
        chosenAdMid1 = mid3->GetAttackDamage();
        chosenHMid1 = mid3->GetHealth();
        chosenWrMid1 = mid3->GetDiffecultyValue();
    }

    zmq_setsockopt(subs,ZMQ_UNSUBSCRIBE,"LOL>MID1>",9);


    zmq_setsockopt(subs,ZMQ_SUBSCRIBE,"LOL>MID2>",9);


    string message5 = "";
    message5.append("\n Type the name of your chosen mid champ TEAM 2!");

    zmq_send(pusher,message5.c_str(),message5.size(),0);
    zmq_recv(subs,chosenMid2,sizeof(chosenMid2),0);

    char* d = strtok(chosenMid2,">");
    char* e = strtok(NULL,">");
    char* f = strtok(NULL,">");


    if(f==mid1->GetName())
    {
        chosenAdMid2 = mid1->GetAttackDamage();
        chosenHMid2 = mid1->GetHealth();
        chosenWrMid2 = mid1->GetDiffecultyValue();
    }

    else if(f == mid2->GetName())

    {
        chosenAdMid2 = mid2->GetAttackDamage();chosenAdMid1 = mid3->GetAttackDamage();
        chosenHMid2 = mid2->GetHealth();
        chosenWrMid2 = mid2->GetDiffecultyValue();
    }

   else
    {
        chosenAdMid2 = mid3->GetAttackDamage();
        chosenHMid2 = mid3->GetHealth();
        chosenWrMid2 = mid3->GetDiffecultyValue();
    }

//    cout << "The following champs are available for mid" << endl;
//    cout << endl;
//    cout << "Name = "<< mid1->GetName() << endl;
//    cout << "\t Attack Damage = "<< mid1->GetAttackDamage() << endl;
//    cout << "\t Health = "<< mid1->GetHealth() << endl;
//    cout << "\t Lane = "<< mid1->GetLane() << endl;
//    cout << "Name = "<< mid2->GetName() << endl;
//    cout << "\t Attack Damage = "<< mid2->GetAttackDamage() << endl;
//    cout << "\t Health = "<< mid2->GetHealth() << endl;
//    cout << "\t Lane = "<< mid2->GetLane() << endl;
//    cout << "Name = "<< mid3->GetName() << endl;
//    cout << "\t Attack Damage = "<< mid3->GetAttackDamage() << endl;
//    cout << "\t Health = "<< mid3->GetHealth() << endl;
//    cout << "\t Lane = "<< mid3->GetLane() << endl;
//    cout << endl;
//    cout << "Type the name of your chosen mid champ TEAM 1!" << endl;
//    cin >> chosenMid1;


//    while(chosenMid1 != mid1->GetName() && chosenMid1 != mid2->GetName() && chosenMid1 != mid3->GetName())
//    {
//        cout << "Wrong champ" << endl;
//        cout << "Type the name of your chosen mid champ TEAM 1!" << endl;
//        cin >> chosenMid1;
//    }
//    cout << endl;
//    cout << endl;


//    cout << "Type the name of your chosen mid champ TEAM 2!" << endl;


//    cin >> chosenMid2;
//    while(chosenMid2 != mid1->GetName() && chosenMid2 != mid2->GetName() && chosenMid2 != mid3->GetName())
//    {
//        cout << "Wrong champ" << endl;
//        cout << "Type the name of your chosen mid champ TEAM 2!" << endl;
//        cin >> chosenMid2;
//    }


    zmq_setsockopt(subs,ZMQ_UNSUBSCRIBE,"LOL>MID2>",9);


    zmq_setsockopt(subs,ZMQ_SUBSCRIBE,"LOL>BOT1>",9);

    string message6 = "";
    message6.append("\n The following champs are available for bot \n Name =");
    message6.append( bot1->GetName() );
    message6.append("\n AtackDamage = ");
    message6.append(Bot1_A);

    message6.append( "\n Name = " );
    message6.append( bot2->GetName() );
    message6.append("\n AtackDamage = ");
    message6.append(Bot2_A);

    message6.append( "\n Name = " );
    message6.append( bot3->GetName() );
    message6.append("\n AtackDamage = ");
    message6.append(Bot2_A);

    message6.append( "\nType the name of your chosen bot champ TEAM 1! " );

    zmq_send(pusher,message6.c_str(),message6.size(),0);

    zmq_recv(subs,chosenBot1,sizeof(chosenBot1),0);


    char* g = strtok(chosenBot1,">");
    char* h = strtok(NULL,">");
    char* i = strtok(NULL,">");


    if(i==bot1->GetName())
    {
        chosenAdBot1 = bot1->GetAttackDamage();
        chosenHBot1 = bot1->GetHealth();
        chosenWrBot1 = bot1->GetDiffecultyValue();
    }

    else if(i == bot2->GetName())

    {
        chosenAdBot1 = bot2->GetAttackDamage();
        chosenHBot1 = bot2->GetHealth();
        chosenWrBot1 = bot2->GetDiffecultyValue();
    }

   else
    {
        chosenAdBot1 = bot3->GetAttackDamage();
        chosenHBot1 = bot3->GetHealth();
        chosenWrBot1 = bot3->GetDiffecultyValue();
    }

    zmq_setsockopt(subs,ZMQ_UNSUBSCRIBE,"LOL>BOT1>",9);


    zmq_setsockopt(subs,ZMQ_SUBSCRIBE,"LOL>BOT2>",9);

    string message7 = "";
    message7.append("\n Type the name of your chosen bot champ TEAM 2!");

    zmq_send(pusher,message7.c_str(),message7.size(),0);
    zmq_recv(subs,chosenBot2,sizeof(chosenBot2),0);

    char* j = strtok(chosenBot2,">");
    char* k = strtok(NULL,">");
    char* l = strtok(NULL,">");

    if(l==bot1->GetName())
    {
        chosenAdBot2 = bot1->GetAttackDamage();
        chosenHBot2 = bot1->GetHealth();
        chosenWrBot2 = bot1->GetDiffecultyValue();
    }

    else if(l == bot2->GetName())

    {
        chosenAdBot2 = bot2->GetAttackDamage();
        chosenHBot2 = bot2->GetHealth();
        chosenWrBot2 = bot2->GetDiffecultyValue();
    }

   else
    {
        chosenAdBot2 = bot3->GetAttackDamage();
        chosenHBot2 = bot3->GetHealth();
        chosenWrBot2 = bot3->GetDiffecultyValue();
    }

    zmq_setsockopt(subs,ZMQ_UNSUBSCRIBE,"LOL>BOT2>",9);


//    cout << "The following champs are available for bot" << endl;
//    cout << endl;
//    cout << "Name = "<< bot1->GetName() << endl;
//    cout << "\t Attack Damage = "<< bot1->GetAttackDamage() << endl;
//    cout << "\t Health = "<< bot1->GetHealth() << endl;
//    cout << "\t Lane = "<< bot1->GetLane() << endl;
//    cout << "Name = "<< bot2->GetName() << endl;
//    cout << "\t Attack Damage = "<< bot2->GetAttackDamage() << endl;
//    cout << "\t Health = "<< bot2->GetHealth() << endl;
//    cout << "\t Lane = "<< bot2->GetLane() << endl;
//    cout << "Name = "<< bot3->GetName() << endl;
//    cout << "\t Attack Damage = "<< bot3->GetAttackDamage() << endl;
//    cout << "\t Health = "<< bot3->GetHealth() << endl;
//    cout << "\t Lane = "<< bot3->GetLane() << endl;
//    cout << endl;
//    cout << "Type the name of your chosen bot champ TEAM 1!" << endl;
//    cin >> chosenBot1;




//    while(chosenBot1 != bot1->GetName() && chosenBot1 != bot2->GetName() && chosenBot1 != bot3->GetName())
//    {
//        cout << "Wrong champ" << endl;
//        cout << "Type the name of your chosen bot champ TEAM 1!" << endl;
//        cin >> chosenBot1;
//    }
//    cout << endl;
//    cout << endl;
//    cout << "Type the name of your chosen bot champ TEAM 2!" << endl;
//    cin >> chosenBot2;
//    while(chosenBot2 != bot1->GetName() && chosenBot2 != bot2->GetName() && chosenBot2 != bot3->GetName())
//    {
//        cout << "Wrong champ" << endl;
//        cout << "Type the name of your chosen bot champ TEAM 2!" << endl;
//        cin >> chosenBot2;
//    }
//    cout << endl;
//    cout << endl;


//}

//    if(chosenTop1 == top1->GetName())
//    {
//        cout << " ----- TEAM1 -----" << endl;
//        cout << endl;
//        cout << "Your Top champ is : " << top1->GetName() << endl;
//        cout << " Nick Name : " << top1->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << top1->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << top1->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << top1->GetQ() << endl;
//        cout << "\t\t Your W ability : " << top1->GetW() << endl;
//        cout << "\t\t Your E ability : " << top1->GetE() << endl;
//        cout << "\t\t Your R ability : " << top1->GetR() << endl;
//        cout << "\t\t\t Role Name : " << top1->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << top1->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdTop1 = top1->GetAttackDamage();
//        chosenHTop1 = top1->GetHealth();
//        chosenWrTop1 = top1->GetDiffecultyValue();
//    }
//    if(chosenTop1 == top2->GetName())
//    {
//        cout << " ----- TEAM1 -----" << endl;
//        cout << endl;
//        cout << "Your Top champ is : " << top2->GetName() << endl;
//        cout << " Nick Name : " << top2->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << top2->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << top2->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << top2->GetQ() << endl;
//        cout << "\t\t Your W ability : " << top2->GetW() << endl;
//        cout << "\t\t Your E ability : " << top2->GetE() << endl;
//        cout << "\t\t Your R ability : " << top2->GetR() << endl;
//        cout << "\t\t\t Role Name : " << top2->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << top2->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdTop1 = top2->GetAttackDamage();
//        chosenHTop1 = top2->GetHealth();
//        chosenWrTop1 = top2->GetDiffecultyValue();
//    }
//    if(chosenTop1 == top3->GetName())
//    {
//        cout << " ----- TEAM1 -----" << endl;
//        cout << endl;
//        cout << "Your Top champ is : " << top3->GetName() << endl;
//        cout << " Nick Name : " << top3->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << top3->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << top3->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << top3->GetQ() << endl;
//        cout << "\t\t Your W ability : " << top3->GetW() << endl;
//        cout << "\t\t Your E ability : " << top3->GetE() << endl;
//        cout << "\t\t Your R ability : " << top3->GetR() << endl;
//        cout << "\t\t\t Role Name : " << top3->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << top3->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdTop1 = top3->GetAttackDamage();
//        chosenHTop1 = top3->GetHealth();
//        chosenWrTop1 = top3->GetDiffecultyValue();
//    }
//    if(chosenTop2 == top1->GetName())
//    {
//        cout << " ----- TEAM2 -----" << endl;
//        cout << endl;
//        cout << "Your Top champ is : " << top1->GetName() << endl;
//        cout << " Nick Name : " << top1->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << top1->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << top1->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << top1->GetQ() << endl;
//        cout << "\t\t Your W ability : " << top1->GetW() << endl;
//        cout << "\t\t Your E ability : " << top1->GetE() << endl;
//        cout << "\t\t Your R ability : " << top1->GetR() << endl;
//        cout << "\t\t\t Role Name : " << top1->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << top1->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdTop2 = top1->GetAttackDamage();
//        chosenHTop2 = top1->GetHealth();
//        chosenWrTop2 = top1->GetDiffecultyValue();
//    }
//    if(chosenTop2 == top2->GetName())
//    {
//        cout << " ----- TEAM2 -----" << endl;
//        cout << endl;
//        cout << "Your Top champ is : " << top2->GetName() << endl;
//        cout << " Nick Name : " << top2->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << top2->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << top2->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << top2->GetQ() << endl;
//        cout << "\t\t Your W ability : " << top2->GetW() << endl;
//        cout << "\t\t Your E ability : " << top2->GetE() << endl;
//        cout << "\t\t Your R ability : " << top2->GetR() << endl;
//        cout << "\t\t\t Role Name : " << top2->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << top2->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdTop2 = top2->GetAttackDamage();
//        chosenHTop2 = top2->GetHealth();
//        chosenWrTop2 = top2->GetDiffecultyValue();
//    }
//    if(chosenTop2 == top3->GetName())
//    {
//        cout << " ----- TEAM2 -----" << endl;
//        cout << endl;
//        cout << "Your Top champ is : " << top3->GetName() << endl;
//        cout << " Nick Name : " << top3->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << top3->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << top3->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << top3->GetQ() << endl;
//        cout << "\t\t Your W ability : " << top3->GetW() << endl;
//        cout << "\t\t Your E ability : " << top3->GetE() << endl;
//        cout << "\t\t Your R ability : " << top3->GetR() << endl;
//        cout << "\t\t\t Role Name : " << top3->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << top3->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdTop2 = top3->GetAttackDamage();
//        chosenHTop2 = top3->GetHealth();
//        chosenWrTop2 = top3->GetDiffecultyValue();
//    }
//    if(chosenMid1 == mid1->GetName())
//    {
//        cout << " ----- TEAM1 -----" << endl;
//        cout << endl;
//        cout << "Your Mid champ is : " << mid1->GetName() << endl;
//        cout << " Nick Name : " << mid1->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << mid1->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << mid1->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << mid1->GetQ() << endl;
//        cout << "\t\t Your W ability : " << mid1->GetW() << endl;
//        cout << "\t\t Your E ability : " << mid1->GetE() << endl;
//        cout << "\t\t Your R ability : " << mid1->GetR() << endl;
//        cout << "\t\t\t Role Name : " << mid1->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << mid1->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdMid1 = mid1->GetAttackDamage();
//        chosenHMid1 = mid1->GetHealth();
//        chosenWrMid1 = mid1->GetDiffecultyValue();
//    }
//    if(chosenMid1 == mid2->GetName())
//    {
//        cout << " ----- TEAM1 -----" << endl;
//        cout << endl;
//        cout << "Your Mid champ is : " << mid2->GetName() << endl;
//        cout << " Nick Name : " << mid2->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << mid2->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << mid2->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << mid2->GetQ() << endl;
//        cout << "\t\t Your W ability : " << mid2->GetW() << endl;
//        cout << "\t\t Your E ability : " << mid2->GetE() << endl;
//        cout << "\t\t Your R ability : " << mid2->GetR() << endl;
//        cout << "\t\t\t Role Name : " << mid2->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << mid2->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdMid1 = mid2->GetAttackDamage();
//        chosenHMid1 = mid2->GetHealth();
//        chosenWrMid1 = mid2->GetDiffecultyValue();
//    }
//    if(chosenMid1 == mid3->GetName())
//    {
//        cout << " ----- TEAM1 -----" << endl;
//        cout << endl;
//        cout << "Your Mid champ is : " << mid3->GetName() << endl;
//        cout << " Nick Name : " << mid3->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << mid3->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << mid3->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << mid3->GetQ() << endl;
//        cout << "\t\t Your W ability : " << mid3->GetW() << endl;
//        cout << "\t\t Your E ability : " << mid3->GetE() << endl;
//        cout << "\t\t Your R ability : " << mid3->GetR() << endl;
//        cout << "\t\t\t Role Name : " << mid3->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << mid3->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdMid1 = mid3->GetAttackDamage();
//        chosenHMid1 = mid3->GetHealth();
//        chosenWrMid1 = mid3->GetDiffecultyValue();
//    }
//    if(chosenMid2 == mid1->GetName())
//    {
//        cout << " ----- TEAM2 -----" << endl;
//        cout << endl;
//        cout << "Your Mid champ is : " << mid1->GetName() << endl;
//        cout << " Nick Name : " << mid1->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << mid1->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << mid1->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << mid1->GetQ() << endl;
//        cout << "\t\t Your W ability : " << mid1->GetW() << endl;
//        cout << "\t\t Your E ability : " << mid1->GetE() << endl;
//        cout << "\t\t Your R ability : " << mid1->GetR() << endl;
//        cout << "\t\t\t Role Name : " << mid1->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << mid1->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdMid2 = mid1->GetAttackDamage();
//        chosenHMid2 = mid1->GetHealth();
//        chosenWrMid2 = mid1->GetDiffecultyValue();
//    }
//    if(chosenMid2 == mid2->GetName())
//    {
//        cout << " ----- TEAM2 -----" << endl;
//        cout << endl;
//        cout << "Your Mid champ is : " << mid2->GetName() << endl;
//        cout << " Nick Name : " << mid2->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << mid2->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << mid2->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << mid2->GetQ() << endl;
//        cout << "\t\t Your W ability : " << mid2->GetW() << endl;
//        cout << "\t\t Your E ability : " << mid2->GetE() << endl;
//        cout << "\t\t Your R ability : " << mid2->GetR() << endl;
//        cout << "\t\t\t Role Name : " << mid2->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << mid2->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdMid2 = mid2->GetAttackDamage();
//        chosenHMid2 = mid2->GetHealth();
//        chosenWrMid2 = mid2->GetDiffecultyValue();
//    }
//    if(chosenMid2 == mid3->GetName())
//    {
//        cout << " ----- TEAM2 -----" << endl;
//        cout << endl;
//        cout << "Your Mid champ is : " << mid3->GetName() << endl;
//        cout << " Nick Name : " << mid3->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << mid3->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << mid3->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << mid3->GetQ() << endl;
//        cout << "\t\t Your W ability : " << mid3->GetW() << endl;
//        cout << "\t\t Your E ability : " << mid3->GetE() << endl;
//        cout << "\t\t Your R ability : " << mid3->GetR() << endl;
//        cout << "\t\t\t Role Name : " << mid3->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << mid3->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdMid2 = mid3->GetAttackDamage();
//        chosenHMid2 = mid3->GetHealth();
//        chosenWrMid2 = mid3->GetDiffecultyValue();
//    }
//    if(chosenBot1 == bot1->GetName())
//    {
//        cout << " ----- TEAM1 -----" << endl;
//        cout << endl;
//        cout << "Your Bot champ is : " << bot1->GetName() << endl;
//        cout << " Nick Name : " << bot1->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << bot1->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << bot1->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << bot1->GetQ() << endl;
//        cout << "\t\t Your W ability : " << bot1->GetW() << endl;
//        cout << "\t\t Your E ability : " << bot1->GetE() << endl;
//        cout << "\t\t Your R ability : " << bot1->GetR() << endl;
//        cout << "\t\t\t Role Name : " << bot1->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << bot1->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdBot1 = bot1->GetAttackDamage();
//        chosenHBot1 = bot1->GetHealth();
//        chosenWrBot1 = bot1->GetDiffecultyValue();
//    }
//    if(chosenBot1 == bot2->GetName())
//    {
//        cout << " ----- TEAM1 -----" << endl;
//        cout << endl;
//        cout << "Your Bot champ is : " << bot2->GetName() << endl;
//        cout << " Nick Name : " << bot2->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << bot2->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << bot2->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << bot2->GetQ() << endl;
//        cout << "\t\t Your W ability : " << bot2->GetW() << endl;
//        cout << "\t\t Your E ability : " << bot2->GetE() << endl;
//        cout << "\t\t Your R ability : " << bot2->GetR() << endl;
//        cout << "\t\t\t Role Name : " << bot2->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << bot2->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdBot1 = bot2->GetAttackDamage();
//        chosenHBot1 = bot2->GetHealth();
//        chosenWrBot1 = bot2->GetDiffecultyValue();
//    }
//    if(chosenBot1 == bot3->GetName())
//    {
//        cout << " ----- TEAM1 -----" << endl;
//        cout << endl;
//        cout << "Your Bot champ is : " << bot3->GetName() << endl;
//        cout << " Nick Name : " << bot3->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << bot3->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << bot3->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << bot3->GetQ() << endl;
//        cout << "\t\t Your W ability : " << bot3->GetW() << endl;
//        cout << "\t\t Your E ability : " << bot3->GetE() << endl;
//        cout << "\t\t Your R ability : " << bot3->GetR() << endl;
//        cout << "\t\t\t Role Name : " << bot3->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << bot3->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdBot1 = bot3->GetAttackDamage();
//        chosenHBot1 = bot3->GetHealth();
//        chosenWrBot1 = bot3->GetDiffecultyValue();
//    }
//    if(chosenBot2 == bot1->GetName())
//    {
//        cout << " ----- TEAM2 -----" << endl;
//        cout << endl;
//        cout << "Your Bot champ is : " << bot1->GetName() << endl;
//        cout << " Nick Name : " << bot1->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << bot1->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << bot1->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << bot1->GetQ() << endl;
//        cout << "\t\t Your W ability : " << bot1->GetW() << endl;
//        cout << "\t\t Your E ability : " << bot1->GetE() << endl;
//        cout << "\t\t Your R ability : " << bot1->GetR() << endl;
//        cout << "\t\t\t Role Name : " << bot1->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << bot1->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdBot2 = bot1->GetAttackDamage();
//        chosenHBot2 = bot1->GetHealth();
//        chosenWrBot2 = bot1->GetDiffecultyValue();
//    }
//    if(chosenBot2 == bot2->GetName())
//    {
//        cout << " ----- TEAM2 -----" << endl;
//        cout << endl;
//        cout << "Your Bot champ is : " << bot2->GetName() << endl;
//        cout << " Nick Name : " << bot2->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << bot2->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << bot2->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << bot2->GetQ() << endl;
//        cout << "\t\t Your W ability : " << bot2->GetW() << endl;
//        cout << "\t\t Your E ability : " << bot2->GetE() << endl;
//        cout << "\t\t Your R ability : " << bot2->GetR() << endl;
//        cout << "\t\t\t Role Name : " << bot2->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << bot2->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdBot2 = bot2->GetAttackDamage();
//        chosenHBot2 = bot2->GetHealth();
//        chosenWrBot2 = bot3->GetDiffecultyValue();
//    }
//    if(chosenBot2 == bot3->GetName())
//    {
//        cout << " ----- TEAM2 -----" << endl;
//        cout << endl;
//        cout << "Your Bot champ is : " << bot3->GetName() << endl;
//        cout << " Nick Name : " << bot3->GetNickName() << endl;
//        cout << endl;
//        cout << "\tYour base attack damage : " << bot3->GetAttackDamage() << endl;
//        cout << "\tYour base health : " << bot3->GetHealth() << endl;
//        cout << "\t\t Your Q ability : " << bot3->GetQ() << endl;
//        cout << "\t\t Your W ability : " << bot3->GetW() << endl;
//        cout << "\t\t Your E ability : " << bot3->GetE() << endl;
//        cout << "\t\t Your R ability : " << bot3->GetR() << endl;
//        cout << "\t\t\t Role Name : " << bot3->GetRoleName() << endl;
//        cout << "\t\t\t Difficulty : " << bot3->GetDiffeculty() << endl;
//        cout << " -----------------" << endl;
//        cout << endl;
//        cout << endl;
//        chosenAdBot2 = bot3->GetAttackDamage();
//        chosenHBot2 = bot3->GetHealth();
//        chosenWrBot2 = bot3->GetDiffecultyValue();
//    }


    Team1totAD = chosenAdTop1+chosenAdMid1 +chosenAdBot1;
    Team2totAD = chosenAdTop2+chosenAdMid2 +chosenAdBot2;
    Team1totH= chosenHTop1+ chosenHMid1+chosenHBot1;
    Team2totH = chosenHTop2+chosenHMid2+chosenHBot2;
    Team1totWr = chosenWrTop1 + chosenWrMid1+chosenWrBot1;
    Team2totWr = chosenWrTop2+chosenWrMid2+chosenWrBot2;


    //zmq_setsockopt(subs,ZMQ_SUBSCRIBE,"LOL>WINNER>",11);

    if((Team1totAD+Team1totH/Team1totWr)>(Team2totAD+Team2totH/Team2totWr))
    {
        string message8 = "Team 1 wins the game! ";

        zmq_send(pusher,message8.c_str(),message8.size(),0);
        //message8.append("\n There are 3 lanes in the map to choose champions for:");

    }
    else
    {
        string message9 = "Team 2 wins the game! ";

        zmq_send(pusher,message9.c_str(),message9.size(),0);
    }

    zmq_close( pusher );
    zmq_close( subs );
    zmq_ctx_shutdown( context );
    zmq_ctx_term( context );


//    cout << endl;
//    cout << "TEAM1 total attack damage : " << chosenAdTop1 + chosenAdMid1 + chosenAdBot1 << endl;
//    cout << endl;
//    cout << "TEAM1 total health : " << chosenHTop1 + chosenHMid1 + chosenHBot1 << endl;
//    cout << endl;
//    cout << endl;
//    cout << "TEAM2 total attack damage : " << chosenAdTop2 + chosenAdMid2 + chosenAdBot2 << endl;
//    cout << endl;
//    cout << "TEAM2 total healt : " << chosenHTop2 + chosenHMid2 + chosenHBot2 << endl;
//    cout << endl;
//    cout << endl;
    /*cout << "do you want to see the result of the game true of false" << endl;
    cin >> answer;
    if(answer == true)
    {*/
//        winRateTeam1 = (chosenAdTop1 + chosenAdMid1 + chosenAdBot1 + chosenHTop1 + chosenHMid1 + chosenHBot1) / (chosenWrTop1 + chosenWrMid1 + chosenWrBot1);
//        winRateTeam2 = (chosenAdTop2 + chosenAdMid2 + chosenAdBot2 + chosenHTop2 + chosenHMid2 + chosenHBot2) / (chosenWrTop2 + chosenWrMid2 + chosenWrBot2);
//        if(winRateTeam1 > winRateTeam2)
//        {
//            cout << "TEAM 1 WINS THE GAME !!!" <<endl;
//            cout << endl;
//            cout << endl;
//        }
//        else
//        {
//            cout << "TEAM 2 WINS THE GAME !!!" <<endl;
//            cout << endl;
//            cout << endl;
//        }
    /*}
    else
    {
        cout << "ga dan kake blo" << endl;
    }*/
}

