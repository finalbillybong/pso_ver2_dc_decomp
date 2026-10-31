/* Provisional names; preserve field widths, mode checks and counter ordering. */
#define get_game_mode_8c01c25c ((int (*)(void))0x8c01c25c)
unsigned int operation_195514(unsigned short index){
    if(get_game_mode_8c01c25c()==16){
        if(*(int *)0x8c4dc800)return index|0x6030000;
        else return index|0x6010000;
    }
    else{
        if(*(int *)0x8c4dc344==1)return index|0x6020000;
        else return index|0x6010000;
    }
}
