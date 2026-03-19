#include<stdio.h>
#include <unistd.h>

//先声明再使用
//extern  void (*step)(void); //v1.0 code
void cb_install(void (*p)(void));
void run(void);

void mystep_cb(void)
{
    printf("1 second has passed\n");
}



int main()
{
    //step=mystep_cb;  //v1.0 code
    cb_install(mystep_cb);
    run();
}
