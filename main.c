#include <stdio.h>
#include <zmq.h>

void * context; //Global context, because you only need one !

int main( int argc, char * argv[] )
{
    printf("Hello world\n");
	context = zmq_ctx_new();

	void * pusher = zmq_socket( context, ZMQ_PUSH );
    void * subs = zmq_socket(context,ZMQ_SUB);

	zmq_connect( pusher, "tcp://benternet.pxl-ea-ict.be:24041" );
    zmq_connect( subs, "tcp://benternet.pxl-ea-ict.be:24042" );

    zmq_send( pusher, "Kazim aka KEW", 13, 0 );
    zmq_setsockopt(subs,ZMQ_SUBSCRIBE,"",0);

	//ALL MAGIC HAPPENS HERE
	printf("Magic!\n");
    char buffer[50];
    zmq_recv(subs,buffer,50,0);

    printf("received: %s",buffer);

	zmq_close( pusher );
    zmq_close(subs);

	zmq_ctx_shutdown( context ); //optional for cleaning lady order (get ready you l*zy f*ck)
	zmq_ctx_term( context ); //cleaning lady goes to work
	printf("KTNXBYE!\n");
	return 0;
}
