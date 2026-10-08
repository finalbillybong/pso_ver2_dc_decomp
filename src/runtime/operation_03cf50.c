/* Provisional address-based name; preserve observed flag-table behavior. */
#define update_at ((void (*)(unsigned short,short))0x8c03cf64)
void operation_03cf50(unsigned short id){
    update_at(id,*(int *)0x8c44be04);
}
