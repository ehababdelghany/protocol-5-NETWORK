
/* Protocol 5 (Go-back-n) allows multiple outstanding frames. The sender may transmit up
to MAX_SEQ frames without waiting for an ack. In addition, unlike in the previous
protocols, the network layer is not assumed to have a new packet all the time. Instead,
the network layer causes a network_layer_ready event when there is a packet to send. */
#include "stdio.h"
#include <iostream>
using namespace std;




int main ()
{int no_of_frames;
	cout<<"no of frames :";
    cin>>no_of_frames;
	int reciever_window_size ;
	cout<<endl<<"enter window size :";
	cin>>reciever_window_size;
	cout<<endl;
	int x=0;
	


	for (int i=1;i<=no_of_frames;i+=x)
	{
		x=0;
		 
    for(int j=i;j<i+reciever_window_size && j<=no_of_frames;j++)
    {
        cout<<"Frame number :"<<j<<" is sent"<<endl;
        
    }
    for(int j=i;j<i+reciever_window_size && j<=no_of_frames;j++)
    {
        int flag = rand()%2;//flag is 0 or 1 randomly
        if(!flag)
            {
                cout<<"Acknowledgment for Frame "<<j<<endl;
                x++;
            }
        else
            {   cout<<"Frame "<<j<<" Not Received"<<endl;
                cout<<"Retransmitting Window"<<endl;
                break;
            }
    }
    cout<<endl;
    
	
	
	}





return 0;

}