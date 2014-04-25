The aim of the project was to create a small file transfer system in C using TCP/IP protocols which could transfer files in a local network. The files could be transferred using either TCP connection or UDP connection. The UDP connection was also to be made reliable so that the packets lost during transmission were re-sent and there was no overall packet loss involved, which was supposed to be implemented using checksums.


The details of the project are present in a pdf inside the filesharing directory.

The compiled code is available in a.out

Compile the code using:- gcc finalver.cpp

To Run the code:-

1. ./a.out port1 port2 port3 port4 YourSystemIp 
	
	eg ./a.out 1234 2345 3456 4567 10.1.36.24

2. Make sure you have both sf1 and sf2 folders in the cur directory else make them

3. Data will be transfered from sf1 folder to the sf2 folder of the system. So whatever data you want to transfer, it should be present in sf1.

4. Please explore the code to see the commands for file download and file upload.

5. The following commands are supported and worked for me:-

a) fd f.jpg tcp //download file using tcp connection
b) fd f.jpg udp //download file using udp connection
c) fu f.jpg tcp
d) fu f.jpg upd
e) fu f.jpg udp ack //upload using ack
f) fd f.jpg udp ack //downlad using ack
