#include "uthash.h"  
#include <stdio.h>  
#include <stdlib.h>  
#include <unistd.h>  
  
  
/*这个uthash必须构造一个结构体*/
typedef struct packet{
        int key;       /*这个是用来做hash的key值*/  
        char msg[10];   
        UT_hash_handle hh; /*这个结构是uthash的结构体，里面包含next，prev，hash值等信息*/  
}packet;
  
int main()  
{  
        packet *pkt, *tmp;
        int i,j;

        packet *hash_packet = NULL; /*必须初始化为NULL*/

        /*打印这个hash的节点数*/
        printf ("hash count = %d \n", HASH_COUNT(hash_packet));



        /*往hash中添加节点*/
        for (i=0; i<10; i++)
        {
                pkt = (packet *)malloc(sizeof(packet));
                pkt->key=i;
                sprintf (pkt->msg, "i=%d", i);

                HASH_FIND_INT(hash_packet, &i, tmp);
                if (tmp != NULL)
                {
                        printf ("The key(%d) exists in hash. \n", i);
                        continue;
                }
                HASH_ADD_INT(hash_packet, key, pkt);
                printf ("insert item. key=%d,value=%p \n", i, pkt);
        }
        printf ("hash count = %d \n", HASH_COUNT(hash_packet));

        j  = 3;
        HASH_FIND_INT(hash_packet, &j, tmp);
        printf ("find item. key=%d,msg is %s,value=%p \n", i,tmp->msg, tmp);
        /*通过key查找*/
        //for (i=0; i<13; i++)
        //{
         //       HASH_FIND_INT(hash_packet, &i, tmp);
         //       if (tmp == NULL)
         //       {
         //               printf ("find not item. key=%d,value=%p \n", i, tmp);
         //               continue;
          //      }
          //      printf ("find item. key=%d,msg is %s,value=%p \n", i,tmp->msg, tmp);
        //}

        printf ("hash count = %d \n", HASH_COUNT(hash_packet));
        return 0;
}