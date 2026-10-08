/* Provisional names; preserve field widths, mode checks and counter ordering. */
#define counter (*(unsigned int *)0x8c4dc340)
unsigned int operation_19528c(unsigned short index){
    if(index!=0xffff)return index+0x4000000;
    {
        unsigned int next=counter;
        unsigned int result=next+0x4010000;
        counter=next+1;
        return result;
    }
}
