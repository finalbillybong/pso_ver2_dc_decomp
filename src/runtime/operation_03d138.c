/* Provisional address-based name; preserve observed flag-table behavior. */
extern void *copy_at(void *,const void *,unsigned int);
int operation_03d138(void *destination){
    copy_at(destination,(void *)0x8c462a40,576);
    return 576;
}
