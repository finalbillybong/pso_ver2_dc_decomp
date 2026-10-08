/* Provisional address-based name; preserve observed flag-table behavior. */
extern void *copy_at(void *,const void *,unsigned int);
void operation_03d158(const void *source,unsigned int size){
    copy_at((void *)0x8c462a40,source,size);
}
