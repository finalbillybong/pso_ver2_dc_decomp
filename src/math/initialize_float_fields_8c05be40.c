/* Provisional scalar fields recovered from complete straight-line stores. */
typedef struct View {
 char unknown0[944];
 float value944;
 float value948;
 float value952;
 float value956;
 float value960;
 float value964;
 float value968;
} View;
typedef char check_value944[(unsigned long)&((View *)0)->value944==944?1:-1];
typedef char check_value948[(unsigned long)&((View *)0)->value948==948?1:-1];
typedef char check_value952[(unsigned long)&((View *)0)->value952==952?1:-1];
typedef char check_value956[(unsigned long)&((View *)0)->value956==956?1:-1];
typedef char check_value960[(unsigned long)&((View *)0)->value960==960?1:-1];
typedef char check_value964[(unsigned long)&((View *)0)->value964==964?1:-1];
typedef char check_value968[(unsigned long)&((View *)0)->value968==968?1:-1];
void initialize_float_fields_8c05be40(View *o) {
 o->value944=0.0f;
 o->value948=0.0f;
 o->value952=0.0f;
 o->value956=0.0f;
 o->value960=0.0f;
 o->value964=0.0f;
 o->value968=0.0f;
}
