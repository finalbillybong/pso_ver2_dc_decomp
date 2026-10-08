/* Provisional address-based name; preserve observed flag-table behavior. */
void operation_03cf64(unsigned short id,short group){
    if(group<0 || group>17)return;
    if(id>255)return;
    {
        unsigned char *base=(unsigned char *)0x8c462a40+(group<<5);
        int quotient,remainder;
        int incremented=(unsigned short)(id+1);
        quotient=incremented/8;
        remainder=incremented%8;
        if(remainder>0){
            base[quotient]|=1<<(8-remainder);
        }
        else{
            base--;
            base[quotient]|=1;
        }
    }
}
