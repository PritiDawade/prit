#include <stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>

main()
{
    char ip[40];
    unsigned int result,y;
    int x;
    struct in_addr ip2;

    printf("Enter the IP address: ");
    scanf("%s" ,ip1);

    /*inet_aton() converts the internet host address ip1 from the Ipv4 num.
     | bers-and-dots notation into binary from (in network byte order ) and
     | stores it in the structure that ip2 points to.  inet_aton () returns
     | non-zero if the address is valid, zero if not. */
     |
     X=inet_aton(ip1,&ip2);

     if(x==1)
     {
         /* the ntoh1() function converts the unsigned integer netlong from network
         | byte order to host byte order. */
         result=ntoh1(ip2.s_addr);

         y=result&x80000000 ;

         if(y==0x00000000)
             printf("It's a class A IP address\n");
          y=result&0xe0000000 ;
             if(y==0xe0000000)
                printf("It's not from A B and C IP address\n");
                else
                {
                    y=result&0xC0000000;
                    if(y==0xe0000000)
                         printf(" It's a class c IP address\n");
                     else if(y==0x80000000)
                         printf(" It's a class B IP address\n");
                }}
                else
                     printf("The IP address is not valid\n");
                }
                }
                }


         }
     }
     }
}
}
