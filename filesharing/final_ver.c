#include<stdio.h>
#include<stdlib.h> 
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <fcntl.h>
#include <sys/stat.h>

#include <arpa/inet.h>

#include <unistd.h>
#include <errno.h>

typedef struct command{
	char s[100];
}command;

void parse(char *s,command commands[100],int *noofcommands){//this s has no limit to it's size
	int slen;
	for(slen=0;s[slen]!='\0';slen++);
	//printf("%d\n",slen);
	int i;
	int j=0;//tells the index which is empty in command[k];
	int k=0;//tells the index which is empty in command
	for(i=0;i<slen;i++){
		j=0;
		while(s[i]=='\t' || s[i]==' '){
			i++;
		}
		while(s[i]!='\t' && s[i]!=' ' && s[i]!='\0'){
			commands[k].s[j]=s[i];
			//printf("%c\n",commands[k].s[j]);
			j++;
			i++;
		}
		commands[k].s[j]='\0';
		k++;
	}
	//printf("k=%d\n",k);
	*noofcommands=k;
}

void print(command *commands,int k){
	int i;
	printf("sending data\n");
	for(i=0;i<k;i++){
		printf("%s\n",commands[i].s);
	}
}

int main(int argc,char **argv)
{
	int sock1, connected1, bytes_recieved , true = 1;  
	int sock2, connected2;
	int sock3;
	int addr_len3, bytes_read3;	
	int sock4;
	int addr_len4, bytes_read4;	
	
	char send_data[1024],recv_data[1024];
	
	struct hostent *host;
	
	struct sockaddr_in server_addr1,client_addr1;    
	struct sockaddr_in server_addr2,client_addr2;    
	struct sockaddr_in server_addr3 , client_addr3;
	struct sockaddr_in server_addr4 , client_addr4;
	int sin_size;
	
	//host = gethostbyname("127.0.0.1");
	if(argc!=6){
		printf("commandline arguments are wrong\n");
		exit(0);
	}
	host= (struct hostent *) gethostbyname((char *)argv[5]);
	
	//sock1 tcp
	if ((sock1 = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
		perror("\nSocket\n");
		exit(1);
	}
	
	server_addr1.sin_family = AF_INET;
	server_addr1.sin_port = htons(atoi(argv[1]));
	server_addr1.sin_addr = *((struct in_addr *)host->h_addr);
	bzero(&(server_addr1.sin_zero),8); 
	
	//sock2 tcp
	if ((sock2 = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
		perror("\nSocket\n");
		exit(1);
	}
	
	server_addr2.sin_family = AF_INET;
	server_addr2.sin_port = htons(atoi(argv[2]));
	server_addr2.sin_addr = *((struct in_addr *)host->h_addr);
	bzero(&(server_addr2.sin_zero),8);
	
	//udp sock3
	if ((sock3 = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
		perror("Socket");
		exit(1);
	}
	if ((sock4 = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
		perror("Socket");
		exit(1);
	}
	
	server_addr3.sin_family = AF_INET;
	server_addr3.sin_port = htons(atoi(argv[3]));
	server_addr3.sin_addr = *((struct in_addr *)host->h_addr);
	
	server_addr4.sin_family = AF_INET;
	server_addr4.sin_port = htons(atoi(argv[4]));
	server_addr4.sin_addr = *((struct in_addr *)host->h_addr);
	
	int iamclient=1;
	if (connect(sock1, (struct sockaddr *)&server_addr1,sizeof(struct sockaddr)) == -1){
		iamclient=0;
	}
	if(iamclient==1)
	{
		if (connect(sock2, (struct sockaddr *)&server_addr2,sizeof(struct sockaddr)) ==-1)
		{
			perror("Connect");
			exit(1);
		}
	}
	
	if(iamclient==0){//make me host
		printf("I am server program\n");
		
		server_addr1.sin_addr.s_addr = INADDR_ANY;
		
		bzero(&(server_addr1.sin_zero),8); 
		
		if (bind(sock1, (struct sockaddr *)&server_addr1, sizeof(struct sockaddr))== -1) {
			perror("\nUnable to bind\n");
			exit(1);
		}
		
		if (listen(sock1, 5) == -1) {
			perror("\nListen\n");
			exit(1);
		}
		
		server_addr2.sin_addr.s_addr = INADDR_ANY;
		
		bzero(&(server_addr2.sin_zero),8); 
		
		if (bind(sock2, (struct sockaddr *)&server_addr2, sizeof(struct sockaddr))== -1) {
			perror("\nUnable to bind\n");
			exit(1);
		}
		
		if (listen(sock2, 5) == -1) {
			perror("\nListen\n");
			exit(1);
		}
		
		//for udp connection
		server_addr3.sin_addr.s_addr = INADDR_ANY;
		//no need to do bzero for udp
		if (bind(sock3,(struct sockaddr *)&server_addr3,
			sizeof(struct sockaddr)) == -1)
		{
			perror("Bind");
			exit(1);
		}
		
		addr_len3 = sizeof(struct sockaddr);
		
		
		server_addr4.sin_addr.s_addr = INADDR_ANY;
		//no need to do bzero for udp
		if (bind(sock4,(struct sockaddr *)&server_addr4,
			sizeof(struct sockaddr)) == -1)
		{
			perror("Bind");
			exit(1);
		}
		
		addr_len4 = sizeof(struct sockaddr);
		
		printf("\nUDPServer Waiting for client third mentioned port\n");
		fflush(stdout);
		
	}
	
	else if(iamclient==1){
		printf("I am client\n");
	}
	
	if(iamclient==0){
		
		sin_size = sizeof(struct sockaddr_in);
		
		connected1 = accept(sock1, (struct sockaddr *)&client_addr1,&sin_size);
		
		printf("\n I got a connection from (%s , %d)\n",
			inet_ntoa(client_addr1.sin_addr),ntohs(client_addr1.sin_port));
		
		connected2 = accept(sock2, (struct sockaddr *)&client_addr2,&sin_size);
		
		printf("\n I got a connection from (%s , %d)\n",
			inet_ntoa(client_addr2.sin_addr),ntohs(client_addr2.sin_port));
	}
	
	pid_t pid=fork();
	
	if(pid==0){
		if(iamclient==0){
			bytes_recieved=recvfrom(sock4,recv_data,1024,0,(struct sockaddr *)&client_addr4, &addr_len4);
			printf("i am server and initially to begin communication with client i will have to get a message from client which is   ***%s***\n",recv_data);
		}
		if(iamclient==1){
			strcpy(recv_data,"in order to enable the server to send me something i client will send the server some data so that it knows my ip and port for further communications :)\n");
			printf("sending temp data to server by child process to parent udp to enable communication between two\n");
			sendto(sock3, recv_data,1024, 0,
				(struct sockaddr *)&server_addr3, sizeof(struct sockaddr));
		}
		int pidudp=fork();
		if(pidudp==0){
			
			int totalpackets=0;
			long long int seqno=0;//tells the seq no that should be received.
			//char filestored[100]='\0';
			int justonce=0;
			while(1){
				//printf("i am receiving file from client\n");

				if(iamclient==0){//i am server						
					bytes_recieved = recvfrom(sock4,recv_data,1024,0,
						(struct sockaddr *)&client_addr4, &addr_len3);
					//printf("first udp message from client to start sending him data %s\n",recv_data);
					//strcpy(recv_data,"i am server sending data to my client :P\n");
					
				}
				else if(iamclient==1){
					bytes_recieved = recvfrom(sock3,recv_data,1024,0,(struct sockaddr *)&server_addr3, &addr_len4);
					//printf("got udp data at client side :) %s\n",recv_data);
				}
				//printf("data received from client and now storing it\n");
				if(recv_data[0]=='f'){
					int num=0;
					num=(1000*(recv_data[1]-48))+(100*(recv_data[2]-48))+(10*(recv_data[3]-48))+(1*(recv_data[4]-48));
					int i;
					char filename[15];
					for(i=0;i<num;i++){
						filename[i]=recv_data[i+5];
					}
					/* filename[i]='\0';
					if(strcmp(filename,filestored)!=0){
					seqno=0;
					strcpy(filestored,filename);
					} */
					//	printf("filename received is %s\n",filename);
					
					FILE *fp;
					char temp[1000];
					strcpy(temp,"./sf2/");
					strcat(temp,filename);
					
					if(recv_data[24]=='w'){
						fp=fopen(temp,"w");
					}
					else if(recv_data[24]=='a'){
						fp=fopen(temp,"a");
					}
					num=0;
					num=(1000*(recv_data[20]-48))+(100*(recv_data[21]-48))+(10*(recv_data[22]-48))+(1*(recv_data[23]-48));
					//	printf("no of bytes of file data is %d%d%d%d\n",recv_data[20]-48,recv_data[21]-48,recv_data[22]-48,recv_data[23]-48);
					for(i=100;i<num;i++){
						//printf("%c",recv_data2[i]);
						fprintf(fp,"%c",recv_data[i]);
					}
					//fflush(stdout);
					fclose(fp);
					
				}
				else if(recv_data[0]=='a'){
					//printf("writing the file received from client\n");
					long long int recvseqno=0;
					int ii=0;
					int kk=1;
					for(ii=40;ii>=30;ii--){
						recvseqno+=(kk*(recv_data[ii]-48));
						kk=kk*10;
					}
					printf("%lld\n",recvseqno);
					if(seqno==recvseqno){
						seqno++;
						int num=0;
						num=(1000*(recv_data[1]-48))+(100*(recv_data[2]-48))+(10*(recv_data[3]-48))+(1*(recv_data[4]-48));
						int i;
						char filename[15];
						for(i=0;i<num;i++){
							filename[i]=recv_data[i+5];
						}
						/* filename[i]='\0';
						if(strcmp(filename,filestored)!=0){
						seqno=0;
						strcpy(filestored,filename);
						} */
						//	printf("filename received is %s\n",filename);
						
						FILE *fp;
						char temp[1000];
						strcpy(temp,"./sf2/");
						strcat(temp,filename);
						
						if(recv_data[24]=='w'){
							fp=fopen(temp,"w");
						}
						else if(recv_data[24]=='a'){
							fp=fopen(temp,"a");
						}
						num=0;
						num=(1000*(recv_data[20]-48))+(100*(recv_data[21]-48))+(10*(recv_data[22]-48))+(1*(recv_data[23]-48));
						//	printf("no of bytes of file data is %d%d%d%d\n",recv_data[20]-48,recv_data[21]-48,recv_data[22]-48,recv_data[23]-48);
						for(i=100;i<num;i++){
							//printf("%c",recv_data2[i]);
							fprintf(fp,"%c",recv_data[i]);
						}
						//fflush(stdout);
						fclose(fp);
						printf("sending tcp ack by client\n");
						char ack[10];
						if(num!=100){
							ack[0]='y';ack[1]='e';ack[2]='s';ack[3]='\0';
						}
						else if(num==100){
							ack[0]='e';ack[1]='n';ack[2]='d';ack[3]='\0';
							seqno=0;
						}
						if(iamclient==0){
							send(connected2,ack,1024,0);
						}
						else if(iamclient==1){
							
							send(sock1,ack,1024,0);
						}
					}
				}
				else if(strcmp(recv_data,"c q")==0){
					_exit(0);
				}
				else{
					printf("got udp data by udp client %s\n",recv_data);
				}
			}
			exit(0);
		}
		else{//this is the process that gets the commands from the command line
			//printf("iamclient in child %d\n",iamclient);
			while(1){
				
				printf("enter the command to be executed:");
				fflush(stdout);
				gets(send_data);
				
				char send_t[1024];
				send_t[0]='c';
				send_t[1]=' ';
				int i=0;
				while(send_data[i]!='\0'){
					send_t[i+2]=send_data[i];
					i++;
				}
				send_t[i+2]='\0';
				
				if(strncmp(send_data,"udp",3)==0){
					printf("sending a udp message\n");
					if(iamclient==0){
						printf("*** sending see if client has received something\n");
						sendto(sock4, send_data,1024, 0,
							(struct sockaddr *)&client_addr4, sizeof(struct sockaddr));
					}
					if(iamclient==1){
						printf("sending data to server i am client\n");
						sendto(sock3, send_data, 1024, 0,
							(struct sockaddr *)&server_addr3, sizeof(struct sockaddr));
					}
				}
				else if(strcmp(send_data,"q")==0){
					printf("yes got q\n");
					if(iamclient==0){
						sendto(sock4,send_t,1024, 0,
							(struct sockaddr *)&client_addr4, sizeof(struct sockaddr));
					}
					else if(iamclient==1){
						//printf("sending data to server i am client\n");
						sendto(sock3, send_t, 1024, 0,
							(struct sockaddr *)&server_addr3, sizeof(struct sockaddr));
					}
					if(iamclient==0){
						send(connected2,send_t,1024,0);
					}
					else if(iamclient==1){
						send(sock1,send_t,1024,0);
					}
					kill(pidudp,SIGKILL);
					kill(getppid(),SIGKILL);
					_exit(0);
				}
				printf("command got is %s\n",send_data);
				command commands[100];
				int k;
				parse(send_data,commands,&k);
				if(strcmp(commands[0].s , "Gt") == 0  && strcmp(commands[1].s , "rx") == 0 && k==3 ){
					if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
						send(connected2,send_t,1024,0);
					}
					else if(iamclient==1){
						send(sock1,send_t,1024,0);
					}
					while(1){
						int i=2;
						int check=0;
						if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
							recv(connected2,recv_data,1024,0);
						}
						else if(iamclient==1){
							recv(sock1,recv_data,1024,0);
						}
						if(recv_data[0]=='0'){
							break;
						}
						else{
							printf("%c",recv_data[1]);
							fflush(stdout);
							while(recv_data[i]!=0){
								if(recv_data[i]==' ')
									check++;
								if(check==0){
									i++;
									continue;
								}
								printf("%c",recv_data[i]);
								fflush(stdout);
								i++;
							}
							printf("\n");
						}
					}
					k=0;
					fflush(stdout);
				}
				else if(strcmp(commands[0].s , "Gt") == 0  && strcmp(commands[1].s , "sl") == 0 && k==6 ){
					if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
						send(connected2,send_t,1024,0);
					}
					else if(iamclient==1){
						send(sock1,send_t,1024,0);
					}
					while(1){
						int i=2;
						int check=0;
						if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
							recv(connected2,recv_data,1024,0);
						}
						else if(iamclient==1){
							recv(sock1,recv_data,1024,0);
						}
						if(recv_data[0]=='0'){
							break;
						}
						else{
							printf("%c",recv_data[1]);
							fflush(stdout);
							while(recv_data[i]!=0){
								if(recv_data[i]==' ')
									check++;
								if(check==0){
									i++;
									continue;
								}
								printf("%c",recv_data[i]);
								fflush(stdout);
								i++;
								
								
							}
							printf("\n");
						}
					}
					k=0;
					fflush(stdout);
				}
				else if(k==2){
					/*---------------akhil starts-----------------*/
					if(strcmp(commands[0].s , "Gt") == 0  && strcmp(commands[1].s,"ll")==0 ){
						if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
							send(connected2,send_t,1024,0);
						}
						else if(iamclient==1){
							send(sock1,send_t,1024,0);
						}
						while(1){
							int i=2;
							int check=0;
							if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
								recv(connected2,recv_data,1024,0);
							}
							else if(iamclient==1){
								recv(sock1,recv_data,1024,0);
							}
							if(recv_data[0]=='0'){
								break;
							}
							else{
								printf("%c",recv_data[1]);
								fflush(stdout);
								while(recv_data[i]!=0){
									if(recv_data[i]==' ')
										check++;
									if(check==0){
										i++;
										continue;
									}
									printf("%c",recv_data[i]);
									fflush(stdout);
									i++;
									
								}
								printf("\n");
								//      printf("%s\n",recv_data);
							}
						}
						k=0;
						fflush(stdout);
					}
					/*------------------------------akhil ends-----------------------------*/
					//{{{ 
					else if(strcmp(commands[0].s , "fh") == 0  && (strcmp(commands[1].s,"c")==0 )){
						if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
							send(connected2,send_t,1024,0);
						}
						else if(iamclient==1){
							send(sock1,send_t,1024,0);
						}
						while(1){
							if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
								recv(connected2,recv_data,1024,0);
							}
							else if(iamclient==1){
								recv(sock1,recv_data,1024,0);						
							}
							if(recv_data[0]=='0'){
								break;
							}
							else{
								printf("%s",recv_data);
							}
						}
						k=0;
						fflush(stdout);
					}
					else{
						if(iamclient==0){
							send(connected2,send_t,1024, 0); 							
						}
						else if(iamclient==1){
							send(sock1,send_t,1024,0);
						}
					}
					//}}}
				}
				else if(k==4){
					if(strcmp(commands[0].s,"fu")==0 && strcmp(commands[2].s,"udp")==0 && strcmp(commands[3].s,"ack")==0){
						int pidackudp=fork();
						if(pidackudp==0){
							char t[1024];
							t[0]='a';
							int len=strlen(commands[1].s);
							int leng=len,a,b,c,d;
							a=leng%10;leng/=10;
							b=leng%10;leng/=10;
							c=leng%10;leng/=10;
							d=leng%10;leng/=10;
							t[1]=d+48;
							t[2]=c+48;
							t[3]=b+48;
							t[4]=a+48;
							a=0;
							while(commands[1].s[a]!=0){
								t[5+a]=commands[1].s[a];
								a++;
							}
							t[5+a]='\0';
							
							char temp[1000];
							strcpy(temp,"./sf1/");
							strcat(temp,commands[1].s);
							printf("file name is %s\n",temp);
							FILE *fp;
							fp=fopen(temp,"r");
							char ch;
							int check=0;
							int ct=100;
							long long int seqno=0;
							while(fscanf(fp,"%c",&ch)!=EOF)
							{   
								FILE *fpensure;
								fpensure=fopen("ensure.txt","w");
								fprintf(fpensure,"wait");
								fclose(fpensure);
								t[ct]=ch;
								if(ct==1023)
								{   
									t[20]='1';
									t[21]='0';
									t[22]='2';
									t[23]='4';
									if(check==0){
										t[24]='w';
										check=1;
									}
									else{
										t[24]='a';
									}
									long long int seq_temp=seqno;
									
									int ii=0;
									
									for(ii=30;ii<=40;ii++){
										t[ii]=48;
									}
									ii=0;
									while(seq_temp!=0){
										t[40-ii]=seq_temp%10 + 48;
										seq_temp=seq_temp/10;
										ii++;
									}
									//printf("sent bytes->%d\n",ct);
									/* if(strcmp(commands[2].s , "tcp") ==0){
									if(iamclient==0){
									send(connected1,t,1024, 0);
									}
									else if(iamclient==1){
									send(sock2,t,1024, 0); 
									}										
									} */
									printf("seq no is ->>>>>>>>>>>>>>>>>>>>%lld\n",seqno);
									while(1){
										fflush(stdout);
										FILE *fp;
										fp=fopen("ensure.txt","r");
										char s[100];
										fscanf(fp,"%s",s);
										
										fclose(fp);
										fflush(stdout);
										if(strcmp(s,"gonext")==0){
											printf("breaking\n");
											break;
										}
										else{
											printf("%s->>>\n",s);
											if(iamclient==0){
												sendto(sock4, t,1024, 0,
													(struct sockaddr *)&client_addr4, sizeof(struct sockaddr));
											}
											if(iamclient==1){
												//printf("sending data to server i am client\n");
												sendto(sock3, t, 1024, 0,
													(struct sockaddr *)&server_addr3, sizeof(struct sockaddr));
											}
											//sleep(1);
										}
									}
									seqno++;
									ct=100;
								}
								else{
									ct++;
								}
							}   
							if(ct!=100)
							{
								int a,b,c,d,tt=ct;
								a=tt%10;tt=tt/10;
								b=tt%10;tt=tt/10;
								c=tt%10;tt=tt/10;
								d=tt%10;
								t[20]=d+48;
								t[21]=c+48;
								t[22]=b+48;
								t[23]=a+48;
								if(check==0){
									t[24]='w';
									check=1;
								}
								else{
									t[24]='a';
								}
								printf("sending the last packet by server to client->%d %c%c%c%c\n",ct,t[20],t[21],t[22],t[23]);
								long long int seq_temp=seqno;
								
								int ii=0;
								
								for(ii=30;ii<=40;ii++){
									t[ii]=48;
								}
								ii=0;
								while(seq_temp!=0){
									t[40-ii]=seq_temp%10 + 48;
									seq_temp=seq_temp/10;
									ii++;
								}
								/* if(strcmp(commands[2].s , "tcp") ==0){
								if(iamclient==0){
								send(connected1,t,1024, 0); 
								}
								else if(iamclient==1){
								send(sock2,t,1024, 0); 
								}
								} */
								while(1){
									FILE *fp;
									fp=fopen("ensure.txt","r");
									char s[100];
									fscanf(fp,"%s",s);
									fclose(fp);
									if(strcmp(s,"gonext")==0){
										break;
									}
									else{
										if(iamclient==0){
											sendto(sock4, t,1024, 0,
												(struct sockaddr *)&client_addr4, sizeof(struct sockaddr));
										}
										if(iamclient==1){
											//printf("sending data to server i am client\n");
											sendto(sock3, t, 1024, 0,
												(struct sockaddr *)&server_addr3, sizeof(struct sockaddr));
										}
										//sleep(1);
									}
								}
								seqno++;
								ct=100;
							}
							fclose(fp);
							FILE *fpensure;
							fpensure=fopen("ensure.txt","w");
							fprintf(fpensure,"wait");
							fclose(fpensure);
							//sending the last packet for notification
							t[20]='0';
							t[21]='1';
							t[22]='0';
							t[23]='0';
							t[24]='a';
							
							long long int seq_temp=seqno;
							
							int ii=0;
							
							for(ii=30;ii<=40;ii++){
								t[ii]=48;
							}
							ii=0;
							while(seq_temp!=0){
								t[40-ii]=seq_temp%10 + 48;
								seq_temp=seq_temp/10;
								ii++;
							}
							while(1){
								FILE *fp;
								fp=fopen("ensure.txt","r");
								char s[100];
								fscanf(fp,"%s",s);
								fclose(fp);
								if(strcmp(s,"gonext")==0){
									break;
								}
								else{
									if(iamclient==0){
										sendto(sock4, t,1024, 0,
											(struct sockaddr *)&client_addr4, sizeof(struct sockaddr));
									}
									if(iamclient==1){
										//printf("sending data to server i am client\n");
										sendto(sock3, t, 1024, 0,
											(struct sockaddr *)&server_addr3, sizeof(struct sockaddr));
									}
									//sleep(1);
								}
							}
							seqno++;
							ct=100;
							exit(0);
						}
						else{
							while(1){
								printf("ensuring udp data\n");
								char ack[1024];
								if(iamclient==0){
									recv(connected2,ack,1024,0);
								}
								else if(iamclient==1){
									recv(sock1,ack,1024,0);
								}
								FILE *fp;
								fp=fopen("ensure.txt","w");
								fprintf(fp,"gonext");
								fclose(fp);
								if(strcmp(ack,"end")==0){
									break;
								}
							}
						}
					}
					else{
						if(iamclient==0){
							send(connected2,send_t,1024, 0); 							
						}
						else if(iamclient==1){
							send(sock1,send_t,1024,0);
						}
					}
				}
				else if(k==3){//tell the 1) filedownload command,2) file name and 3) whether transfer is through upd or tcp
					//i am server and sending file to the client which i found by reading the command i got from the client
					if(strcmp(commands[0].s , "fh") == 0  && (strcmp(commands[1].s,"v")==0 )){
						int x;
						fflush(stdout);
						if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
							send(connected2,send_t,1024,0);
							x=recv(connected2,recv_data,1024,0);
						}
						else if(iamclient==1){
							send(sock1,send_t,1024,0);
							x=recv(sock1,recv_data,1024,0);						
						}
						if(recv_data[0]=='x'){
							printf("Sorry the requested file is not there.\n");
						}
						else{
							printf("%s\n",recv_data);
						}
						k=0;
						fflush(stdout);
					}
					else if(strcmp(commands[0].s , "fd") == 0  && (strcmp(commands[2].s,"tcp")==0 || strcmp(commands[2].s,"udp")==0)){
						if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
							send(connected2,send_t,1024,0);
						}
						else if(iamclient==1){
							send(sock1,send_t,1024,0);
						}
						if(strcmp(commands[2].s,"tcp")==0){
							while(1){
								if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
									recv(connected2,recv_data,1024,0);
								}
								else if(iamclient==1){
									recv(sock1,recv_data,1024,0);
								}
								if(recv_data[0]=='x'){
									printf("Sorry-----Try again\n");
									break;
								}
								else if(recv_data[0]=='f'){
									int num=0;
									num=(1000*(recv_data[1]-48))+(100*(recv_data[2]-48))+(10*(recv_data[3]-48))+(1*(recv_data[4]-48));
									int i;
									char filename[15];
									for(i=0;i<num;i++){
										filename[i]=recv_data[i+5];
									}
									filename[i]='\0';
									
									FILE *fp;
									char temp[1000];
									strcpy(temp,"./sf2/");
									strcat(temp,filename);
									
									if(recv_data[24]=='w'){
										fp=fopen(temp,"w");
									}
									else if(recv_data[24]=='a'){
										fp=fopen(temp,"a");
									}
									num=0;
									num=(1000*(recv_data[20]-48))+(100*(recv_data[21]-48))+(10*(recv_data[22]-48))+(1*(recv_data[23]-48));
									for(i=100;i<num;i++){
										fprintf(fp,"%c",recv_data[i]);
									}
									fclose(fp);
									if(num==100){
										break;
									}
								}
							}
						}
						fflush(stdout);
					}
					else if(strcmp(commands[0].s , "fu") == 0){
						printf("sending the file data\n");	
						char t[1024];
						t[0]='f';
						int len=strlen(commands[1].s);
						int leng=len,a,b,c,d;
						a=leng%10;leng/=10;
						b=leng%10;leng/=10;
						c=leng%10;leng/=10;
						d=leng%10;leng/=10;
						t[1]=d+48;
						t[2]=c+48;
						t[3]=b+48;
						t[4]=a+48;
						a=0;
						while(commands[1].s[a]!=0){
							t[5+a]=commands[1].s[a];
							a++;
						}
						t[5+a]='\0';
						
						char temp[1000];
						strcpy(temp,"./sf1/");
						strcat(temp,commands[1].s);
						printf("file name is %s\n",temp);

						FILE *fp;
						fp=fopen(temp,"r");
						if(fp==NULL){
							printf("sorry file does not exist\n");
						}
						else{
							char ch;
							int check=0;
							int ct=100;
							while(fscanf(fp,"%c",&ch)!=EOF)
							{   
								t[ct]=ch;
								if(ct==1023)
								{   
									t[20]='1';
									t[21]='0';
									t[22]='2';
									t[23]='4';
									if(check==0){
										t[24]='w';
										check=1;
									}
									else{
										t[24]='a';
									}
									//printf("sent bytes->%d\n",ct);
									if(strcmp(commands[2].s , "tcp") ==0){
										if(iamclient==0){
											send(connected2,t,1024, 0);
										}
										else if(iamclient==1){
											send(sock1,t,1024, 0); 
										}										
									}
									else if(strcmp(commands[2].s , "udp") ==0){
										if(iamclient==0){
											sendto(sock4, t,1024, 0,
												(struct sockaddr *)&client_addr4, sizeof(struct sockaddr));
										}
										if(iamclient==1){
											//printf("sending data to server i am client\n");
											sendto(sock3, t, 1024, 0,
												(struct sockaddr *)&server_addr3, sizeof(struct sockaddr));
										}
									}
									ct=100;
								}
								else{
									ct++;
								}
							}   
							if(ct!=100)
							{
								int a,b,c,d,tt=ct;
								a=tt%10;tt=tt/10;
								b=tt%10;tt=tt/10;
								c=tt%10;tt=tt/10;
								d=tt%10;
								t[20]=d+48;
								t[21]=c+48;
								t[22]=b+48;
								t[23]=a+48;
								if(check==0){
									t[24]='w';
									check=1;
								}
								else{
									t[24]='a';
								}
								printf("sending the last packet by server to client->%d %c%c%c%c\n",ct,t[20],t[21],t[22],t[23]);
								if(strcmp(commands[2].s , "tcp") ==0){
									if(iamclient==0){
										send(connected2,t,1024, 0); 
									}
									else if(iamclient==1){
										send(sock1,t,1024, 0); 
									}
								}
								else if(strcmp(commands[2].s , "udp") ==0){
									if(iamclient==0){
										printf("yes*****\n");
										sendto(sock4, t,1024, 0,
											(struct sockaddr *)&client_addr4, sizeof(struct sockaddr));
									}
									if(iamclient==1){
										printf("sending data to server i am client\n");
										sendto(sock3, t, 1024, 0,
											(struct sockaddr *)&server_addr3, sizeof(struct sockaddr));
									}							
								}
								ct=100;
							}
							fclose(fp);
						}
					}
					else{
						if(iamclient==0){
							send(connected2,send_t,1024, 0); 							
						}
						else if(iamclient==1){
							send(sock1,send_t,1024,0);
						}
					}
				}
				else{
					if(iamclient==0){
						send(connected2,send_t,1024, 0); 							
					}
					else if(iamclient==1){
						send(sock1,send_t,1024,0);
					}
				}
				
			}
			
		}
	}
	//here is tdp udp sending...
	else{
		if(iamclient==1){
			strcpy(recv_data,"in order to enable the server to send me something i client will send the server some data so that it knows my ip and port for further communications :)\n");
			printf("sending temp data to server\n");
			sendto(sock4, recv_data,1024, 0,
				(struct sockaddr *)&server_addr4, sizeof(struct sockaddr));
		}
		if(iamclient==0){//i am server						
			bytes_recieved = recvfrom(sock3,recv_data,1024,0,
				(struct sockaddr *)&client_addr3, &addr_len3);
			printf("first udp message from client to start sending him data %s\n",recv_data);
			//strcpy(recv_data,"i am server sending data to my client :P\n");
			
		}
		//printf("iamclient before fork %d\n",iamclient);		
		int pid2=fork();
		//{{{
		if(pid2==0){
			
			int totalpackets=0;
			long long int seqno=0;//tells the seq no that should be received.
			//printf("iamclient %d\n",iamclient);
			
			//here is udp sending of data
			while(1){
				//printf("i am receiving file from client\n");
				if(iamclient==0){//i am server						
					bytes_recieved = recvfrom(sock3,recv_data,1024,0,
						(struct sockaddr *)&client_addr3, &addr_len3);
					//printf("first udp message from client to start sending him data %s\n",recv_data);
					//strcpy(recv_data,"i am server sending data to my client :P\n");		
				}
				else if(iamclient==1){
					bytes_recieved = recvfrom(sock4,recv_data,1024,0,(struct sockaddr *)&server_addr4, &addr_len4);
					//printf("got udp data at client side :) %s\n",recv_data);
				}
				if(strcmp(recv_data,"c q")==0){
					kill(pid,SIGKILL);
					exit(0);
				}
				//printf("data received from client and now storing it\n");
				if(recv_data[0]=='f'){
					//printf("writing the file received from client\n");
					int num=0;
					num=(1000*(recv_data[1]-48))+(100*(recv_data[2]-48))+(10*(recv_data[3]-48))+(1*(recv_data[4]-48));
					//	printf("num of chars in file name are %d%d%d%d\n",recv_data[1]-48,recv_data[2]-48,recv_data[3]-48,recv_data[4]-48);
					int i;
					char filename[15];
					for(i=0;i<num;i++){
						filename[i]=recv_data[i+5];
					}
					filename[i]='\0';
					//	printf("filename received is %s\n",filename);
					
					FILE *fp;
					char temp[1000];
					strcpy(temp,"./sf2/");
					strcat(temp,filename);
					
					if(recv_data[24]=='w'){
						fp=fopen(temp,"w");
					}
					else if(recv_data[24]=='a'){
						fp=fopen(temp,"a");
					}
					num=0;
					num=(1000*(recv_data[20]-48))+(100*(recv_data[21]-48))+(10*(recv_data[22]-48))+(1*(recv_data[23]-48));
					//	printf("no of bytes of file data is %d%d%d%d\n",recv_data[20]-48,recv_data[21]-48,recv_data[22]-48,recv_data[23]-48);
					for(i=100;i<num;i++){
						//printf("%c",recv_data2[i]);
						fprintf(fp,"%c",recv_data[i]);
					}
					//fflush(stdout);
					fclose(fp);
				}
				else if(recv_data[0]=='a'){
					//printf("writing the file received from client\n");
					long long int recvseqno=0;
					int ii=0;
					int kk=1;
					for(ii=40;ii>=30;ii--){
						recvseqno+=(kk*(recv_data[ii]-48));
						kk=kk*10;
					}
					printf("%lld\n",recvseqno);
					if(seqno==recvseqno){
						seqno++;
						int num=0;
						num=(1000*(recv_data[1]-48))+(100*(recv_data[2]-48))+(10*(recv_data[3]-48))+(1*(recv_data[4]-48));
						int i;
						char filename[15];
						for(i=0;i<num;i++){
							filename[i]=recv_data[i+5];
						}
						/* filename[i]='\0';
						if(strcmp(filename,filestored)!=0){
						seqno=0;
						strcpy(filestored,filename);
						} */
						//	printf("filename received is %s\n",filename);
						
						FILE *fp;
						char temp[1000];
						strcpy(temp,"./sf2/");
						strcat(temp,filename);
						
						if(recv_data[24]=='w'){
							fp=fopen(temp,"w");
						}
						else if(recv_data[24]=='a'){
							fp=fopen(temp,"a");
						}
						num=0;
						num=(1000*(recv_data[20]-48))+(100*(recv_data[21]-48))+(10*(recv_data[22]-48))+(1*(recv_data[23]-48));
						//	printf("no of bytes of file data is %d%d%d%d\n",recv_data[20]-48,recv_data[21]-48,recv_data[22]-48,recv_data[23]-48);
						for(i=100;i<num;i++){
							//printf("%c",recv_data2[i]);
							fprintf(fp,"%c",recv_data[i]);
						}
						//fflush(stdout);
						fclose(fp);
						printf("sending tcp ack by client\n");
						char ack[10];
						if(num!=100){
							ack[0]='y';ack[1]='e';ack[2]='s';ack[3]='\0';
						}
						else if(num==100){
							ack[0]='e';ack[1]='n';ack[2]='d';ack[3]='\0';
							seqno=0;
						}
						if(iamclient==0){
							send(connected1,ack,1024,0);
						}
						else if(iamclient==1){
							
							send(sock2,ack,1024,0);
						}
					}
				}
				else{
					printf("got udp data by udp client %s\n",recv_data);
				}
			}
			exit(0);
		}
		
		//}}}
		//here begin tcp protocol
		else{
			printf("\ni am client = %d\n",iamclient);
			while(1){
				//printf("i am receiving file from client\n");
				if(iamclient==0){
					bytes_recieved = recv(connected1,recv_data,1024,0);
				}
				else if(iamclient==1){
					bytes_recieved=recv(sock2,recv_data,1024,0);
				}
				if(strcmp(recv_data,"c q")==0){
					kill(pid,SIGKILL);
					exit(0);
				}
				if(recv_data[0]=='f'){
					int num=0;
					num=(1000*(recv_data[1]-48))+(100*(recv_data[2]-48))+(10*(recv_data[3]-48))+(1*(recv_data[4]-48));
					int i;
					char filename[15];
					for(i=0;i<num;i++){
						filename[i]=recv_data[i+5];
					}
					filename[i]='\0';
					
					FILE *fp;
					char temp[1000];
					strcpy(temp,"./sf2/");
					strcat(temp,filename);
					
					if(recv_data[24]=='w'){
						fp=fopen(temp,"w");
					}
					else if(recv_data[24]=='a'){
						fp=fopen(temp,"a");
					}
					num=0;
					num=(1000*(recv_data[20]-48))+(100*(recv_data[21]-48))+(10*(recv_data[22]-48))+(1*(recv_data[23]-48));
					for(i=100;i<num;i++){
						fprintf(fp,"%c",recv_data[i]);
					}
					fclose(fp);
				}
				else if(recv_data[0]=='c'){
					recv_data[0]=' ';
					command commands[100];
					int k;
					parse(recv_data,commands,&k);
					if(k==3 && strcmp(commands[0].s,"Gt")==0 && strcmp(commands[1].s , "rx") == 0){
						char a[1000];
						sprintf(a,"ls -al sf1/%s | awk '{ print $1 \" \" $5 \" \" $6 \" \" $7 \" \" $8 \" \" $9 }'  > fh.txt",commands[2].s);
						fflush(stdout);
						system(a);
						int i=1;
						char temp[1000];
						FILE *fp1;
						int check=0;
						char ch; 
						fp1 = fopen("fh.txt","r");
						while(fscanf(fp1,"%c",&ch)!=EOF){
							if(ch=='\n'){
								temp[i]='\0';
								temp[0]='1'; // flag indicating that it is part of ls
								if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
									send(connected1,temp,1024,0);
								}
								else if(iamclient==1){
									send(sock2,temp,1024,0);
								}
								i=1;
							}
							else{
								temp[i]=ch;
								i++;
							}
						}
						fclose(fp1);
						temp[0]='0';
						if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
							send(connected1,temp,1024,0);
						}
						else if(iamclient==1){
							send(sock2,temp,1024,0);
						}
						
					}
					else if(k==6 && strcmp(commands[0].s,"Gt")==0 && strcmp(commands[1].s , "sl") == 0){
						char a[1000];
						sprintf(a,"ls --full-time sf1 | awk '{ print $1 \" \" $5 \" \" $6 \" \" $7 \" \" $9 }'  > fh.txt");
						system(a);
						int i=1;
						char temp[1000];
						FILE *fp1;
						int check=0;
						char ch; 
						command tuple[100];
						fp1 = fopen("fh.txt","r");
						while(fscanf(fp1,"%c",&ch)!=EOF){
							if(ch=='\n'){
								temp[i]='\0';
								int ta;
								parse(temp,tuple,&ta);
								if(strcmp(tuple[1].s,commands[2].s)>0 || strcmp(tuple[2].s,commands[3].s)>0 || strcmp(tuple[1].s,commands[4].s)<0 || strcmp(tuple[2].s,commands[5].s)<0){
									i++;
									continue;
								}
								temp[0]='1'; // flag indicating that it is part of ls
								if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
									send(connected1,temp,1024,0);
								}
								else if(iamclient==1){
									send(sock2,temp,1024,0);
								}
								i=1;
							}
							else{
								temp[i]=ch;
								i++;
							}
						}
						fclose(fp1);
						temp[0]='0';
						if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
							send(connected1,temp,1024,0);
						}
						else if(iamclient==1){
							send(sock2,temp,1024,0);
						}
						
					}
					
					else if(k==2){
						/*------------------------akhil starts-----------------*/
						if(strcmp(commands[0].s , "Gt") == 0  && (strcmp(commands[1].s,"ll")==0 )){
							char a[1000];
							sprintf(a,"ls -al sf1 | awk '{ print $1 \" \" $6 \" \" $7 \" \" $8 \" \" $9 }'  > fh.txt");
							system(a);
							int i=1;
							char temp[1000];
							FILE *fp1;
							int check=0;
							char ch; 
							fp1 = fopen("fh.txt","r");
							while(fscanf(fp1,"%c",&ch)!=EOF){
								if(ch=='\n'){
									temp[i]='\0';
									if(check==0){
										check++;
										i=1; 
										continue;
									}            
									temp[0]='1'; // flag indicating that it is part of ls
									if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
										send(connected1,temp,1024,0);
									}
									else if(iamclient==1){
										send(sock2,temp,1024,0);
									}
									i=1;
								}
								else{
									temp[i]=ch;
									i++;
								}
							}
							fclose(fp1);
							temp[0]='0';
							if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
								send(connected1,temp,1024,0);
							}
							else if(iamclient==1){
								send(sock2,temp,1024,0);
							}
						}
						/*------------------------akhil ends-----------------*/
						else if(strcmp(commands[0].s , "fh") == 0  && (strcmp(commands[1].s,"c")==0 )){
							char parent_a[1000];
							sprintf(parent_a,"ls -al sf1 | awk '{ print $1 \" \" $9 }'  > fh1.txt");
							system(parent_a);
							char parent_ch;
							char parent_temp[1000];
							int parent_i=0;
							command tuple[100];
							FILE *fp1;
							int check=0;
							fp1=fopen("fh1.txt","r");
							while(fscanf(fp1,"%c",&parent_ch)!=EOF){
								if(parent_ch=='\n'){
									parent_temp[parent_i]='\0';
									if(check==0){
										parent_i=0;
										check++;
										continue;
									}
									if(parent_temp[0]=='d'){
										parent_i=0;
										continue;
									}	
									int k;
									parse(parent_temp,tuple,&k);
									
									char a[1000];
									char temp[1000];
									strcpy(temp,"./sf1/");
									strcat(temp,tuple[1].s);								
									sprintf(a,"md5sum %s > fh.txt",temp);//this has to be a particular place.
									system(a);
									char b[1000];
									sprintf(b,"ls -al %s| awk '{ print $6 \" \" $7 \" \" $8 }'  >> fh.txt",temp);
									system(b);
									FILE *fp=fopen("fh.txt","r");
									char t[1024];
									int i=1;
									t[0]='1';//keep receiving
									char ch;
									while(fscanf(fp,"%c",&ch)!=EOF){
										t[i]=ch;
										i++;
									}
									fclose(fp);
									t[i]='\0';	
									if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
										send(connected1,t,1024,0);
									}
									else if(iamclient==1){
										send(sock2,t,1024,0);					
									}
									
									parent_i=0;
								}
								else{
									parent_temp[parent_i]=parent_ch;
									parent_i++;
								}
							}
							fclose(fp1);
							char t[1024];
							t[0]='0';//means end receiving
							if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
								send(connected1,t,1024,0);
							}
							else if(iamclient==1){
								send(sock2,t,1024,0);					
							}
						}
						else{
							printf("got tcp data %s\n",recv_data);
							printf("enter the command to be executed:");
							fflush(stdout);
							
						}
					}
					else if(k==3){
						/*------------------------akhil starts-----------------*/
						
						/*------------------------akhil ends-----------------*/
						
						if(strcmp(commands[0].s , "fh") == 0  && (strcmp(commands[1].s,"v")==0 )){
							char a[1000];
							char temp[1000];
							strcpy(temp,"./sf1/");
							strcat(temp,commands[2].s);
							FILE *fps;
							fps = fopen(temp,"r");
							if(fps==NULL){
								char t[1024];
								t[0]='x';
								if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
									send(connected1,t,1024,0);
								}
								else if(iamclient==1){
									send(sock2,t,1024,0);					
								}
							}
							else{
								fclose(fps);
							sprintf(a,"md5sum %s > fh.txt",temp);//this has to be a particular place.
							system(a);
							char b[1000];
							sprintf(b,"ls -al %s| awk '{ print $6 \" \" $7 \" \" $8 }'  >> fh.txt",temp);
							system(b);
							FILE *fp=fopen("fh.txt","r");
							char t[1024];
							int i=0;
							char ch;
							while(fscanf(fp,"%c",&ch)!=EOF){
								t[i]=ch;
								i++;
							}
							fclose(fp);
							t[i]='\0';	
							if(iamclient==0){//i am server trying to download file so i will send client the command and go into receiving mode for the file :)
								send(connected1,t,1024,0);
							}
							else if(iamclient==1){
								send(sock2,t,1024,0);					
							}
							}
						}
						else if(strcmp(commands[0].s,"fd")==0 && (strcmp(commands[2].s,"tcp")==0 || strcmp(commands[2].s,"udp")==0)){
							printf("sending the file data\n");
							char t[1024];
							t[0]='f';
							int len=strlen(commands[1].s);
							int leng=len,a,b,c,d;
							a=leng%10;leng/=10;
							b=leng%10;leng/=10;
							c=leng%10;leng/=10;
							d=leng%10;leng/=10;
							t[1]=d+48;
							t[2]=c+48;
							t[3]=b+48;
							t[4]=a+48;
							a=0;
							while(commands[1].s[a]!=0){
								t[5+a]=commands[1].s[a];
								a++;
							}
							t[5+a]='\0';
							
							char temp[1000];
							strcpy(temp,"./sf1/");
							strcat(temp,commands[1].s);
							printf("file name is %s\n",temp);
							FILE *fp;
							fp=fopen(temp,"r");
							if(fp==NULL){
								char t[1024];
								t[0]='x';
								if(iamclient==0){
									send(connected1,t,1024, 0); 
								}
								else if(iamclient==1){
									send(sock2,t,1024, 0); 
								}
							}
							else{
								char ch;
								int check=0;
								int ct=100;
								while(fscanf(fp,"%c",&ch)!=EOF)
								{   
									t[ct]=ch;
									if(ct==1023)
									{   
										t[20]='1';
										t[21]='0';
										t[22]='2';
										t[23]='4';
										if(check==0){
											t[24]='w';
											check=1;
										}
										else{
											t[24]='a';
										}
										//printf("sent bytes->%d\n",ct);
										if(strcmp(commands[2].s , "tcp") ==0){
											if(iamclient==0){
												send(connected1,t,1024, 0);
											}
											else if(iamclient==1){
												send(sock2,t,1024, 0); 
											}										
										}
										else if(strcmp(commands[2].s , "udp") ==0){
											if(iamclient==0){
												sendto(sock3, t,1024, 0,
													(struct sockaddr *)&client_addr3, sizeof(struct sockaddr));
											}
											if(iamclient==1){
												//printf("sending data to server i am client\n");
												sendto(sock4, t, 1024, 0,
													(struct sockaddr *)&server_addr4, sizeof(struct sockaddr));
											}
										}
										ct=100;
									}
									else{
										ct++;
									}
								}   
								if(ct!=100)
								{
									int a,b,c,d,tt=ct;
									a=tt%10;tt=tt/10;
									b=tt%10;tt=tt/10;
									c=tt%10;tt=tt/10;
									d=tt%10;
									t[20]=d+48;
									t[21]=c+48;
									t[22]=b+48;
									t[23]=a+48;
									if(check==0){
										t[24]='w';
										check=1;
									}
									else{
										t[24]='a';
									}
									printf("sending the last packet by server to client->%d %c%c%c%c\n",ct,t[20],t[21],t[22],t[23]);
									if(strcmp(commands[2].s , "tcp") ==0){
										if(iamclient==0){
											send(connected1,t,1024, 0); 
										}
										else if(iamclient==1){
											send(sock2,t,1024, 0); 
										}
									}
									
									else if(strcmp(commands[2].s , "udp") ==0){
										if(iamclient==0){
											printf("yes*****\n");
											sendto(sock3, t,1024, 0,
												(struct sockaddr *)&client_addr3, sizeof(struct sockaddr));
										}
										if(iamclient==1){
											printf("sending data to server i am client\n");
											sendto(sock4, t, 1024, 0,
												(struct sockaddr *)&server_addr4, sizeof(struct sockaddr));
										}							
									}
									
									ct=100;
								}
								fclose(fp);
								if(strcmp(commands[2].s , "tcp") ==0){
									//sending the last packet for notification
									t[20]='0';
									t[21]='1';
									t[22]='0';
									t[23]='0';
									t[24]='a';
									if(iamclient==0){
										send(connected1,t,1024, 0); 
									}
									else if(iamclient==1){
										send(sock2,t,1024, 0); 
									}
								}
							}
						}
						else{
							printf("got tcp data %s\n",recv_data);
							printf("enter the command to be executed:");
							fflush(stdout);
							
						}
					}
					else if(k==4){
						if(strcmp(commands[0].s,"fd")==0 && strcmp(commands[2].s,"udp")==0 && strcmp(commands[3].s,"ack")==0){
							int pidackudp=fork();
							if(pidackudp==0){
								char t[1024];
								t[0]='a';
								int len=strlen(commands[1].s);
								int leng=len,a,b,c,d;
								a=leng%10;leng/=10;
								b=leng%10;leng/=10;
								c=leng%10;leng/=10;
								d=leng%10;leng/=10;
								t[1]=d+48;
								t[2]=c+48;
								t[3]=b+48;
								t[4]=a+48;
								a=0;
								while(commands[1].s[a]!=0){
									t[5+a]=commands[1].s[a];
									a++;
								}
								t[5+a]='\0';
								
								char temp[1000];
								strcpy(temp,"./sf1/");
								strcat(temp,commands[1].s);
								printf("file name is %s\n",temp);
								FILE *fp;
								fp=fopen(temp,"r");
								char ch;
								int check=0;
								int ct=100;
								long long int seqno=0;
								while(fscanf(fp,"%c",&ch)!=EOF)
								{   
									FILE *fpensure;
									fpensure=fopen("ensure.txt","w");
									fprintf(fpensure,"wait");
									fclose(fpensure);
									t[ct]=ch;
									if(ct==1023)
									{   
										t[20]='1';
										t[21]='0';
										t[22]='2';
										t[23]='4';
										if(check==0){
											t[24]='w';
											check=1;
										}
										else{
											t[24]='a';
										}
										long long int seq_temp=seqno;

										int ii=0;

										for(ii=30;ii<=40;ii++){
											t[ii]=48;
										}
										ii=0;
										while(seq_temp!=0){
											t[40-ii]=seq_temp%10 + 48;
											seq_temp=seq_temp/10;
											ii++;
										}
										//printf("sent bytes->%d\n",ct);
										/* if(strcmp(commands[2].s , "tcp") ==0){
										if(iamclient==0){
										send(connected1,t,1024, 0);
										}
										else if(iamclient==1){
										send(sock2,t,1024, 0); 
										}										
										} */
										printf("seq no is ->>>>>>>>>>>>>>>>>>>>%lld\n",seqno);
										while(1){
											fflush(stdout);
											FILE *fp;
											fp=fopen("ensure.txt","r");
											char s[100];
											fscanf(fp,"%s",s);
											
											fclose(fp);
											fflush(stdout);
											if(strcmp(s,"gonext")==0){
												printf("breaking\n");
												break;
											}
											else{
												printf("%s->>>\n",s);
												if(iamclient==0){
													sendto(sock3, t,1024, 0,
														(struct sockaddr *)&client_addr3, sizeof(struct sockaddr));
												}
												if(iamclient==1){
													//printf("sending data to server i am client\n");
													sendto(sock4, t, 1024, 0,
														(struct sockaddr *)&server_addr4, sizeof(struct sockaddr));
												}
												//sleep(1);
											}
										}
										seqno++;
										ct=100;
									}
									else{
										ct++;
									}
								}   
								if(ct!=100)
								{
									int a,b,c,d,tt=ct;
									a=tt%10;tt=tt/10;
									b=tt%10;tt=tt/10;
									c=tt%10;tt=tt/10;
									d=tt%10;
									t[20]=d+48;
									t[21]=c+48;
									t[22]=b+48;
									t[23]=a+48;
									if(check==0){
										t[24]='w';
										check=1;
									}
									else{
										t[24]='a';
									}
									printf("sending the last packet by server to client->%d %c%c%c%c\n",ct,t[20],t[21],t[22],t[23]);
									long long int seq_temp=seqno;
									
									int ii=0;
									
									for(ii=30;ii<=40;ii++){
										t[ii]=48;
									}
									ii=0;
									while(seq_temp!=0){
										t[40-ii]=seq_temp%10 + 48;
										seq_temp=seq_temp/10;
										ii++;
									}
									/* if(strcmp(commands[2].s , "tcp") ==0){
									if(iamclient==0){
									send(connected1,t,1024, 0); 
									}
									else if(iamclient==1){
									send(sock2,t,1024, 0); 
									}
									} */
									while(1){
										FILE *fp;
										fp=fopen("ensure.txt","r");
										char s[100];
										fscanf(fp,"%s",s);
										fclose(fp);
										if(strcmp(s,"gonext")==0){
											break;
										}
										else{
											if(iamclient==0){
												sendto(sock3, t,1024, 0,
													(struct sockaddr *)&client_addr3, sizeof(struct sockaddr));
											}
											if(iamclient==1){
												//printf("sending data to server i am client\n");
												sendto(sock4, t, 1024, 0,
													(struct sockaddr *)&server_addr4, sizeof(struct sockaddr));
											}
											//sleep(1);
										}
									}
									seqno++;
									ct=100;
								}
								fclose(fp);
								FILE *fpensure;
								fpensure=fopen("ensure.txt","w");
								fprintf(fpensure,"wait");
								fclose(fpensure);
								//sending the last packet for notification
								t[20]='0';
								t[21]='1';
								t[22]='0';
								t[23]='0';
								t[24]='a';
								
								long long int seq_temp=seqno;
								
								int ii=0;
								
								for(ii=30;ii<=40;ii++){
									t[ii]=48;
								}
								ii=0;
								while(seq_temp!=0){
									t[40-ii]=seq_temp%10 + 48;
									seq_temp=seq_temp/10;
									ii++;
								}
								while(1){
									FILE *fp;
									fp=fopen("ensure.txt","r");
									char s[100];
									fscanf(fp,"%s",s);
									fclose(fp);
									if(strcmp(s,"gonext")==0){
										break;
									}
									else{
										if(iamclient==0){
											sendto(sock3, t,1024, 0,
												(struct sockaddr *)&client_addr3, sizeof(struct sockaddr));
										}
										if(iamclient==1){
											//printf("sending data to server i am client\n");
											sendto(sock4, t, 1024, 0,
												(struct sockaddr *)&server_addr4, sizeof(struct sockaddr));
										}
										//sleep(1);
									}
								}
								seqno++;
								ct=100;
								exit(0);
							}
							else{
								while(1){
									printf("ensuring udp data\n");
									char ack[1024];
									if(iamclient==0){
										recv(connected1,ack,1024,0);
									}
									else if(iamclient==1){
										recv(sock2,ack,1024,0);
									}
									FILE *fp;
									fp=fopen("ensure.txt","w");
									fprintf(fp,"gonext");
									fclose(fp);
									if(strcmp(ack,"end")==0){
										break;
									}
								}
							}
						}
					}
					else{
						printf("got tcp data %s\n",recv_data);
						printf("enter the command to be executed:");
						fflush(stdout);
					}
				}
				else{
					printf("got tcp data %s\n",recv_data);
					printf("enter the command to be executed:");
					fflush(stdout);
					
				}
			}
			
			wait(NULL);
		}
		wait(NULL);
	}
	return 0;
}
