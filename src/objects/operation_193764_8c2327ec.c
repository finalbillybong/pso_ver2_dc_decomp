/* Provisional address-based name; preserve status transitions and cleanup ordering. */
#define free_at ((void (*)(void *))0x8c105320)
void release_assets_prime_8c2327ec(void){
    free_at(*(void **)0x8c510900);
    *(void **)0x8c510900=0;
}
