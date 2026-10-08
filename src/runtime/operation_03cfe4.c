/* Provisional address-based name; preserve observed flag-table behavior. */
#define update_at ((void (*)(unsigned short,short))0x8c03cff8)
void operation_03cfe4(unsigned short id){
    update_at(id,*(int *)0x8c44be04);
}
