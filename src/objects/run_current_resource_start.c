#define get_current_area_8c032b10 ((int (*)(void))0x8c032b10)
#define load_area_object_assets_8c033f14 ((void (*)(int))0x8c033f14)
void run_current_resource_start(void) { load_area_object_assets_8c033f14(get_current_area_8c032b10()); }
