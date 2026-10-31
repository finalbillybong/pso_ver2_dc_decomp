/* Provisional address-based name; preserve observed flag-table behavior. */
#define file_load_8c104d00 ((void (*)(unsigned short,short))0x8c104d00)
void operation_03cf50_8c09cd3c(unsigned short id){
    file_load_8c104d00(id,*(int *)0x8c46ec20);
}
