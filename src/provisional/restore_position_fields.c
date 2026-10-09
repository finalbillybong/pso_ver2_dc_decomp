typedef struct View { char unknown0[144]; float value144; float value148; float value152; float value156; float value160; float value164; char unknown168[16]; float value184; float value188; float value192; float value196; float value200; float value204; char unknown208[28]; float value236; float value240; float value244; } View;
typedef char check_View_value144[(unsigned long)&((View *)0)->value144==144?1:-1];
typedef char check_View_value148[(unsigned long)&((View *)0)->value148==148?1:-1];
typedef char check_View_value152[(unsigned long)&((View *)0)->value152==152?1:-1];
typedef char check_View_value156[(unsigned long)&((View *)0)->value156==156?1:-1];
typedef char check_View_value160[(unsigned long)&((View *)0)->value160==160?1:-1];
typedef char check_View_value164[(unsigned long)&((View *)0)->value164==164?1:-1];
typedef char check_View_value184[(unsigned long)&((View *)0)->value184==184?1:-1];
typedef char check_View_value188[(unsigned long)&((View *)0)->value188==188?1:-1];
typedef char check_View_value192[(unsigned long)&((View *)0)->value192==192?1:-1];
typedef char check_View_value196[(unsigned long)&((View *)0)->value196==196?1:-1];
typedef char check_View_value200[(unsigned long)&((View *)0)->value200==200?1:-1];
typedef char check_View_value204[(unsigned long)&((View *)0)->value204==204?1:-1];
typedef char check_View_value236[(unsigned long)&((View *)0)->value236==236?1:-1];
typedef char check_View_value240[(unsigned long)&((View *)0)->value240==240?1:-1];
typedef char check_View_value244[(unsigned long)&((View *)0)->value244==244?1:-1];
typedef char check_View_prefix[sizeof(View)==248?1:-1];
void restore_position_fields(View *o) {
 o->value144=o->value184;
 o->value148=o->value188;
 o->value152=o->value192;
 o->value156=o->value196;
 o->value160=o->value200;
 o->value164=o->value204;
 o->value236=o->value144;
 o->value240=o->value148;
 o->value244=o->value152;
}
