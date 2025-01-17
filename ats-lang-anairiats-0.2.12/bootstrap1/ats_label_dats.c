/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2016-8-25: 20h:18m
**
*/

/* include some .h files */
#ifndef _ATS_HEADER_NONE
#include "ats_config.h"
#include "ats_basics.h"
#include "ats_types.h"
#include "ats_exception.h"
#include "ats_memory.h"
#endif /* _ATS_HEADER_NONE */

/* include some .cats files */
#ifndef _ATS_PRELUDE_NONE
#include "prelude/CATS/basics.cats"
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/byte.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/sizetype.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/reference.cats"
#include "prelude/CATS/string.cats"
#include "prelude/CATS/lazy.cats"
#include "prelude/CATS/lazy_vt.cats"
#include "prelude/CATS/printf.cats"
#include "prelude/CATS/list.cats"
#include "prelude/CATS/option.cats"
#include "prelude/CATS/array.cats"
#include "prelude/CATS/matrix.cats"
#endif /* _ATS_PRELUDE_NONE */
/* prologues from statically loaded files */
/* external codes at top */
/* type definitions */
typedef struct {
int tag ;
ats_int_type atslab_0 ;
} anairiats_sum_0 ;

typedef struct {
int tag ;
ats_ptr_type atslab_0 ;
} anairiats_sum_1 ;

typedef struct {
ats_ptr_type atslab_0 ;
} anairiats_sum_2 ;

typedef struct {
ats_int_type atslab_0 ;
} anairiats_sum_3 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__None_vt_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__Some_vt_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_label_2edats__LABint_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_label_2edats__LABsym_1) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_ptr_type, atspre_stdout_get) () ;
ATSextern_fun(ats_void_type, atspre_stdout_view_set) () ;
ATSextern_fun(ats_ptr_type, atspre_stderr_get) () ;
ATSextern_fun(ats_void_type, atspre_stderr_view_set) () ;
ATSextern_fun(ats_bool_type, atspre_eq_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_neq_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_compare_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_void_type, atspre_fprint_int) (ats_ref_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_ilt) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_ilte) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_igt) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_igte) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__symbol_make_string) (ats_ptr_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__eq_symbol_symbol) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__neq_symbol_symbol) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_int_type, ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__compare_symbol_symbol) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__fprint_symbol) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_int_type, ATS_2d0_2e2_2e12_2src_2ats_label_2esats__compare_label_label) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_label_2esats__fprint_label) (ats_ref_type, ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_w_w_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
int ATS_2d0_2e2_2e12_2src_2ats_label_2esats__sasp__label_t = 0 ;

/* sum constructor declarations */
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_label_2edats__LABint_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_label_2edats__LABsym_1) ;

/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_label.dats: 1785(line=54, offs=26) -- 1797(line=54, offs=38)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__label_make_int (ats_int_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp0) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_label_2esats__label_make_int:
tmp0 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
((ats_sum_ptr_type)tmp0)->tag = 0 ;
ats_selptrset_mac(anairiats_sum_0, tmp0, atslab_0, arg0) ;
return (tmp0) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_label_2esats__label_make_int] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_label.dats: 1826(line=55, offs=29) -- 1858(line=55, offs=61)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__label_make_string (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp1) ;
ATSlocal (ats_ptr_type, tmp2) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_label_2esats__label_make_string:
tmp2 = ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__symbol_make_string (arg0) ;
tmp1 = ATS_MALLOC(sizeof(anairiats_sum_1)) ;
((ats_sum_ptr_type)tmp1)->tag = 1 ;
ats_selptrset_mac(anairiats_sum_1, tmp1, atslab_0, tmp2) ;
return (tmp1) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_label_2esats__label_make_string] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_label.dats: 1885(line=56, offs=26) -- 1897(line=56, offs=38)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__label_make_sym (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp3) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_label_2esats__label_make_sym:
tmp3 = ATS_MALLOC(sizeof(anairiats_sum_1)) ;
((ats_sum_ptr_type)tmp3)->tag = 1 ;
ats_selptrset_mac(anairiats_sum_1, tmp3, atslab_0, arg0) ;
return (tmp3) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_label_2esats__label_make_sym] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_label.dats: 1944(line=60, offs=25) -- 2011(line=61, offs=51)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__label_get_sym (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp4) ;
ATSlocal (ats_ptr_type, tmp5) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_label_2esats__label_get_sym:
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (((ats_sum_ptr_type)arg0)->tag != 1) { goto __ats_lab_1_0 ; }
__ats_lab_0_1:
tmp5 = ats_caselptrlab_mac(anairiats_sum_1, arg0, atslab_0) ;
tmp4 = ATS_MALLOC(sizeof(anairiats_sum_2)) ;
ats_selptrset_mac(anairiats_sum_2, tmp4, atslab_0, tmp5) ;
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
// if (((ats_sum_ptr_type)arg0)->tag != 0) { ats_deadcode_failure_handle () ; }
__ats_lab_1_1:
tmp4 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
return (tmp4) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_label_2esats__label_get_sym] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_label.dats: 2064(line=64, offs=25) -- 2131(line=65, offs=51)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__label_get_int (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp6) ;
ATSlocal (ats_int_type, tmp7) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_label_2esats__label_get_int:
do {
/* branch: __ats_lab_2 */
__ats_lab_2_0:
if (((ats_sum_ptr_type)arg0)->tag != 0) { goto __ats_lab_3_0 ; }
__ats_lab_2_1:
tmp7 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_0) ;
tmp6 = ATS_MALLOC(sizeof(anairiats_sum_3)) ;
ats_selptrset_mac(anairiats_sum_3, tmp6, atslab_0, tmp7) ;
break ;

/* branch: __ats_lab_3 */
__ats_lab_3_0:
// if (((ats_sum_ptr_type)arg0)->tag != 1) { ats_deadcode_failure_handle () ; }
__ats_lab_3_1:
tmp6 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
return (tmp6) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_label_2esats__label_get_int] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_label.dats: 2205(line=70, offs=26) -- 2244(line=70, offs=65)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__lt_label_label (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp8) ;
ATSlocal (ats_int_type, tmp9) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_label_2esats__lt_label_label:
tmp9 = ATS_2d0_2e2_2e12_2src_2ats_label_2esats__compare_label_label (arg0, arg1) ;
tmp8 = atspre_ilt (tmp9, 0) ;
return (tmp8) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_label_2esats__lt_label_label] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_label.dats: 2271(line=71, offs=27) -- 2311(line=71, offs=67)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__lte_label_label (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp10) ;
ATSlocal (ats_int_type, tmp11) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_label_2esats__lte_label_label:
tmp11 = ATS_2d0_2e2_2e12_2src_2ats_label_2esats__compare_label_label (arg0, arg1) ;
tmp10 = atspre_ilte (tmp11, 0) ;
return (tmp10) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_label_2esats__lte_label_label] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_label.dats: 2337(line=72, offs=26) -- 2376(line=72, offs=65)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__gt_label_label (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp12) ;
ATSlocal (ats_int_type, tmp13) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_label_2esats__gt_label_label:
tmp13 = ATS_2d0_2e2_2e12_2src_2ats_label_2esats__compare_label_label (arg0, arg1) ;
tmp12 = atspre_igt (tmp13, 0) ;
return (tmp12) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_label_2esats__gt_label_label] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_label.dats: 2403(line=73, offs=27) -- 2443(line=73, offs=67)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__gte_label_label (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp14) ;
ATSlocal (ats_int_type, tmp15) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_label_2esats__gte_label_label:
tmp15 = ATS_2d0_2e2_2e12_2src_2ats_label_2esats__compare_label_label (arg0, arg1) ;
tmp14 = atspre_igte (tmp15, 0) ;
return (tmp14) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_label_2esats__gte_label_label] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_label.dats: 2491(line=78, offs=16) -- 2625(line=82, offs=20)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__eq_label_label (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp16) ;
ATSlocal (ats_int_type, tmp17) ;
ATSlocal (ats_int_type, tmp18) ;
ATSlocal (ats_ptr_type, tmp19) ;
ATSlocal (ats_ptr_type, tmp20) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_label_2esats__eq_label_label:
do {
/* branch: __ats_lab_4 */
__ats_lab_4_0:
if (((ats_sum_ptr_type)arg0)->tag != 0) { goto __ats_lab_5_0 ; }
__ats_lab_4_1:
if (((ats_sum_ptr_type)arg1)->tag != 0) { goto __ats_lab_6_1 ; }
__ats_lab_4_2:
tmp17 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_0) ;
tmp18 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
tmp16 = atspre_eq_int_int (tmp17, tmp18) ;
break ;

/* branch: __ats_lab_5 */
__ats_lab_5_0:
if (((ats_sum_ptr_type)arg0)->tag != 1) { goto __ats_lab_6_0 ; }
__ats_lab_5_1:
if (((ats_sum_ptr_type)arg1)->tag != 1) { goto __ats_lab_6_1 ; }
__ats_lab_5_2:
tmp19 = ats_caselptrlab_mac(anairiats_sum_1, arg0, atslab_0) ;
tmp20 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_0) ;
tmp16 = ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__eq_symbol_symbol (tmp19, tmp20) ;
break ;

/* branch: __ats_lab_6 */
__ats_lab_6_0:
__ats_lab_6_1:
__ats_lab_6_2:
tmp16 = ats_false_bool ;
break ;
} while (0) ;
return (tmp16) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_label_2esats__eq_label_label] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_label.dats: 2680(line=86, offs=17) -- 2815(line=90, offs=19)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__neq_label_label (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp21) ;
ATSlocal (ats_int_type, tmp22) ;
ATSlocal (ats_int_type, tmp23) ;
ATSlocal (ats_ptr_type, tmp24) ;
ATSlocal (ats_ptr_type, tmp25) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_label_2esats__neq_label_label:
do {
/* branch: __ats_lab_7 */
__ats_lab_7_0:
if (((ats_sum_ptr_type)arg0)->tag != 0) { goto __ats_lab_8_0 ; }
__ats_lab_7_1:
if (((ats_sum_ptr_type)arg1)->tag != 0) { goto __ats_lab_9_1 ; }
__ats_lab_7_2:
tmp22 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_0) ;
tmp23 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
tmp21 = atspre_neq_int_int (tmp22, tmp23) ;
break ;

/* branch: __ats_lab_8 */
__ats_lab_8_0:
if (((ats_sum_ptr_type)arg0)->tag != 1) { goto __ats_lab_9_0 ; }
__ats_lab_8_1:
if (((ats_sum_ptr_type)arg1)->tag != 1) { goto __ats_lab_9_1 ; }
__ats_lab_8_2:
tmp24 = ats_caselptrlab_mac(anairiats_sum_1, arg0, atslab_0) ;
tmp25 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_0) ;
tmp21 = ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__neq_symbol_symbol (tmp24, tmp25) ;
break ;

/* branch: __ats_lab_9 */
__ats_lab_9_0:
__ats_lab_9_1:
__ats_lab_9_2:
tmp21 = ats_true_bool ;
break ;
} while (0) ;
return (tmp21) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_label_2esats__neq_label_label] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_label.dats: 2896(line=96, offs=21) -- 3090(line=101, offs=31)
*/
ATSglobaldec()
ats_int_type
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__compare_label_label (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_int_type, tmp26) ;
ATSlocal (ats_int_type, tmp27) ;
ATSlocal (ats_int_type, tmp28) ;
ATSlocal (ats_ptr_type, tmp29) ;
ATSlocal (ats_ptr_type, tmp30) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_label_2esats__compare_label_label:
do {
/* branch: __ats_lab_10 */
__ats_lab_10_0:
if (((ats_sum_ptr_type)arg0)->tag != 0) { goto __ats_lab_11_0 ; }
__ats_lab_10_1:
if (((ats_sum_ptr_type)arg1)->tag != 0) { goto __ats_lab_12_1 ; }
__ats_lab_10_2:
tmp27 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_0) ;
tmp28 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
tmp26 = atspre_compare_int_int (tmp27, tmp28) ;
break ;

/* branch: __ats_lab_11 */
__ats_lab_11_0:
if (((ats_sum_ptr_type)arg0)->tag != 1) { goto __ats_lab_12_0 ; }
__ats_lab_11_1:
if (((ats_sum_ptr_type)arg1)->tag != 1) { goto __ats_lab_13_1 ; }
__ats_lab_11_2:
tmp29 = ats_caselptrlab_mac(anairiats_sum_1, arg0, atslab_0) ;
tmp30 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_0) ;
tmp26 = ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__compare_symbol_symbol (tmp29, tmp30) ;
break ;

/* branch: __ats_lab_12 */
__ats_lab_12_0:
if (((ats_sum_ptr_type)arg0)->tag != 0) { goto __ats_lab_13_0 ; }
__ats_lab_12_1:
// if (((ats_sum_ptr_type)arg1)->tag != 1) { ats_deadcode_failure_handle () ; }
__ats_lab_12_2:
tmp26 = -1 ;
break ;

/* branch: __ats_lab_13 */
__ats_lab_13_0:
// if (((ats_sum_ptr_type)arg0)->tag != 1) { ats_deadcode_failure_handle () ; }
__ats_lab_13_1:
// if (((ats_sum_ptr_type)arg1)->tag != 0) { ats_deadcode_failure_handle () ; }
__ats_lab_13_2:
tmp26 = 1 ;
break ;
} while (0) ;
return (tmp26) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_label_2esats__compare_label_label] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_label.dats: 3168(line=107, offs=14) -- 3296(line=111, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__fprint_label (ats_ref_type arg0, ats_ptr_type arg1) {
/* local vardec */
// ATSlocal_void (tmp31) ;
ATSlocal (ats_int_type, tmp32) ;
ATSlocal (ats_ptr_type, tmp33) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_label_2esats__fprint_label:
do {
/* branch: __ats_lab_14 */
__ats_lab_14_0:
if (((ats_sum_ptr_type)arg1)->tag != 0) { goto __ats_lab_15_0 ; }
__ats_lab_14_1:
tmp32 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
/* tmp31 = */ atspre_fprint_int (arg0, tmp32) ;
break ;

/* branch: __ats_lab_15 */
__ats_lab_15_0:
// if (((ats_sum_ptr_type)arg1)->tag != 1) { ats_deadcode_failure_handle () ; }
__ats_lab_15_1:
tmp33 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_0) ;
/* tmp31 = */ ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__fprint_symbol (arg0, tmp33) ;
break ;
} while (0) ;
return /* (tmp31) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_label_2esats__fprint_label] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_label.dats: 3345(line=113, offs=23) -- 3382(line=113, offs=60)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__print_label (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp34) ;
ATSlocal (ats_ptr_type, tmp35) ;
ATSlocal (ats_ptr_type, tmp36) ;
// ATSlocal_void (tmp37) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_label_2esats__print_label:
tmp35 = atspre_stdout_get () ;
tmp36 = ats_selsin_mac(tmp35, atslab_1) ;
/* tmp37 = */ ATS_2d0_2e2_2e12_2src_2ats_label_2esats__fprint_label (tmp36, arg0) ;
/* tmp34 = */ atspre_stdout_view_set () ;
return /* (tmp34) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_label_2esats__print_label] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_label.dats: 3405(line=114, offs=23) -- 3442(line=114, offs=60)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__prerr_label (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp38) ;
ATSlocal (ats_ptr_type, tmp39) ;
ATSlocal (ats_ptr_type, tmp40) ;
// ATSlocal_void (tmp41) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_label_2esats__prerr_label:
tmp39 = atspre_stderr_get () ;
tmp40 = ats_selsin_mac(tmp39, atslab_1) ;
/* tmp41 = */ ATS_2d0_2e2_2e12_2src_2ats_label_2esats__fprint_label (tmp40, arg0) ;
/* tmp38 = */ atspre_stderr_view_set () ;
return /* (tmp38) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_label_2esats__prerr_label] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_label_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_label_2edats__staload () {
static int ATS_2d0_2e2_2e12_2src_2ats_label_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2src_2ats_label_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2src_2ats_label_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__staload () ;

// ATS_2d0_2e2_2e12_2src_2ats_label_2edats__LABint_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_label_2edats__LABsym_1.tag = 1 ;
return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e12_2src_2ats_label_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_label_2edats__dynload () {
ATS_2d0_2e2_2e12_2src_2ats_label_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2src_2ats_label_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_w_w_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [/home/hwxi/Research/ATS-Anairiats/bootstrap1/ats_label_dats.c] */
