#include <cstdio>
#include <iostream>
#include <cstring> 


int main() {
        FILE * fp = popen("/sbin/ifconfig eth0", "r");
	
	

        if (fp) {
                
		char *x=NULL, *y; size_t z;

                while ((getline(&x, &z, fp) > 0) && x)
		 {
                   if (x = strstr(x, "inet ")) {
                        x+=5;
                        if (x = strchr(x, ':')) {
                            ++x;
                            if (y = strchr(x, ' ')) {
                                 *y='\0';
                                 printf("Local IP Address: %s\n", x);
                            }
                        }
                   }
              }
        }
        pclose(fp);
        return 0;
}
