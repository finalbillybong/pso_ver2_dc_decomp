typedef struct View { char unknown0[36]; int index; char unknown40[88]; float value128; char unknown132[4]; float value136; char unknown140[20]; float value160; char unknown164[4]; float value168; char unknown172[20]; float value192; char unknown196[4]; float value200; char unknown204[20]; float value224; char unknown228[4]; float value232; char unknown236[20]; float value256; char unknown260[4]; float value264; char unknown268[20]; float value288; char unknown292[4]; float value296; } View;
typedef char check_View_index[(unsigned long)&((View *)0)->index==36?1:-1];
typedef char check_View_value128[(unsigned long)&((View *)0)->value128==128?1:-1];
typedef char check_View_value136[(unsigned long)&((View *)0)->value136==136?1:-1];
typedef char check_View_value160[(unsigned long)&((View *)0)->value160==160?1:-1];
typedef char check_View_value168[(unsigned long)&((View *)0)->value168==168?1:-1];
typedef char check_View_value192[(unsigned long)&((View *)0)->value192==192?1:-1];
typedef char check_View_value200[(unsigned long)&((View *)0)->value200==200?1:-1];
typedef char check_View_value224[(unsigned long)&((View *)0)->value224==224?1:-1];
typedef char check_View_value232[(unsigned long)&((View *)0)->value232==232?1:-1];
typedef char check_View_value256[(unsigned long)&((View *)0)->value256==256?1:-1];
typedef char check_View_value264[(unsigned long)&((View *)0)->value264==264?1:-1];
typedef char check_View_value288[(unsigned long)&((View *)0)->value288==288?1:-1];
typedef char check_View_value296[(unsigned long)&((View *)0)->value296==296?1:-1];
typedef char check_View_prefix[sizeof(View)==300?1:-1];
void set_indexed_panel_edges(View *o) {
 o->value128=o->value160=o->value192=o->value224=o->value256=o->value288=(float)o->index*93.0f+180.0f;
 o->value136=o->value168=o->value200=o->value232=o->value264=o->value296=(float)o->index*93.0f+208.0f;
}
