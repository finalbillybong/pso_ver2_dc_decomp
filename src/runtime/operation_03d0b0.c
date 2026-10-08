/* Provisional address-based name; preserve observed flag-table behavior. */
int operation_03d0b0(unsigned short id,short group){
    if(group<0 || group>17)return -1;
    if(id>255)return -1;
    {
        unsigned char *base=(unsigned char *)0x8c462a40+(group<<5);
        int quotient,remainder;
        int incremented=(unsigned short)(id+1);
        quotient=incremented/8;
        remainder=incremented%8;
        if(remainder>0){
            int shift=8-remainder;
            return ((unsigned char)base[quotient] & (1<<shift))>>shift;
        }
        else{
            base--;
            return (unsigned char)base[quotient]&1;
        }
    }
}
