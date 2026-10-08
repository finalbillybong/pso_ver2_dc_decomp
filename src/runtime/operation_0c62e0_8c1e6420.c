/* Provisional address-based name; wider setup/update role remains under review. */
extern char records[];
#define prepare_at ((void (*)(void *,int,int,float))0x8c37eb1c)

void operation_0c62e0_8c1e6420(void) {
    prepare_at(records + 0, 0, 0, -150.0f);
    prepare_at(records + 32, 1, 0, -150.0f);
    prepare_at(records + 64, 2, 0, -150.0f);
    prepare_at(records + 96, 3, 0, -150.0f);
    prepare_at(records + 128, 4, 0, -150.0f);
    prepare_at(records + 160, 5, 0, -150.0f);
    prepare_at(records + 192, 6, 0, -150.0f);
    prepare_at(records + 224, 7, 0, -150.0f);
}
