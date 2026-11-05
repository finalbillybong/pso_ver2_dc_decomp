/* Provisional address-based name; preserve status transitions and cleanup ordering. */
#define operator_delete_8c18de08 ((void (*)(void *))0x8c18de08)
void operator_delete_wrapper_8c08b89c(void){
    operator_delete_8c18de08(*(void **)0x8c469da8);
    *(void **)0x8c469da8=0;
}
