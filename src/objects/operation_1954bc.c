/* Provisional names; retain default sentinels, field widths and call order. */
#define mode_at ((int (*)(void))0x8c032b10)
#define second_buffer (*(int **)0x8c4dc348)
void operation_1954bc(int value){
    if(mode_at()!=15 && value>0x10000 && value<0x2010000){
        int *base=second_buffer;
        unsigned short index=value>>21;
        if(value>=*(int *)((char *)base+(index<<2)))*(int *)((char *)base+(index<<2))=value+1;
    }
}
