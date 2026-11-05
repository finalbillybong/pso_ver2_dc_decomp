/* Provisional address-based name; preserve status transitions and cleanup ordering. */
#define operator_delete_8c18de08 ((void (*)(void *))0x8c18de08)
void operator_delete_wrapper_3_8c193764(void){
    operator_delete_8c18de08(*(void **)0x8c4dc2f4);
    *(void **)0x8c4dc2f4=0;
}
