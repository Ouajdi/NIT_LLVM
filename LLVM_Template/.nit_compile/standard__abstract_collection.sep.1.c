#include "standard__abstract_collection.sep.0.h"
/* method abstract_collection#Collection#iterator for (self: Collection[nullable Object]): Iterator[nullable Object] */
val* standard___standard__Collection___iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "iterator", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 60);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#is_empty for (self: Collection[nullable Object]): Bool */
short int standard___standard__Collection___is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:Collection[nullable Object]>*/
}
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#not_empty for (self: Collection[nullable Object]): Bool */
short int standard___standard__Collection___not_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:Collection[nullable Object]>*/
}
var2 = !var1;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#length for (self: Collection[nullable Object]): Int */
long standard___standard__Collection___length(val* self) {
long var /* : Int */;
long var_nb /* var nb: Int */;
val* var_ /* var : Collection[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
var_nb = 0l;
var_ = self;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[nullable Object]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[nullable Object]>*/
}
var_i = var4;
{
{ /* Inline kernel#Int#+ (var_nb,1l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var8 = var_nb + 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_nb = var5;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[nullable Object]>*/
}
var = var_nb;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#has for (self: Collection[nullable Object], nullable Object): Bool */
short int standard___standard__Collection___has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var_ /* var : Collection[nullable Object] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Collection___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 88);
fatal_exit(1);
}
var_item = p0;
var_ = self;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[nullable Object]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[nullable Object]>*/
}
var_i = var5;
if (var_i == NULL) {
var6 = (var_item == NULL);
} else {
var7 = ((short int(*)(val* self, val* p0))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, var_item); /* == on <var_i:nullable Object>*/
var6 = var7;
}
if (var6){
var = 1;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[nullable Object]>*/
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#has_only for (self: Collection[nullable Object], nullable Object): Bool */
short int standard___standard__Collection___has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var_ /* var : Collection[nullable Object] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Collection___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 101);
fatal_exit(1);
}
var_item = p0;
var_ = self;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[nullable Object]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[nullable Object]>*/
}
var_i = var5;
if (var_i == NULL) {
var6 = (var_item != NULL);
} else {
var7 = ((short int(*)(val* self, val* p0))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_i, var_item); /* != on <var_i:nullable Object>*/
var6 = var7;
}
if (var6){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[nullable Object]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#count for (self: Collection[nullable Object], nullable Object): Int */
long standard___standard__Collection___count(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var_nb /* var nb: Int */;
val* var_ /* var : Collection[nullable Object] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Collection___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 118);
fatal_exit(1);
}
var_item = p0;
var_nb = 0l;
var_ = self;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[nullable Object]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[nullable Object]>*/
}
var_i = var5;
if (var_i == NULL) {
var6 = (var_item == NULL);
} else {
var7 = ((short int(*)(val* self, val* p0))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, var_item); /* == on <var_i:nullable Object>*/
var6 = var7;
}
if (var6){
{
{ /* Inline kernel#Int#+ (var_nb,1l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var14 = var_nb + 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_nb = var8;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[nullable Object]>*/
}
var = var_nb;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#first for (self: Collection[nullable Object]): nullable Object */
val* standard___standard__Collection___first(val* self) {
val* var /* : nullable Object */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Iterator[nullable Object] */;
val* var7 /* : nullable Object */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:Collection[nullable Object]>*/
}
{
{ /* Inline kernel#Int#> (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var5 = var1 > 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 134);
fatal_exit(1);
}
{
var6 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(self); /* iterator on <self:Collection[nullable Object]>*/
}
{
var7 = ((val*(*)(val* self))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var6); /* item on <var6:Iterator[nullable Object]>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#has_all for (self: Collection[nullable Object], Collection[nullable Object]): Bool */
short int standard___standard__Collection___has_all(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Collection[nullable Object] */;
val* var_ /* var : Collection[nullable Object] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_x /* var x: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Collection__standard__Collection___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 138);
fatal_exit(1);
}
var_other = p0;
var_ = var_other;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[nullable Object]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[nullable Object]>*/
}
var_x = var5;
{
var6 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(self, var_x); /* has on <self:Collection[nullable Object]>*/
}
var7 = !var6;
if (var7){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[nullable Object]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#has_exactly for (self: Collection[nullable Object], Collection[nullable Object]): Bool */
short int standard___standard__Collection___has_exactly(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Collection[nullable Object] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_ /* var : Collection[nullable Object] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Collection__standard__Collection___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 156);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:Collection[nullable Object]>*/
}
{
var3 = ((long(*)(val* self))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_other); /* length on <var_other:Collection[nullable Object]>*/
}
{
{ /* Inline kernel#Int#!= (var2,var3) on <var2:Int> */
var6 = var2 == var3;
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
var_ = self;
{
var8 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:Iterator[nullable Object]>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:Iterator[nullable Object]>*/
}
var_e = var11;
{
var12 = ((long(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__count]))(self, var_e); /* count on <self:Collection[nullable Object]>*/
}
{
var13 = ((long(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__abstract_collection__Collection__count]))(var_other, var_e); /* count on <var_other:Collection[nullable Object]>*/
}
{
{ /* Inline kernel#Int#!= (var12,var13) on <var12:Int> */
var16 = var12 == var13;
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[nullable Object]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Iterator#item for (self: Iterator[nullable Object]): nullable Object */
val* standard___standard__Iterator___item(val* self) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "item", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 185);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Iterator#next for (self: Iterator[nullable Object]) */
void standard___standard__Iterator___next(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "next", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 189);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection#Iterator#is_ok for (self: Iterator[nullable Object]): Bool */
short int standard___standard__Iterator___is_ok(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "is_ok", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 193);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Iterator#iterator for (self: Iterator[nullable Object]): Iterator[nullable Object] */
val* standard___standard__Iterator___iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Iterator#finish for (self: Iterator[nullable Object]) */
void standard___standard__Iterator___finish(val* self) {
RET_LABEL:;
}
/* method abstract_collection#Container#first for (self: Container[nullable Object]): nullable Object */
val* standard___standard__Container___Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Container__item]))(self); /* item on <self:Container[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#is_empty for (self: Container[nullable Object]): Bool */
short int standard___standard__Container___Collection__is_empty(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#length for (self: Container[nullable Object]): Int */
long standard___standard__Container___Collection__length(val* self) {
long var /* : Int */;
var = 1l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#has for (self: Container[nullable Object], nullable Object): Bool */
short int standard___standard__Container___Collection__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_an_item /* var an_item: nullable Object */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
/* Covariant cast for argument 0 (an_item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__Container___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 225);
fatal_exit(1);
}
var_an_item = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Container__item]))(self); /* item on <self:Container[nullable Object]>*/
}
if (var2 == NULL) {
var3 = (var_an_item == NULL);
} else {
var4 = ((short int(*)(val* self, val* p0))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, var_an_item); /* == on <var2:nullable Object>*/
var3 = var4;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#has_only for (self: Container[nullable Object], nullable Object): Bool */
short int standard___standard__Container___Collection__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_an_item /* var an_item: nullable Object */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
/* Covariant cast for argument 0 (an_item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__Container___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 227);
fatal_exit(1);
}
var_an_item = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Container__item]))(self); /* item on <self:Container[nullable Object]>*/
}
if (var2 == NULL) {
var3 = (var_an_item == NULL);
} else {
var4 = ((short int(*)(val* self, val* p0))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, var_an_item); /* == on <var2:nullable Object>*/
var3 = var4;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#count for (self: Container[nullable Object], nullable Object): Int */
long standard___standard__Container___Collection__count(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_an_item /* var an_item: nullable Object */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
/* Covariant cast for argument 0 (an_item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__Container___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 229);
fatal_exit(1);
}
var_an_item = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Container__item]))(self); /* item on <self:Container[nullable Object]>*/
}
if (var2 == NULL) {
var3 = (var_an_item == NULL);
} else {
var4 = ((short int(*)(val* self, val* p0))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, var_an_item); /* == on <var2:nullable Object>*/
var3 = var4;
}
if (var3){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#iterator for (self: Container[nullable Object]): Iterator[nullable Object] */
val* standard___standard__Container___Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : ContainerIterator[nullable Object] */;
var1 = NEW_standard__abstract_collection__ContainerIterator(self->type->resolution_table->types[COLOR_standard__abstract_collection__ContainerIterator__standard__Container___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__ContainerIterator__container_61d]))(var1, self); /* container= on <var1:ContainerIterator[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:ContainerIterator[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#item for (self: Container[nullable Object]): nullable Object */
val* standard___standard__Container___item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__abstract_collection__Container___item].val; /* _item on <self:Container[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#item= for (self: Container[nullable Object], nullable Object) */
void standard___standard__Container___item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__Container___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 240);
fatal_exit(1);
}
self->attrs[COLOR_standard__abstract_collection__Container___item].val = p0; /* _item on <self:Container[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#Container#init for (self: Container[nullable Object]) */
void standard___standard__Container___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__Container___standard__kernel__Object__init]))(self); /* init on <self:Container[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#item for (self: ContainerIterator[nullable Object]): nullable Object */
val* standard__abstract_collection___standard__abstract_collection__ContainerIterator___Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Container[nullable Object] */;
val* var2 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__abstract_collection__ContainerIterator___container].val; /* _container on <self:ContainerIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _container");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 247);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Container__item]))(var1); /* item on <var1:Container[nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#ContainerIterator#next for (self: ContainerIterator[nullable Object]) */
void standard__abstract_collection___standard__abstract_collection__ContainerIterator___Iterator__next(val* self) {
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__abstract_collection__ContainerIterator__is_ok_61d]))(self, 0); /* is_ok= on <self:ContainerIterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#is_ok for (self: ContainerIterator[nullable Object]): Bool */
short int standard__abstract_collection___standard__abstract_collection__ContainerIterator___Iterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__abstract_collection__ContainerIterator___is_ok].s; /* _is_ok on <self:ContainerIterator[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#ContainerIterator#is_ok= for (self: ContainerIterator[nullable Object], Bool) */
void standard__abstract_collection___standard__abstract_collection__ContainerIterator___is_ok_61d(val* self, short int p0) {
self->attrs[COLOR_standard__abstract_collection__ContainerIterator___is_ok].s = p0; /* _is_ok on <self:ContainerIterator[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#container for (self: ContainerIterator[nullable Object]): Container[nullable Object] */
val* standard__abstract_collection___standard__abstract_collection__ContainerIterator___container(val* self) {
val* var /* : Container[nullable Object] */;
val* var1 /* : Container[nullable Object] */;
var1 = self->attrs[COLOR_standard__abstract_collection__ContainerIterator___container].val; /* _container on <self:ContainerIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _container");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 253);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#ContainerIterator#container= for (self: ContainerIterator[nullable Object], Container[nullable Object]) */
void standard__abstract_collection___standard__abstract_collection__ContainerIterator___container_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (container) <p0:Container[nullable Object]> isa Container[E] */
/* <p0:Container[nullable Object]> isa Container[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Container__standard__abstract_collection__ContainerIterator___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Container[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 253);
fatal_exit(1);
}
self->attrs[COLOR_standard__abstract_collection__ContainerIterator___container].val = p0; /* _container on <self:ContainerIterator[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#init for (self: ContainerIterator[nullable Object]) */
void standard__abstract_collection___standard__abstract_collection__ContainerIterator___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection___standard__abstract_collection__ContainerIterator___standard__kernel__Object__init]))(self); /* init on <self:ContainerIterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#RemovableCollection#clear for (self: RemovableCollection[nullable Object]) */
void standard___standard__RemovableCollection___clear(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "clear", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 260);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection#RemovableCollection#remove for (self: RemovableCollection[nullable Object], nullable Object) */
void standard___standard__RemovableCollection___remove(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "remove", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 269);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection#RemovableCollection#remove_all for (self: RemovableCollection[nullable Object], nullable Object) */
void standard___standard__RemovableCollection___remove_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
short int var1 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__RemovableCollection___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 276);
fatal_exit(1);
}
var_item = p0;
for(;;) {
{
var1 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(self, var_item); /* has on <self:RemovableCollection[nullable Object]>*/
}
if (var1){
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__RemovableCollection__remove]))(self, var_item); /* remove on <self:RemovableCollection[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_collection#SimpleCollection#add for (self: SimpleCollection[nullable Object], nullable Object) */
void standard___standard__SimpleCollection___add(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "add", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 288);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection#SimpleCollection#add_all for (self: SimpleCollection[nullable Object], Collection[nullable Object]) */
void standard___standard__SimpleCollection___add_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
val* var_ /* var : Collection[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Collection__standard__SimpleCollection___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 298);
fatal_exit(1);
}
var_coll = p0;
var_ = var_coll;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[nullable Object]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[nullable Object]>*/
}
var_i = var4;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(self, var_i); /* add on <self:SimpleCollection[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#Set#has_only for (self: Set[nullable Object], nullable Object): Bool */
short int standard___standard__Set___Collection__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
long var_l /* var l: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Set___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 319);
fatal_exit(1);
}
var_item = p0;
{
var2 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:Set[nullable Object]>*/
}
var_l = var2;
{
{ /* Inline kernel#Int#== (var_l,1l) on <var_l:Int> */
var5 = var_l == 1l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var6 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(self, var_item); /* has on <self:Set[nullable Object]>*/
}
var = var6;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#== (var_l,0l) on <var_l:Int> */
var9 = var_l == 0l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = 1;
goto RET_LABEL;
} else {
var = 0;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method abstract_collection#Set#count for (self: Set[nullable Object], nullable Object): Int */
long standard___standard__Set___Collection__count(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Set___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 331);
fatal_exit(1);
}
var_item = p0;
{
var2 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(self, var_item); /* has on <self:Set[nullable Object]>*/
}
if (var2){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_collection#Set#remove_all for (self: Set[nullable Object], nullable Object) */
void standard___standard__Set___RemovableCollection__remove_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Set___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 341);
fatal_exit(1);
}
var_item = p0;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__RemovableCollection__remove]))(self, var_item); /* remove on <self:Set[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#Set#== for (self: Set[nullable Object], nullable Object): Bool */
short int standard___standard__Set___standard__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const struct type* type_struct;
const char* var_class_name;
short int var12 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa Set[Object] */
cltype = type_standard__Set__standard__Object.color;
idtype = type_standard__Set__standard__Object.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var3 = ((long(*)(val* self))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_other); /* length on <var_other:nullable Object(Set[Object])>*/
}
{
var4 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:Set[nullable Object]>*/
}
{
{ /* Inline kernel#Int#!= (var3,var4) on <var3:Int> */
var7 = var3 == var4;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_other:nullable Object(Set[Object])> isa Collection[E] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Collection__standard__Set___35dE];
cltype10 = type_struct->color;
idtype11 = type_struct->id;
if(cltype10 >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype10] == idtype11;
}
if (unlikely(!var9)) {
var_class_name = var_other == NULL ? "null" : (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 349);
fatal_exit(1);
}
{
var12 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__has_all]))(self, var_other); /* has_all on <self:Set[nullable Object]>*/
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Set#hash for (self: Set[nullable Object]): Int */
long standard___standard__Set___standard__kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_res /* var res: Int */;
val* var_ /* var : Set[nullable Object] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:Set[nullable Object]>*/
}
{
{ /* Inline kernel#Int#+ (23l,var1) on <23l:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var5 = 23l + var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_res = var2;
var_ = self;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[nullable Object]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[nullable Object]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[nullable Object]>*/
}
var_e = var9;
if (var_e == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 359);
fatal_exit(1);
} else {
var10 = ((long(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__kernel__Object__hash]))(var_e); /* hash on <var_e:nullable Object>*/
}
{
{ /* Inline kernel#Int#+ (var_res,var10) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var17 = var_res + var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_res = var11;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Set#union for (self: Set[nullable Object], Set[nullable Object]): Set[nullable Object] */
val* standard___standard__Set___union(val* self, val* p0) {
val* var /* : Set[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Set[nullable Object] */;
val* var2 /* : Set[nullable Object] */;
val* var_nhs /* var nhs: Set[nullable Object] */;
/* Covariant cast for argument 0 (other) <p0:Set[nullable Object]> isa Set[E] */
/* <p0:Set[nullable Object]> isa Set[E] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Set__standard__Set___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 363);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Set__new_set]))(self); /* new_set on <self:Set[nullable Object]>*/
}
var_nhs = var2;
{
((void(*)(val* self, val* p0))((((long)var_nhs&3)?class_info[((long)var_nhs&3)]:var_nhs->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_nhs, self); /* add_all on <var_nhs:Set[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))((((long)var_nhs&3)?class_info[((long)var_nhs&3)]:var_nhs->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_nhs, var_other); /* add_all on <var_nhs:Set[nullable Object]>*/
}
var = var_nhs;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Set#intersection for (self: Set[nullable Object], Set[nullable Object]): Set[nullable Object] */
val* standard___standard__Set___intersection(val* self, val* p0) {
val* var /* : Set[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Set[nullable Object] */;
val* var2 /* : Set[nullable Object] */;
val* var_nhs /* var nhs: Set[nullable Object] */;
val* var_ /* var : Set[nullable Object] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_v /* var v: nullable Object */;
short int var7 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Set[nullable Object]> isa Set[E] */
/* <p0:Set[nullable Object]> isa Set[E] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Set__standard__Set___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 372);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Set__new_set]))(self); /* new_set on <self:Set[nullable Object]>*/
}
var_nhs = var2;
var_ = self;
{
var3 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[nullable Object]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[nullable Object]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[nullable Object]>*/
}
var_v = var6;
{
var7 = ((short int(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var_other, var_v); /* has on <var_other:Set[nullable Object]>*/
}
if (var7){
{
((void(*)(val* self, val* p0))((((long)var_nhs&3)?class_info[((long)var_nhs&3)]:var_nhs->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_nhs, var_v); /* add on <var_nhs:Set[nullable Object]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[nullable Object]>*/
}
var = var_nhs;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Set#new_set for (self: Set[nullable Object]): Set[nullable Object] */
val* standard___standard__Set___new_set(val* self) {
val* var /* : Set[nullable Object] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "new_set", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 380);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#[] for (self: MapRead[nullable Object, nullable Object], nullable Object): nullable Object */
val* standard___standard__MapRead____91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "[]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 389);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#get_or_null for (self: MapRead[nullable Object, nullable Object], nullable Object): nullable Object */
val* standard___standard__MapRead___get_or_null(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__MapRead___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 400);
fatal_exit(1);
}
var_key = p0;
{
var2 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(self, var_key); /* has_key on <self:MapRead[nullable Object, nullable Object]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(self, var_key); /* [] on <self:MapRead[nullable Object, nullable Object]>*/
}
var = var3;
goto RET_LABEL;
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#get_or_default for (self: MapRead[nullable Object, nullable Object], nullable Object, nullable Object): nullable Object */
val* standard___standard__MapRead___get_or_default(val* self, val* p0, val* p1) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable6;
const char* var_class_name7;
val* var_key /* var key: nullable Object */;
val* var_default /* var default: nullable Object */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__MapRead___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 414);
fatal_exit(1);
}
/* Covariant cast for argument 1 (default) <p1:nullable Object> isa V */
/* <p1:nullable Object> isa V */
type_struct5 = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__MapRead___35dV];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(p1 == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 414);
fatal_exit(1);
}
var_key = p0;
var_default = p1;
{
var8 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(self, var_key); /* has_key on <self:MapRead[nullable Object, nullable Object]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(self, var_key); /* [] on <self:MapRead[nullable Object, nullable Object]>*/
}
var = var9;
goto RET_LABEL;
} else {
}
var = var_default;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#has_key for (self: MapRead[nullable Object, nullable Object], nullable Object): Bool */
short int standard___standard__MapRead___has_key(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
val* var2 /* : Collection[nullable Object] */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__MapRead___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 427);
fatal_exit(1);
}
var_key = p0;
{
var2 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__MapRead__keys]))(self); /* keys on <self:MapRead[nullable Object, nullable Object]>*/
}
{
var3 = ((short int(*)(val* self, val* p0))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var2, var_key); /* has on <var2:Collection[nullable Object]>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#iterator for (self: MapRead[nullable Object, nullable Object]): MapIterator[nullable Object, nullable Object] */
val* standard___standard__MapRead___iterator(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "iterator", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 437);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#values for (self: MapRead[nullable Object, nullable Object]): Collection[nullable Object] */
val* standard___standard__MapRead___values(val* self) {
val* var /* : Collection[nullable Object] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "values", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 440);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#keys for (self: MapRead[nullable Object, nullable Object]): Collection[nullable Object] */
val* standard___standard__MapRead___keys(val* self) {
val* var /* : Collection[nullable Object] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "keys", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 450);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#is_empty for (self: MapRead[nullable Object, nullable Object]): Bool */
short int standard___standard__MapRead___is_empty(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "is_empty", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 460);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#length for (self: MapRead[nullable Object, nullable Object]): Int */
long standard___standard__MapRead___length(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "length", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 468);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#provide_default_value for (self: MapRead[nullable Object, nullable Object], nullable Object): nullable Object */
val* standard___standard__MapRead___provide_default_value(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__MapRead___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 478);
fatal_exit(1);
}
var_key = p0;
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 483);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#== for (self: MapRead[nullable Object, nullable Object], nullable Object): Bool */
short int standard___standard__MapRead___standard__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_ /* var : MapRead[nullable Object, nullable Object] */;
val* var9 /* : MapIterator[nullable Object, nullable Object] */;
val* var_10 /* var : MapIterator[nullable Object, nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_k /* var k: nullable Object */;
val* var13 /* : nullable Object */;
val* var_v /* var v: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa MapRead[nullable Object, nullable Object] */
cltype = type_standard__MapRead__nullable__standard__Object__nullable__standard__Object.color;
idtype = type_standard__MapRead__nullable__standard__Object__nullable__standard__Object.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var3 = ((long(*)(val* self))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__abstract_collection__MapRead__length]))(var_other); /* length on <var_other:nullable Object(MapRead[nullable Object, nullable Object])>*/
}
{
var4 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__MapRead__length]))(self); /* length on <self:MapRead[nullable Object, nullable Object]>*/
}
{
{ /* Inline kernel#Int#!= (var3,var4) on <var3:Int> */
var7 = var3 == var4;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = 0;
goto RET_LABEL;
} else {
}
var_ = self;
{
var9 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_); /* iterator on <var_:MapRead[nullable Object, nullable Object]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_10); /* is_ok on <var_10:MapIterator[nullable Object, nullable Object]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_10); /* key on <var_10:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var12;
{
var13 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_10); /* item on <var_10:MapIterator[nullable Object, nullable Object]>*/
}
var_v = var13;
{
var14 = ((short int(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var_other, var_k); /* has_key on <var_other:nullable Object(MapRead[nullable Object, nullable Object])>*/
}
var15 = !var14;
if (var15){
var = 0;
goto RET_LABEL;
} else {
}
{
var16 = ((val*(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_other, var_k); /* [] on <var_other:nullable Object(MapRead[nullable Object, nullable Object])>*/
}
if (var16 == NULL) {
var17 = (var_v != NULL);
} else {
var18 = ((short int(*)(val* self, val* p0))((((long)var16&3)?class_info[((long)var16&3)]:var16->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var16, var_v); /* != on <var16:nullable Object>*/
var17 = var18;
}
if (var17){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_10); /* next on <var_10:MapIterator[nullable Object, nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__MapIterator__finish]))(var_10); /* finish on <var_10:MapIterator[nullable Object, nullable Object]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#hash for (self: MapRead[nullable Object, nullable Object]): Int */
long standard___standard__MapRead___standard__kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_res /* var res: Int */;
val* var_ /* var : MapRead[nullable Object, nullable Object] */;
val* var2 /* : MapIterator[nullable Object, nullable Object] */;
val* var_3 /* var : MapIterator[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_k /* var k: nullable Object */;
val* var6 /* : nullable Object */;
val* var_v /* var v: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__MapRead__length]))(self); /* length on <self:MapRead[nullable Object, nullable Object]>*/
}
var_res = var1;
var_ = self;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_); /* iterator on <var_:MapRead[nullable Object, nullable Object]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_3); /* is_ok on <var_3:MapIterator[nullable Object, nullable Object]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_3); /* key on <var_3:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var5;
{
var6 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_3); /* item on <var_3:MapIterator[nullable Object, nullable Object]>*/
}
var_v = var6;
if (var_k == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))((((long)var_k&3)?class_info[((long)var_k&3)]:var_k->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_k, ((val*)NULL)); /* != on <var_k:nullable Object>*/
var7 = var8;
}
if (var7){
{
var9 = ((long(*)(val* self))((((long)var_k&3)?class_info[((long)var_k&3)]:var_k->class)->vft[COLOR_standard__kernel__Object__hash]))(var_k); /* hash on <var_k:nullable Object(Object)>*/
}
{
{ /* Inline kernel#Int#* (var9,7l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <7l:Int> isa OTHER */
/* <7l:Int> isa OTHER */
var12 = 1; /* easy <7l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var13 = var9 * 7l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_res,var10) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var16 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var20 = var_res + var10;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_res = var14;
} else {
}
if (var_v == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
var22 = ((short int(*)(val* self, val* p0))((((long)var_v&3)?class_info[((long)var_v&3)]:var_v->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_v, ((val*)NULL)); /* != on <var_v:nullable Object>*/
var21 = var22;
}
if (var21){
{
var23 = ((long(*)(val* self))((((long)var_v&3)?class_info[((long)var_v&3)]:var_v->class)->vft[COLOR_standard__kernel__Object__hash]))(var_v); /* hash on <var_v:nullable Object(Object)>*/
}
{
{ /* Inline kernel#Int#* (var23,11l) on <var23:Int> */
/* Covariant cast for argument 0 (i) <11l:Int> isa OTHER */
/* <11l:Int> isa OTHER */
var26 = 1; /* easy <11l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var30 = var23 * 11l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_res,var24) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var33 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var37 = var_res + var24;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_res = var31;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_3); /* next on <var_3:MapIterator[nullable Object, nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__MapIterator__finish]))(var_3); /* finish on <var_3:MapIterator[nullable Object, nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Map#[]= for (self: Map[nullable Object, nullable Object], nullable Object, nullable Object) */
void standard___standard__Map____91d_93d_61d(val* self, val* p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "[]=", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 556);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection#Map#recover_with for (self: Map[nullable Object, nullable Object], MapRead[nullable Object, nullable Object]) */
void standard___standard__Map___recover_with(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_map /* var map: MapRead[nullable Object, nullable Object] */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
val* var_i /* var i: MapIterator[nullable Object, nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var4 /* : nullable Object */;
/* Covariant cast for argument 0 (map) <p0:MapRead[nullable Object, nullable Object]> isa MapRead[K, V] */
/* <p0:MapRead[nullable Object, nullable Object]> isa MapRead[K, V] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__MapRead__standard__Map___35dK__standard__Map___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MapRead[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 573);
fatal_exit(1);
}
var_map = p0;
{
var1 = ((val*(*)(val* self))((((long)var_map&3)?class_info[((long)var_map&3)]:var_map->class)->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_map); /* iterator on <var_map:MapRead[nullable Object, nullable Object]>*/
}
var_i = var1;
for(;;) {
{
var2 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_i); /* is_ok on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_i); /* key on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
{
var4 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_i); /* item on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(self, var3, var4); /* []= on <self:Map[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_i); /* next on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_collection#Map#clear for (self: Map[nullable Object, nullable Object]) */
void standard___standard__Map___clear(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "clear", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 597);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection#Map#values for (self: Map[nullable Object, nullable Object]): RemovableCollection[nullable Object] */
val* standard___standard__Map___MapRead__values(val* self) {
val* var /* : RemovableCollection[nullable Object] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "values", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 607);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Map#keys for (self: Map[nullable Object, nullable Object]): RemovableCollection[nullable Object] */
val* standard___standard__Map___MapRead__keys(val* self) {
val* var /* : RemovableCollection[nullable Object] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "keys", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 609);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapIterator#item for (self: MapIterator[nullable Object, nullable Object]): nullable Object */
val* standard___standard__MapIterator___item(val* self) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "item", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 614);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapIterator#key for (self: MapIterator[nullable Object, nullable Object]): nullable Object */
val* standard___standard__MapIterator___key(val* self) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "key", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 618);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapIterator#next for (self: MapIterator[nullable Object, nullable Object]) */
void standard___standard__MapIterator___next(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "next", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 622);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection#MapIterator#is_ok for (self: MapIterator[nullable Object, nullable Object]): Bool */
short int standard___standard__MapIterator___is_ok(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "is_ok", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 626);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapIterator#finish for (self: MapIterator[nullable Object, nullable Object]) */
void standard___standard__MapIterator___finish(val* self) {
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#original_iterator for (self: MapKeysIterator[nullable Object, nullable Object]): MapIterator[nullable Object, nullable Object] */
val* standard___standard__MapKeysIterator___original_iterator(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__abstract_collection__MapKeysIterator___original_iterator].val; /* _original_iterator on <self:MapKeysIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 646);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapKeysIterator#original_iterator= for (self: MapKeysIterator[nullable Object, nullable Object], MapIterator[nullable Object, nullable Object]) */
void standard___standard__MapKeysIterator___original_iterator_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (original_iterator) <p0:MapIterator[nullable Object, nullable Object]> isa MapIterator[K, V] */
/* <p0:MapIterator[nullable Object, nullable Object]> isa MapIterator[K, V] */
type_struct = self->type->resolution_table->types[COLOR_standard__MapIterator__standard__MapKeysIterator___35dK__standard__MapKeysIterator___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MapIterator[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 646);
fatal_exit(1);
}
self->attrs[COLOR_standard__abstract_collection__MapKeysIterator___original_iterator].val = p0; /* _original_iterator on <self:MapKeysIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#is_ok for (self: MapKeysIterator[nullable Object, nullable Object]): Bool */
short int standard___standard__MapKeysIterator___Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__MapKeysIterator__original_iterator]))(self); /* original_iterator on <self:MapKeysIterator[nullable Object, nullable Object]>*/
}
{
var2 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var1); /* is_ok on <var1:MapIterator[nullable Object, nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapKeysIterator#next for (self: MapKeysIterator[nullable Object, nullable Object]) */
void standard___standard__MapKeysIterator___Iterator__next(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__MapKeysIterator__original_iterator]))(self); /* original_iterator on <self:MapKeysIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var); /* next on <var:MapIterator[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#item for (self: MapKeysIterator[nullable Object, nullable Object]): nullable Object */
val* standard___standard__MapKeysIterator___Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
val* var2 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__MapKeysIterator__original_iterator]))(self); /* original_iterator on <self:MapKeysIterator[nullable Object, nullable Object]>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var1); /* key on <var1:MapIterator[nullable Object, nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapKeysIterator#init for (self: MapKeysIterator[nullable Object, nullable Object]) */
void standard___standard__MapKeysIterator___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__MapKeysIterator___standard__kernel__Object__init]))(self); /* init on <self:MapKeysIterator[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#original_iterator for (self: MapValuesIterator[nullable Object, nullable Object]): MapIterator[nullable Object, nullable Object] */
val* standard___standard__MapValuesIterator___original_iterator(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__abstract_collection__MapValuesIterator___original_iterator].val; /* _original_iterator on <self:MapValuesIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 657);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapValuesIterator#original_iterator= for (self: MapValuesIterator[nullable Object, nullable Object], MapIterator[nullable Object, nullable Object]) */
void standard___standard__MapValuesIterator___original_iterator_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (original_iterator) <p0:MapIterator[nullable Object, nullable Object]> isa MapIterator[K, V] */
/* <p0:MapIterator[nullable Object, nullable Object]> isa MapIterator[K, V] */
type_struct = self->type->resolution_table->types[COLOR_standard__MapIterator__standard__MapValuesIterator___35dK__standard__MapValuesIterator___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MapIterator[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 657);
fatal_exit(1);
}
self->attrs[COLOR_standard__abstract_collection__MapValuesIterator___original_iterator].val = p0; /* _original_iterator on <self:MapValuesIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#is_ok for (self: MapValuesIterator[nullable Object, nullable Object]): Bool */
short int standard___standard__MapValuesIterator___Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__MapValuesIterator__original_iterator]))(self); /* original_iterator on <self:MapValuesIterator[nullable Object, nullable Object]>*/
}
{
var2 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var1); /* is_ok on <var1:MapIterator[nullable Object, nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapValuesIterator#next for (self: MapValuesIterator[nullable Object, nullable Object]) */
void standard___standard__MapValuesIterator___Iterator__next(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__MapValuesIterator__original_iterator]))(self); /* original_iterator on <self:MapValuesIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var); /* next on <var:MapIterator[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#item for (self: MapValuesIterator[nullable Object, nullable Object]): nullable Object */
val* standard___standard__MapValuesIterator___Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
val* var2 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__MapValuesIterator__original_iterator]))(self); /* original_iterator on <self:MapValuesIterator[nullable Object, nullable Object]>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var1); /* item on <var1:MapIterator[nullable Object, nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapValuesIterator#init for (self: MapValuesIterator[nullable Object, nullable Object]) */
void standard___standard__MapValuesIterator___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__MapValuesIterator___standard__kernel__Object__init]))(self); /* init on <self:MapValuesIterator[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#SequenceRead#first for (self: SequenceRead[nullable Object]): nullable Object */
val* standard___standard__SequenceRead___Collection__first(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:SequenceRead[nullable Object]>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert \'not_empty\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 682);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self, long p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(self, 0l); /* [] on <self:SequenceRead[nullable Object]>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* standard___standard__SequenceRead____91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "[]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 686);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#last for (self: SequenceRead[nullable Object]): nullable Object */
val* standard___standard__SequenceRead___last(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
val* var8 /* : nullable Object */;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:SequenceRead[nullable Object]>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert \'not_empty\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 707);
fatal_exit(1);
}
{
var3 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:SequenceRead[nullable Object]>*/
}
{
{ /* Inline kernel#Int#- (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var7 = var3 - 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var8 = ((val*(*)(val* self, long p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(self, var4); /* [] on <self:SequenceRead[nullable Object]>*/
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#index_of for (self: SequenceRead[nullable Object], nullable Object): Int */
long standard___standard__SequenceRead___index_of(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__SequenceRead___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 711);
fatal_exit(1);
}
var_item = p0;
{
var2 = ((long(*)(val* self, val* p0, long p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__SequenceRead__index_of_from]))(self, var_item, 0l); /* index_of_from on <self:SequenceRead[nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#last_index_of for (self: SequenceRead[nullable Object], nullable Object): Int */
long standard___standard__SequenceRead___last_index_of(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
long var9 /* : Int */;
long var10 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__SequenceRead___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 720);
fatal_exit(1);
}
var_item = p0;
{
var2 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:SequenceRead[nullable Object]>*/
}
{
{ /* Inline kernel#Int#- (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name8 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var9 = var2 - 1l;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var10 = ((long(*)(val* self, val* p0, long p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__SequenceRead__last_index_of_from]))(self, var_item, var3); /* last_index_of_from on <self:SequenceRead[nullable Object]>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#index_of_from for (self: SequenceRead[nullable Object], nullable Object, Int): Int */
long standard___standard__SequenceRead___index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var_p /* var p: Int */;
val* var2 /* : Iterator[nullable Object] */;
val* var_i /* var i: IndexedIterator[nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var23 /* : Int */;
long var25 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__SequenceRead___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 729);
fatal_exit(1);
}
var_item = p0;
var_pos = p1;
var_p = 0l;
{
var2 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(self); /* iterator on <self:SequenceRead[nullable Object]>*/
}
var_i = var2;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:IndexedIterator[nullable Object]>*/
}
if (var3){
{
{ /* Inline kernel#Int#>= (var_p,var_pos) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var7 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var11 = var_p >= var_pos;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
{
var12 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:IndexedIterator[nullable Object]>*/
}
if (var12 == NULL) {
var13 = (var_item == NULL);
} else {
var14 = ((short int(*)(val* self, val* p0))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var12, var_item); /* == on <var12:nullable Object>*/
var13 = var14;
}
var4 = var13;
} else {
var4 = var_;
}
if (var4){
{
var15 = ((long(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(var_i); /* index on <var_i:IndexedIterator[nullable Object]>*/
}
var = var15;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:IndexedIterator[nullable Object]>*/
}
{
{ /* Inline kernel#Int#+ (var_p,1l) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var22 = var_p + 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_p = var16;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var25 = -1l;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#last_index_of_from for (self: SequenceRead[nullable Object], nullable Object, Int): Int */
long standard___standard__SequenceRead___last_index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var2 /* : Int */;
long var4 /* : Int */;
long var_res /* var res: Int */;
long var_p /* var p: Int */;
val* var5 /* : Iterator[nullable Object] */;
val* var_i /* var i: IndexedIterator[nullable Object] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__SequenceRead___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 749);
fatal_exit(1);
}
var_item = p0;
var_pos = p1;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var4 = -1l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_res = var2;
var_p = 0l;
{
var5 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(self); /* iterator on <self:SequenceRead[nullable Object]>*/
}
var_i = var5;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:IndexedIterator[nullable Object]>*/
}
if (var6){
{
{ /* Inline kernel#Int#> (var_p,var_pos) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var9 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var13 = var_p > var_pos;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
goto BREAK_label;
} else {
}
{
var14 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:IndexedIterator[nullable Object]>*/
}
if (var14 == NULL) {
var15 = (var_item == NULL);
} else {
var16 = ((short int(*)(val* self, val* p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var14, var_item); /* == on <var14:nullable Object>*/
var15 = var16;
}
if (var15){
var_res = var_p;
} else {
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:IndexedIterator[nullable Object]>*/
}
{
{ /* Inline kernel#Int#+ (var_p,1l) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var23 = var_p + 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_p = var17;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#== for (self: SequenceRead[nullable Object], nullable Object): Bool */
short int standard___standard__SequenceRead___standard__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var_l /* var l: Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var_i /* var i: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
var_o = p0;
/* <var_o:nullable Object> isa SequenceRead[nullable Object] */
cltype = type_standard__SequenceRead__nullable__standard__Object.color;
idtype = type_standard__SequenceRead__nullable__standard__Object.id;
if(var_o == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var3 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:SequenceRead[nullable Object]>*/
}
var_l = var3;
{
var4 = ((long(*)(val* self))((((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_o); /* length on <var_o:nullable Object(SequenceRead[nullable Object])>*/
}
{
{ /* Inline kernel#Int#!= (var4,var_l) on <var4:Int> */
var7 = var4 == var_l;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = 0;
goto RET_LABEL;
} else {
}
var_i = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var11 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var14 = var_i < var_l;
var9 = var14;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var15 = ((val*(*)(val* self, long p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(self, var_i); /* [] on <self:SequenceRead[nullable Object]>*/
}
{
var16 = ((val*(*)(val* self, long p0))((((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_o, var_i); /* [] on <var_o:nullable Object(SequenceRead[nullable Object])>*/
}
if (var15 == NULL) {
var17 = (var16 != NULL);
} else {
var18 = ((short int(*)(val* self, val* p0))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var15, var16); /* != on <var15:nullable Object>*/
var17 = var18;
}
if (var17){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var25 = var_i + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_i = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#hash for (self: SequenceRead[nullable Object]): Int */
long standard___standard__SequenceRead___standard__kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_res /* var res: Int */;
val* var_ /* var : SequenceRead[nullable Object] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : IndexedIterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:SequenceRead[nullable Object]>*/
}
{
{ /* Inline kernel#Int#+ (17l,var1) on <17l:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var5 = 17l + var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_res = var2;
var_ = self;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[nullable Object]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:IndexedIterator[nullable Object]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:IndexedIterator[nullable Object]>*/
}
var_e = var9;
{
{ /* Inline kernel#Int#* (var_res,3l) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var12 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var16 = var_res * 3l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Int#/ (var10,2l) on <var10:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var19 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var23 = var10 / 2l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_res = var17;
if (var_e == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
var25 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var24 = var25;
}
if (var24){
{
var26 = ((long(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__kernel__Object__hash]))(var_e); /* hash on <var_e:nullable Object(Object)>*/
}
{
{ /* Inline kernel#Int#+ (var_res,var26) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var29 = 1; /* easy <var26:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var33 = var_res + var26;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_res = var27;
} else {
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:IndexedIterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:IndexedIterator[nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#iterator for (self: SequenceRead[nullable Object]): IndexedIterator[nullable Object] */
val* standard___standard__SequenceRead___Collection__iterator(val* self) {
val* var /* : IndexedIterator[nullable Object] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "iterator", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 806);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#iterator_from for (self: SequenceRead[nullable Object], Int): IndexedIterator[nullable Object] */
val* standard___standard__SequenceRead___iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[nullable Object] */;
long var_pos /* var pos: Int */;
val* var1 /* : Iterator[nullable Object] */;
val* var_res /* var res: IndexedIterator[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
var_pos = p0;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(self); /* iterator on <self:SequenceRead[nullable Object]>*/
}
var_res = var1;
for(;;) {
{
{ /* Inline kernel#Int#> (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var6 = var_pos > 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
{
var7 = ((short int(*)(val* self))((((long)var_res&3)?class_info[((long)var_res&3)]:var_res->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_res); /* is_ok on <var_res:IndexedIterator[nullable Object]>*/
}
var2 = var7;
} else {
var2 = var_;
}
if (var2){
{
((void(*)(val* self))((((long)var_res&3)?class_info[((long)var_res&3)]:var_res->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_res); /* next on <var_res:IndexedIterator[nullable Object]>*/
}
{
{ /* Inline kernel#Int#- (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var14 = var_pos - 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_pos = var8;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#reverse_iterator for (self: SequenceRead[nullable Object]): IndexedIterator[nullable Object] */
val* standard___standard__SequenceRead___reverse_iterator(val* self) {
val* var /* : IndexedIterator[nullable Object] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "reverse_iterator", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 822);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#reverse_iterator_from for (self: SequenceRead[nullable Object], Int): IndexedIterator[nullable Object] */
val* standard___standard__SequenceRead___reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[nullable Object] */;
long var_pos /* var pos: Int */;
val* var1 /* : IndexedIterator[nullable Object] */;
val* var_res /* var res: IndexedIterator[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
var_pos = p0;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__SequenceRead__reverse_iterator]))(self); /* reverse_iterator on <self:SequenceRead[nullable Object]>*/
}
var_res = var1;
for(;;) {
{
{ /* Inline kernel#Int#> (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var6 = var_pos > 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
{
var7 = ((short int(*)(val* self))((((long)var_res&3)?class_info[((long)var_res&3)]:var_res->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_res); /* is_ok on <var_res:IndexedIterator[nullable Object]>*/
}
var2 = var7;
} else {
var2 = var_;
}
if (var2){
{
((void(*)(val* self))((((long)var_res&3)?class_info[((long)var_res&3)]:var_res->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_res); /* next on <var_res:IndexedIterator[nullable Object]>*/
}
{
{ /* Inline kernel#Int#- (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var14 = var_pos - 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_pos = var8;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Sequence#first= for (self: Sequence[nullable Object], nullable Object) */
void standard___standard__Sequence___first_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Sequence___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 849);
fatal_exit(1);
}
var_item = p0;
{
((void(*)(val* self, long p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(self, 0l, var_item); /* []= on <self:Sequence[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#last= for (self: Sequence[nullable Object], nullable Object) */
void standard___standard__Sequence___last_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var_l /* var l: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Sequence___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 858);
fatal_exit(1);
}
var_item = p0;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:Sequence[nullable Object]>*/
}
var_l = var1;
{
{ /* Inline kernel#Int#> (var_l,0l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var8 = var_l > 0l;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline kernel#Int#- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var15 = var_l - 1l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
((void(*)(val* self, long p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(self, var9, var_item); /* []= on <self:Sequence[nullable Object]>*/
}
} else {
{
((void(*)(val* self, long p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(self, 0l, var_item); /* []= on <self:Sequence[nullable Object]>*/
}
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#add for (self: Sequence[nullable Object], nullable Object) */
void standard___standard__Sequence___SimpleCollection__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Sequence___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 880);
fatal_exit(1);
}
var_e = p0;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Sequence__push]))(self, var_e); /* push on <self:Sequence[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#push for (self: Sequence[nullable Object], nullable Object) */
void standard___standard__Sequence___push(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "push", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 883);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection#Sequence#append for (self: Sequence[nullable Object], Collection[nullable Object]) */
void standard___standard__Sequence___append(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Collection__standard__Sequence___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 891);
fatal_exit(1);
}
var_coll = p0;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(self, var_coll); /* add_all on <self:Sequence[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#pop for (self: Sequence[nullable Object]): nullable Object */
val* standard___standard__Sequence___pop(val* self) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "pop", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 900);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Sequence#unshift for (self: Sequence[nullable Object], nullable Object) */
void standard___standard__Sequence___unshift(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "unshift", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 910);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection#Sequence#prepend for (self: Sequence[nullable Object], Collection[nullable Object]) */
void standard___standard__Sequence___prepend(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Collection__standard__Sequence___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 918);
fatal_exit(1);
}
var_coll = p0;
{
((void(*)(val* self, val* p0, long p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Sequence__insert_all]))(self, var_coll, 0l); /* insert_all on <self:Sequence[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#shift for (self: Sequence[nullable Object]): nullable Object */
val* standard___standard__Sequence___shift(val* self) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "shift", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 927);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Sequence#[]= for (self: Sequence[nullable Object], Int, nullable Object) */
void standard___standard__Sequence____91d_93d_61d(val* self, long p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "[]=", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 938);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection#Sequence#insert for (self: Sequence[nullable Object], nullable Object, Int) */
void standard___standard__Sequence___insert(val* self, val* p0, long p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "insert", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 953);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection#Sequence#insert_all for (self: Sequence[nullable Object], Collection[nullable Object], Int) */
void standard___standard__Sequence___insert_all(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
long var_index /* var index: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var_21 /* var : Collection[nullable Object] */;
val* var22 /* : Iterator[nullable Object] */;
val* var_23 /* var : Iterator[nullable Object] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_c /* var c: nullable Object */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Collection__standard__Sequence___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 963);
fatal_exit(1);
}
var_coll = p0;
var_index = p1;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var8 = var_index >= 0l;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
var9 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:Sequence[nullable Object]>*/
}
{
{ /* Inline kernel#Int#< (var_index,var9) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var16 = var_index < var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var1 = var10;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 973);
fatal_exit(1);
}
{
var17 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:Sequence[nullable Object]>*/
}
{
{ /* Inline kernel#Int#== (var_index,var17) on <var_index:Int> */
var20 = var_index == var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(self, var_coll); /* add_all on <self:Sequence[nullable Object]>*/
}
} else {
}
var_21 = var_coll;
{
var22 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_21); /* iterator on <var_21:Collection[nullable Object]>*/
}
var_23 = var22;
for(;;) {
{
var24 = ((short int(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_23); /* is_ok on <var_23:Iterator[nullable Object]>*/
}
if (var24){
{
var25 = ((val*(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_23); /* item on <var_23:Iterator[nullable Object]>*/
}
var_c = var25;
{
((void(*)(val* self, val* p0, long p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Sequence__insert]))(self, var_c, var_index); /* insert on <self:Sequence[nullable Object]>*/
}
{
{ /* Inline kernel#Int#+ (var_index,1l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var28 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var32 = var_index + 1l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_index = var26;
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_23); /* next on <var_23:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_23); /* finish on <var_23:Iterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#remove_at for (self: Sequence[nullable Object], Int) */
void standard___standard__Sequence___remove_at(val* self, long p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "remove_at", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 983);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection#IndexedIterator#index for (self: IndexedIterator[nullable Object]): Int */
long standard___standard__IndexedIterator___index(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "index", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 996);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMap#couple_at for (self: CoupleMap[nullable Object, nullable Object], nullable Object): nullable Couple[nullable Object, nullable Object] */
val* standard___standard__CoupleMap___couple_at(val* self, val* p0) {
val* var /* : nullable Couple[nullable Object, nullable Object] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "couple_at", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 1005);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMap#couple_iterator for (self: CoupleMap[nullable Object, nullable Object]): Iterator[Couple[nullable Object, nullable Object]] */
val* standard___standard__CoupleMap___couple_iterator(val* self) {
val* var /* : Iterator[Couple[nullable Object, nullable Object]] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "couple_iterator", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 1009);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMap#iterator for (self: CoupleMap[nullable Object, nullable Object]): MapIterator[nullable Object, nullable Object] */
val* standard___standard__CoupleMap___MapRead__iterator(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
val* var1 /* : CoupleMapIterator[nullable Object, nullable Object] */;
val* var2 /* : Iterator[Couple[nullable Object, nullable Object]] */;
var1 = NEW_standard__abstract_collection__CoupleMapIterator((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__abstract_collection__CoupleMapIterator__standard__CoupleMap___35dK__standard__CoupleMap___35dV]);
{
var2 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__CoupleMap__couple_iterator]))(self); /* couple_iterator on <self:CoupleMap[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__CoupleMapIterator__iter_61d]))(var1, var2); /* iter= on <var1:CoupleMapIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:CoupleMapIterator[nullable Object, nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMap#[] for (self: CoupleMap[nullable Object, nullable Object], nullable Object): nullable Object */
val* standard___standard__CoupleMap___MapRead___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
val* var2 /* : nullable Couple[nullable Object, nullable Object] */;
val* var_c /* var c: nullable Couple[nullable Object, nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var6 /* : nullable Object */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__CoupleMap___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 1015);
fatal_exit(1);
}
var_key = p0;
{
var2 = ((val*(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__CoupleMap__couple_at]))(self, var_key); /* couple_at on <self:CoupleMap[nullable Object, nullable Object]>*/
}
var_c = var2;
if (var_c == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, ((val*)NULL)); /* == on <var_c:nullable Couple[nullable Object, nullable Object]>*/
var3 = var4;
}
if (var3){
{
var5 = ((val*(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__MapRead__provide_default_value]))(self, var_key); /* provide_default_value on <self:CoupleMap[nullable Object, nullable Object]>*/
}
var = var5;
goto RET_LABEL;
} else {
{
var6 = ((val*(*)(val* self))(var_c->class->vft[COLOR_standard__abstract_collection__Couple__second]))(var_c); /* second on <var_c:nullable Couple[nullable Object, nullable Object](Couple[nullable Object, nullable Object])>*/
}
var = var6;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMap#has_key for (self: CoupleMap[nullable Object, nullable Object], nullable Object): Bool */
short int standard___standard__CoupleMap___MapRead__has_key(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
val* var2 /* : nullable Couple[nullable Object, nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__CoupleMap___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 1025);
fatal_exit(1);
}
var_key = p0;
{
var2 = ((val*(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__CoupleMap__couple_at]))(self, var_key); /* couple_at on <self:CoupleMap[nullable Object, nullable Object]>*/
}
if (var2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var2, ((val*)NULL)); /* != on <var2:nullable Couple[nullable Object, nullable Object]>*/
var3 = var4;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#item for (self: CoupleMapIterator[nullable Object, nullable Object]): nullable Object */
val* standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Iterator[Couple[nullable Object, nullable Object]] */;
val* var2 /* : nullable Object */;
val* var3 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 1033);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var1); /* item on <var1:Iterator[Couple[nullable Object, nullable Object]]>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__abstract_collection__Couple__second]))(var2); /* second on <var2:nullable Object(Couple[nullable Object, nullable Object])>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#key for (self: CoupleMapIterator[nullable Object, nullable Object]): nullable Object */
val* standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__key(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Iterator[Couple[nullable Object, nullable Object]] */;
val* var2 /* : nullable Object */;
val* var3 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 1037);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var1); /* item on <var1:Iterator[Couple[nullable Object, nullable Object]]>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__abstract_collection__Couple__first]))(var2); /* first on <var2:nullable Object(Couple[nullable Object, nullable Object])>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#is_ok for (self: CoupleMapIterator[nullable Object, nullable Object]): Bool */
short int standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Iterator[Couple[nullable Object, nullable Object]] */;
short int var2 /* : Bool */;
var1 = self->attrs[COLOR_standard__abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 1039);
fatal_exit(1);
}
{
var2 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var1); /* is_ok on <var1:Iterator[Couple[nullable Object, nullable Object]]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#next for (self: CoupleMapIterator[nullable Object, nullable Object]) */
void standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__next(val* self) {
val* var /* : Iterator[Couple[nullable Object, nullable Object]] */;
var = self->attrs[COLOR_standard__abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 1043);
fatal_exit(1);
}
{
((void(*)(val* self))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var); /* next on <var:Iterator[Couple[nullable Object, nullable Object]]>*/
}
RET_LABEL:;
}
/* method abstract_collection#CoupleMapIterator#iter for (self: CoupleMapIterator[nullable Object, nullable Object]): Iterator[Couple[nullable Object, nullable Object]] */
val* standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___iter(val* self) {
val* var /* : Iterator[Couple[nullable Object, nullable Object]] */;
val* var1 /* : Iterator[Couple[nullable Object, nullable Object]] */;
var1 = self->attrs[COLOR_standard__abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 1046);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#iter= for (self: CoupleMapIterator[nullable Object, nullable Object], Iterator[Couple[nullable Object, nullable Object]]) */
void standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___iter_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (iter) <p0:Iterator[Couple[nullable Object, nullable Object]]> isa Iterator[Couple[K, V]] */
/* <p0:Iterator[Couple[nullable Object, nullable Object]]> isa Iterator[Couple[K, V]] */
type_struct = self->type->resolution_table->types[COLOR_standard__Iterator__standard__Couple__standard__abstract_collection__CoupleMapIterator___35dK__standard__abstract_collection__CoupleMapIterator___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Iterator[Couple[K, V]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 1046);
fatal_exit(1);
}
self->attrs[COLOR_standard__abstract_collection__CoupleMapIterator___iter].val = p0; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#CoupleMapIterator#init for (self: CoupleMapIterator[nullable Object, nullable Object]) */
void standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___standard__kernel__Object__init]))(self); /* init on <self:CoupleMapIterator[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#Couple#first for (self: Couple[nullable Object, nullable Object]): nullable Object */
val* standard___standard__Couple___first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__abstract_collection__Couple___first].val; /* _first on <self:Couple[nullable Object, nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Couple#first= for (self: Couple[nullable Object, nullable Object], nullable Object) */
void standard___standard__Couple___first_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (first) <p0:nullable Object> isa F */
/* <p0:nullable Object> isa F */
type_struct = self->type->resolution_table->types[COLOR_standard__Couple___35dF];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "F", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 1054);
fatal_exit(1);
}
self->attrs[COLOR_standard__abstract_collection__Couple___first].val = p0; /* _first on <self:Couple[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#Couple#second for (self: Couple[nullable Object, nullable Object]): nullable Object */
val* standard___standard__Couple___second(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__abstract_collection__Couple___second].val; /* _second on <self:Couple[nullable Object, nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Couple#second= for (self: Couple[nullable Object, nullable Object], nullable Object) */
void standard___standard__Couple___second_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (second) <p0:nullable Object> isa S */
/* <p0:nullable Object> isa S */
type_struct = self->type->resolution_table->types[COLOR_standard__Couple___35dS];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "S", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 1057);
fatal_exit(1);
}
self->attrs[COLOR_standard__abstract_collection__Couple___second].val = p0; /* _second on <self:Couple[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#Couple#init for (self: Couple[nullable Object, nullable Object]) */
void standard___standard__Couple___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__Couple___standard__kernel__Object__init]))(self); /* init on <self:Couple[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
