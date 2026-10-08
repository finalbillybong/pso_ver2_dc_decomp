/* Provisional address-based name; preserve status transitions and cleanup ordering. */
#define free_at ((void (*)(void *))0x8c18de08)
void operation_193764_8c08ddc8(void){
    free_at(*(void **)0x8c469dc8);
    *(void **)0x8c469dc8=0;
}
