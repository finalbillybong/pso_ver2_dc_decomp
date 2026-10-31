/* Provisional names; retain default sentinels, field widths and call order. */
#define get_current_area_8c032b10 ((int (*)(void))0x8c032b10)
#define second_buffer (*(int **)0x8c4dc348)
void operation_1954bc(int value){
    if(get_current_area_8c032b10()!=15 && value>0x10000 && value<0x2010000){
        int *base=second_buffer;
        unsigned short index=value>>21;
        if(value>=*(int *)((char *)base+(index<<2)))*(int *)((char *)base+(index<<2))=value+1;
    }
}
