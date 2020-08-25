// Hello World client
#include <zmq.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>




int main (void)
{

printf ("LoL champion select\n");
void *context = zmq_ctx_new ();
void *push = zmq_socket (context, ZMQ_PUSH);
void *subs = zmq_socket (context, ZMQ_SUB);

zmq_connect (push, "tcp://benternet.pxl-ea-ict.be:24041");
zmq_connect (subs, "tcp://benternet.pxl-ea-ict.be:24042");


//2 Receives, subscriptions

char ask[500]="";
scanf("%s",ask);
char str[100] = "LOL>TOP1>";
strcat(str,ask);
zmq_send(push, str, 40, 0);


char ask1[500]="";
scanf("%s",ask1);
char str1[100] = "LOL>TOP2>";
strcat(str1,ask1);
zmq_send(push, str1, 40, 0);

char ask2[500]="";
scanf("%s",ask2);
char str2[100] = "LOL>MID1>";
strcat(str2,ask2);
zmq_send(push, str2, 40, 0);

char ask4[500]="";
scanf("%s",ask4);
char str4[100] = "LOL>MID2>";
strcat(str4,ask4);
zmq_send(push, str4, 40, 0);

char ask5[500]="";
scanf("%s",ask5);
char str5[100] = "LOL>BOT1>";
strcat(str5,ask5);
zmq_send(push, str5, 40, 0);

char ask6[500]="";
scanf("%s",ask6);
char str6[100] = "LOL>BOT2>";
strcat(str6,ask6);
zmq_send(push, str6, 40, 0);

//char ask7[500]="";
//scanf("%s",ask7);
//char str6[100] = "LOL>BOT2>";
//strcat(str6,ask6);
//zmq_send(push, str6, 40, 0);

}
