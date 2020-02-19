#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char ** argv){
  if (argv[1][0]=='a'){
    sleep(1);
    if (argv[1][1]=='b'){
      sleep(1);
      if (argv[1][2]=='c'){
        sleep(1);
        printf("mdp trouvé");
      }
    }
  }

}
