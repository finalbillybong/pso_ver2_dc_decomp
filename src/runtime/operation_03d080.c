/* Provisional address-based name; preserve observed flag-table behavior. */
#define query_at ((int (*)(unsigned short,short))0x8c03d094)
int operation_03d080(unsigned short id){
    return query_at(id,*(int *)0x8c44be04);
}
