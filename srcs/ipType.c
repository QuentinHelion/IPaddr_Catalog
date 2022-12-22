#include "app.h"

int ipType(ip_addr ip){

  // === We have 7 scenarios to take into consideration ===

  //=== CLASSE A PRIVATE IP ===
  if(ip.addr[0] == 10 && 0 <= ip.addr[1] && ip.addr[1] <= 255 && 0 <= ip.addr[2] && ip.addr[2] <= 255 && 0 <= ip.addr[3] && ip.addr[3]  <= 255 ){
    printf("CLASSE A PRIVATE IP\n");
    return EXIT_SUCCESS;
  }
  //=== CLASSE B PRIVATE IP ===
  if(ip.addr[0] == 172 && 16 <= ip.addr[1] && ip.addr[1] <= 31 && 0 <= ip.addr[2] && ip.addr[2] <= 255 && 0 <= ip.addr[3] && ip.addr[3]  <= 255 ){
    printf("CLASSE B PRIVATE IP\n");
    return EXIT_SUCCESS;
  }
  //=== CLASSE C PRIVATE IP ===
  if(ip.addr[0] == 192 && ip.addr[1] == 168 && 0 <= ip.addr[2] && ip.addr[2] <= 255 && 0 <= ip.addr[3] && ip.addr[3]  <= 255 ){
    printf("CLASSE C PRIVATE IP\n");
    return EXIT_SUCCESS;
  }
  //=== SPECIAL RANGE IP ===
  if(ip.addr[0] == 100 && 64 <= ip.addr[1] && ip.addr[1] <= 127 && 0 <= ip.addr[2] && ip.addr[2] <= 255 && 0 <= ip.addr[3] && ip.addr[3]  <= 255 ){
    printf("SPECIAL RANGE IP\n");
    return EXIT_SUCCESS;
  }
  //=== LOOPBACK IP ===
  if(ip.addr[0] == 127 && ip.addr[1] == 0 && ip.addr[2] == 0 && ip.addr[3] == 1 ){
    printf("LOOPBACK IP\n");
    return EXIT_SUCCESS;
  }
  //=== APIPA IP ===
  if(ip.addr[0] == 169 && ip.addr[1] == 254 && 0 <= ip.addr[2] && ip.addr[2] <= 255 && 0 <= ip.addr[3] && ip.addr[3]  <= 255  ){
    printf("APIPA IP\n");
    return EXIT_SUCCESS;
  }
  //=== PUBLIC IP ===
  else{
    printf("PUBLIC IP\n");
    return EXIT_SUCCESS;
  }
}
