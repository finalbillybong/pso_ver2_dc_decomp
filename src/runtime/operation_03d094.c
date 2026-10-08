/* Provisional address-based name; preserve observed flag-table behavior. */
#define query_at ((int (*)(unsigned short,short))0x8c03d0b0)
int operation_03d094(unsigned short id,short group){
    return query_at(id,group)!=0;
}
