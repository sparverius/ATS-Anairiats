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

/* prologues from statically loaded files */

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"
/* external codes at top */
/* type definitions */
typedef
struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_rec_0 ;

typedef
struct {
ats_ptr_type atslab_s2exp_srt ;
ats_ptr_type atslab_s2exp_node ;
} anairiats_rec_1 ;

typedef
struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
ats_ptr_type atslab_2 ;
} anairiats_rec_2 ;

/* external typedefs */
/* assuming abstract types */
/* sum constructor declarations */
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2CSTOPTsome_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2CSTOPTnone_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2CSTLSTcons_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2CSTLSTnil_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__D2CONLSTcons_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__D2CONLSTnil_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ITEMcst_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ITEMdatconptr_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ITEMdatcontyp_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ITEMe1xp_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ITEMfil_4) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ITEMvar_5) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__TYRECKINDbox_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__TYRECKINDflt0_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__TYRECKINDflt1_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__TYRECKINDflt_ext_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__WTHS2EXPLSTnil_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__WTHS2EXPLSTcons_some_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__WTHS2EXPLSTcons_none_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__TMPS2EXPLSTLSTnil_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__TMPS2EXPLSTLSTcons_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__LABS2EXPLSTnil_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__LABS2EXPLSTcons_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eapp_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Echar_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eclo_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Ecrypt_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Ecst_4) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Edatconptr_5) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Edatcontyp_6) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eeff_7) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eeqeq_8) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eexi_9) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eextype_10) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Efun_11) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eint_12) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eintinf_13) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Elam_14) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Emetfn_15) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Emetlt_16) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eout_17) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eproj_18) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eread_19) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Erefarg_20) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Esel_21) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Esize_22) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Esizeof_23) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Etop_24) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Etup_25) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Etyarr_26) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Etyleq_27) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Etylst_28) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Etyrec_29) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Euni_30) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eunion_31) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Evar_32) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2EVar_33) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Evararg_34) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Ewth_35) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2LAB0lab_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2LAB0ind_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2LAB1lab_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2LAB1ind_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2EFFall_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2EFFnil_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2EFFset_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__LABS2ZEXPLSTnil_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__LABS2ZEXPLSTcons_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEapp_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEbot_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEcst_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEextype_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEptr_4) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEtyarr_5) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEtyrec_6) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEunion_7) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEvar_8) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__LABS2KEXPLSTnil_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__LABS2KEXPLSTcons_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEany_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEapp_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEcst_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEfun_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEtyarr_4) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEtyrec_5) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEunion_6) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEvar_7) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__SP2Tcon_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2TEsrt_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2TEsub_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2RTbas_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2RTfun_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2RTtup_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2RTBASpre_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2RTBASimp_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2RTBASdef_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2EXPARGone_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2EXPARGall_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2EXPARGseq_2) ;

/* exn constructor declarations */
/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_counter_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_effect_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_filename_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_intinf_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_label_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_location_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_stamp_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_syntax_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_staexp1_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload () {
static int ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload_flag) return ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2src_2ats_counter_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_effect_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_filename_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_intinf_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_location_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_stamp_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_syntax_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_staexp1_2esats__staload () ;

// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2CSTOPTsome_0.tag = 0 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2CSTOPTnone_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2CSTLSTcons_0.tag = 0 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2CSTLSTnil_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__D2CONLSTcons_0.tag = 0 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__D2CONLSTnil_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ITEMcst_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ITEMdatconptr_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ITEMdatcontyp_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ITEMe1xp_3.tag = 3 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ITEMfil_4.tag = 4 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ITEMvar_5.tag = 5 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__TYRECKINDbox_0.tag = 0 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__TYRECKINDflt0_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__TYRECKINDflt1_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__TYRECKINDflt_ext_3.tag = 3 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__WTHS2EXPLSTnil_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__WTHS2EXPLSTcons_some_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__WTHS2EXPLSTcons_none_2.tag = 2 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__TMPS2EXPLSTLSTnil_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__TMPS2EXPLSTLSTcons_1.tag = 1 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__LABS2EXPLSTnil_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__LABS2EXPLSTcons_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eapp_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Echar_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eclo_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Ecrypt_3.tag = 3 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Ecst_4.tag = 4 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Edatconptr_5.tag = 5 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Edatcontyp_6.tag = 6 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eeff_7.tag = 7 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eeqeq_8.tag = 8 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eexi_9.tag = 9 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eextype_10.tag = 10 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Efun_11.tag = 11 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eint_12.tag = 12 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eintinf_13.tag = 13 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Elam_14.tag = 14 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Emetfn_15.tag = 15 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Emetlt_16.tag = 16 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eout_17.tag = 17 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eproj_18.tag = 18 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eread_19.tag = 19 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Erefarg_20.tag = 20 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Esel_21.tag = 21 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Esize_22.tag = 22 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Esizeof_23.tag = 23 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Etop_24.tag = 24 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Etup_25.tag = 25 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Etyarr_26.tag = 26 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Etyleq_27.tag = 27 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Etylst_28.tag = 28 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Etyrec_29.tag = 29 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Euni_30.tag = 30 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Eunion_31.tag = 31 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Evar_32.tag = 32 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2EVar_33.tag = 33 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Evararg_34.tag = 34 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2Ewth_35.tag = 35 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2LAB0lab_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2LAB0ind_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2LAB1lab_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2LAB1ind_3.tag = 3 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2EFFall_0.tag = 0 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2EFFnil_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2EFFset_2.tag = 2 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__LABS2ZEXPLSTnil_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__LABS2ZEXPLSTcons_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEapp_0.tag = 0 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEbot_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEcst_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEextype_3.tag = 3 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEptr_4.tag = 4 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEtyarr_5.tag = 5 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEtyrec_6.tag = 6 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEunion_7.tag = 7 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2ZEvar_8.tag = 8 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__LABS2KEXPLSTnil_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__LABS2KEXPLSTcons_1.tag = 1 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEany_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEapp_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEcst_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEfun_3.tag = 3 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEtyarr_4.tag = 4 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEtyrec_5.tag = 5 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEunion_6.tag = 6 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2KEvar_7.tag = 7 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__SP2Tcon_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2TEsrt_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2TEsub_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2RTbas_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2RTfun_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2RTtup_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2RTBASpre_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2RTBASimp_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2RTBASdef_2.tag = 2 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2EXPARGone_0.tag = 0 ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2EXPARGall_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__S2EXPARGseq_2.tag = 2 ;
return ;
} /* staload function */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [/home/hwxi/Research/ATS-Anairiats/bootstrap1/ats_staexp2_sats.c] */
