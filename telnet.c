#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUF_SIZE 1000;

int main(int argc, char const *argv[])
{
	
	struct addrinfo hints;
	struct addrinfo *results ,*rp;
	int sfd ,s,j;
	struct sockaddr_storage peer_addr;
	size_t len;
	ssize_t nread;

	char buf[BUF_SIZE];

	if(argc !=2)
	{
		fprintf(stderr, "Ussage :%s port\n",argv[0] );
		exit(EXIT_FAILURE);
	}

	memset(&hints,0,sizeof(struct addrinfo));
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_DGRAM;
	hints.ai_flags = AI_PASSIVE;
	hints.ai_protocol = 0;
	hints.ai_canonname = NULL;
	hints.ai_addr = NULL;
	hints.ai_next = NULL:

	s = getaddrinfo(NULL,argv[1],&hints,&result);
	if(s!=0)
	{
		fprintf(stderr, "getaddrinfo :%s\n", gai_strerror(s));
		exit(EXIT_FAILURE);
	}

	for (rp = result ; rp !=NULL;rp=rp->ai_next)
	{
		sfd = socket(rp->ai_family,rp->ai_socktype,rp->ai_protocol);
		if(sfd==-1)
		{
			continue;	
		}

		if (connect(sfd,rp->ai_addr,rp->ai_addrlen)==0)
			break;

		close(sfd);
	}

	if (rp==NULL)
	{
		fprintf(stderr, "Couldnt Bind \n");
	}

	freeaddrinfo(result);

	for (int j = 3; i < argc; ++j)
	{
		len = strlen(argv[j])+1;

		if (len+1 > BUF_SIZE)
		{
			fprintf(stderr, "Ignore the long messge in the arguement %d \n",j);
			continue;
		}

		if (write(sfd,argv[j],len)!=len)
		{
			fprintf(stderr, "partial /failed write\n");
			exit(EXIT_FAILURE);
		}

		nread = read(sfd,buf,BUF_SIZE);

		if (nread == -1)
		{
			perror("read");
			exit(EXIT_FAILURE);
		}

		printf("Recieved %zd bytes : %s\n",nread,buf);
	}

	return 0;
}