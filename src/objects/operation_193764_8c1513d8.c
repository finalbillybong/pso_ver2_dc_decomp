/* Provisional address-based name; preserve status transitions and cleanup ordering. */
#define free_at ((void (*)(void *))0x8c37d534)
void check_items_wrapper_8c1513d8(void){
    free_at(*(void **)0x8c4da6d4);
    *(void **)0x8c4da6d4=0;
}
