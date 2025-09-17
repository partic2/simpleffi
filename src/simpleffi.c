
#include <simpleffi.h>


static void *simpleffi_call4(void *fn,void **argv){
    return ((void *(*)(void *,void *,void *,void *))fn)(argv[0],argv[1],argv[2],argv[3]);
}

static void *simpleffi_call16(void *fn,void **argv){
    return ((void *(*)(void *,void *,void *,void *,void *,void *,void *,void *,void *,void *,void *,void *,void *,void *,void *,void *))
        fn)(argv[0],argv[1],argv[2],argv[3],argv[4],argv[5],argv[6],argv[7],argv[8],argv[9],argv[10],argv[11],argv[12],argv[13],argv[14],argv[15]);
}

/* Only support argc<16 */
void *simpleffi_call(void *fn,int argc,void **argv){
    if(argc<=4){
        return simpleffi_call4(fn, argv);
    }else{
        return simpleffi_call16(fn, argv);
    }
}

static simpleffi_callback_handler4 handlers[32];

static void *simpleffi_callback0(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[0](arg0,arg1,arg2,arg3,0);
}
static void *simpleffi_callback1(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[1](arg0,arg1,arg2,arg3,1);
}
static void *simpleffi_callback2(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[2](arg0,arg1,arg2,arg3,2);
}
static void *simpleffi_callback3(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[3](arg0,arg1,arg2,arg3,3);
}
static void *simpleffi_callback4(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[4](arg0,arg1,arg2,arg3,4);
}
static void *simpleffi_callback5(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[5](arg0,arg1,arg2,arg3,5);
}
static void *simpleffi_callback6(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[6](arg0,arg1,arg2,arg3,6);
}
static void *simpleffi_callback7(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[7](arg0,arg1,arg2,arg3,7);
}
static void *simpleffi_callback8(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[8](arg0,arg1,arg2,arg3,8);
}
static void *simpleffi_callback9(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[9](arg0,arg1,arg2,arg3,9);
}
static void *simpleffi_callback10(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[10](arg0,arg1,arg2,arg3,10);
}
static void *simpleffi_callback11(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[11](arg0,arg1,arg2,arg3,11);
}
static void *simpleffi_callback12(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[12](arg0,arg1,arg2,arg3,12);
}
static void *simpleffi_callback13(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[13](arg0,arg1,arg2,arg3,13);
}
static void *simpleffi_callback14(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[14](arg0,arg1,arg2,arg3,14);
}
static void *simpleffi_callback15(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[15](arg0,arg1,arg2,arg3,15);
}
static void *simpleffi_callback16(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[16](arg0,arg1,arg2,arg3,16);
}
static void *simpleffi_callback17(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[17](arg0,arg1,arg2,arg3,17);
}
static void *simpleffi_callback18(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[18](arg0,arg1,arg2,arg3,18);
}
static void *simpleffi_callback19(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[19](arg0,arg1,arg2,arg3,19);
}
static void *simpleffi_callback20(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[20](arg0,arg1,arg2,arg3,20);
}
static void *simpleffi_callback21(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[21](arg0,arg1,arg2,arg3,21);
}
static void *simpleffi_callback22(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[22](arg0,arg1,arg2,arg3,22);
}
static void *simpleffi_callback23(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[23](arg0,arg1,arg2,arg3,23);
}
static void *simpleffi_callback24(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[24](arg0,arg1,arg2,arg3,24);
}
static void *simpleffi_callback25(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[25](arg0,arg1,arg2,arg3,25);
}
static void *simpleffi_callback26(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[26](arg0,arg1,arg2,arg3,26);
}
static void *simpleffi_callback27(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[27](arg0,arg1,arg2,arg3,27);
}
static void *simpleffi_callback28(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[28](arg0,arg1,arg2,arg3,28);
}
static void *simpleffi_callback29(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[29](arg0,arg1,arg2,arg3,29);
}
static void *simpleffi_callback30(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[30](arg0,arg1,arg2,arg3,30);
}
static void *simpleffi_callback31(void *arg0,void *arg1,void *arg2,void *arg3){
    return handlers[31](arg0,arg1,arg2,arg3,31);
}


void simpleffi_set_callback_handler(int index,simpleffi_callback_handler4 handler){
    handlers[index]=handler;
}

static void *(*simpleffi_callback_lists[32])(void *,void *,void *,void *)={
    simpleffi_callback0,
    simpleffi_callback1,
    simpleffi_callback2,
    simpleffi_callback3,
    simpleffi_callback4,
    simpleffi_callback5,
    simpleffi_callback6,
    simpleffi_callback7,
    simpleffi_callback8,
    simpleffi_callback9,
    simpleffi_callback10,
    simpleffi_callback11,
    simpleffi_callback12,
    simpleffi_callback13,
    simpleffi_callback14,
    simpleffi_callback15,
    simpleffi_callback16,
    simpleffi_callback17,
    simpleffi_callback18,
    simpleffi_callback19,
    simpleffi_callback20,
    simpleffi_callback21,
    simpleffi_callback22,
    simpleffi_callback23,
    simpleffi_callback24,
    simpleffi_callback25,
    simpleffi_callback26,
    simpleffi_callback27,
    simpleffi_callback28,
    simpleffi_callback29,
    simpleffi_callback30,
    simpleffi_callback31,
};

/* Only support index<32 */
void *simpleffi_get_callback(int index){
    return simpleffi_callback_lists[index];
}