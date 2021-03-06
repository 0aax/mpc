/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) car_kinematic_cost_ext_cost_fun_jac_hess_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)
#define casadi_sign CASADI_PREFIX(sign)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

casadi_real casadi_sign(casadi_real x) { return x<0 ? -1 : x>0 ? 1 : x;}

static const casadi_int casadi_s0[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s1[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s2[16] = {12, 1, 0, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
static const casadi_int casadi_s3[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s4[13] = {9, 1, 0, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8};
static const casadi_int casadi_s5[24] = {9, 9, 0, 1, 2, 3, 6, 9, 9, 9, 9, 12, 0, 1, 2, 3, 4, 8, 3, 4, 8, 3, 4, 8};

/* car_kinematic_cost_ext_cost_fun_jac_hess:(i0[6],i1[3],i2[12])->(o0,o1[9],o2[9x9,12nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a9;
  a0=arg[2]? arg[2][0] : 0;
  a1=arg[0]? arg[0][5] : 0;
  a2=(a0*a1);
  a3=arg[2]? arg[2][1] : 0;
  a2=(a2+a3);
  a4=(a2*a1);
  a5=arg[2]? arg[2][2] : 0;
  a4=(a4+a5);
  a6=(a4*a1);
  a7=arg[2]? arg[2][3] : 0;
  a6=(a6+a7);
  a8=(a6*a1);
  a9=arg[2]? arg[2][4] : 0;
  a8=(a8+a9);
  a10=(a8*a1);
  a11=arg[2]? arg[2][5] : 0;
  a10=(a10+a11);
  a11=arg[0]? arg[0][0] : 0;
  a10=(a10-a11);
  a11=5.;
  a12=(a11*a0);
  a13=(a12*a1);
  a14=4.;
  a3=(a14*a3);
  a13=(a13+a3);
  a3=(a13*a1);
  a15=3.;
  a5=(a15*a5);
  a3=(a3+a5);
  a5=(a3*a1);
  a16=2.;
  a7=(a16*a7);
  a5=(a5+a7);
  a7=(a5*a1);
  a7=(a7+a9);
  a9=casadi_sq(a7);
  a17=arg[2]? arg[2][6] : 0;
  a11=(a11*a17);
  a18=(a11*a1);
  a19=arg[2]? arg[2][7] : 0;
  a14=(a14*a19);
  a18=(a18+a14);
  a14=(a18*a1);
  a20=arg[2]? arg[2][8] : 0;
  a15=(a15*a20);
  a14=(a14+a15);
  a15=(a14*a1);
  a21=arg[2]? arg[2][9] : 0;
  a22=(a16*a21);
  a15=(a15+a22);
  a22=(a15*a1);
  a23=arg[2]? arg[2][10] : 0;
  a22=(a22+a23);
  a24=casadi_sq(a22);
  a9=(a9+a24);
  a9=sqrt(a9);
  a24=(a7/a9);
  a25=(a10*a24);
  a26=(a17*a1);
  a26=(a26+a19);
  a19=(a26*a1);
  a19=(a19+a20);
  a20=(a19*a1);
  a20=(a20+a21);
  a21=(a20*a1);
  a21=(a21+a23);
  a23=(a21*a1);
  a27=arg[2]? arg[2][11] : 0;
  a23=(a23+a27);
  a27=arg[0]? arg[0][1] : 0;
  a23=(a23-a27);
  a27=(a22/a9);
  a28=(a23*a27);
  a25=(a25+a28);
  a28=(a25*a24);
  a28=(a10-a28);
  a29=casadi_sq(a28);
  a30=(a25*a27);
  a30=(a23-a30);
  a31=casadi_sq(a30);
  a29=(a29+a31);
  a31=fabs(a25);
  a32=casadi_sq(a31);
  a29=(a29+a32);
  a32=1.;
  a32=(a1-a32);
  a33=casadi_sq(a32);
  a29=(a29+a33);
  a33=arg[1]? arg[1][0] : 0;
  a34=casadi_sq(a33);
  a29=(a29+a34);
  a34=arg[1]? arg[1][1] : 0;
  a35=casadi_sq(a34);
  a29=(a29+a35);
  a35=arg[1]? arg[1][2] : 0;
  a36=casadi_sq(a35);
  a29=(a29+a36);
  if (res[0]!=0) res[0][0]=a29;
  a33=(a33+a33);
  if (res[1]!=0) res[1][0]=a33;
  a34=(a34+a34);
  if (res[1]!=0) res[1][1]=a34;
  a35=(a35+a35);
  if (res[1]!=0) res[1][2]=a35;
  a28=(a28+a28);
  a35=casadi_sign(a25);
  a31=(a31+a31);
  a31=(a35*a31);
  a30=(a30+a30);
  a34=(a27*a30);
  a31=(a31-a34);
  a34=(a24*a28);
  a31=(a31-a34);
  a34=(a24*a31);
  a34=(a28+a34);
  a33=(-a34);
  if (res[1]!=0) res[1][3]=a33;
  a33=(a27*a31);
  a33=(a30+a33);
  a29=(-a33);
  if (res[1]!=0) res[1][4]=a29;
  a29=0.;
  if (res[1]!=0) res[1][5]=a29;
  if (res[1]!=0) res[1][6]=a29;
  if (res[1]!=0) res[1][7]=a29;
  a32=(a32+a32);
  a29=(a21*a33);
  a32=(a32+a29);
  a29=(a1*a33);
  a36=(a20*a29);
  a32=(a32+a36);
  a36=(a1*a29);
  a37=(a19*a36);
  a32=(a32+a37);
  a37=(a1*a36);
  a38=(a26*a37);
  a32=(a32+a38);
  a38=(a1*a37);
  a38=(a17*a38);
  a32=(a32+a38);
  a38=(a23*a31);
  a39=(a25*a30);
  a38=(a38-a39);
  a39=(a38/a9);
  a40=(a22+a22);
  a41=(a27/a9);
  a42=(a41*a38);
  a43=(a24/a9);
  a44=(a10*a31);
  a45=(a25*a28);
  a44=(a44-a45);
  a45=(a43*a44);
  a42=(a42+a45);
  a45=(a9+a9);
  a42=(a42/a45);
  a46=(a40*a42);
  a46=(a39-a46);
  a47=(a15*a46);
  a32=(a32+a47);
  a47=(a1*a46);
  a48=(a14*a47);
  a32=(a32+a48);
  a48=(a1*a47);
  a49=(a18*a48);
  a32=(a32+a49);
  a49=(a1*a48);
  a49=(a11*a49);
  a32=(a32+a49);
  a49=(a44/a9);
  a50=(a7+a7);
  a51=(a50*a42);
  a51=(a49-a51);
  a52=(a5*a51);
  a32=(a32+a52);
  a52=(a1*a51);
  a53=(a3*a52);
  a32=(a32+a53);
  a53=(a1*a52);
  a54=(a13*a53);
  a32=(a32+a54);
  a54=(a1*a53);
  a54=(a12*a54);
  a32=(a32+a54);
  a54=(a8*a34);
  a32=(a32+a54);
  a54=(a1*a34);
  a55=(a6*a54);
  a32=(a32+a55);
  a55=(a1*a54);
  a56=(a4*a55);
  a32=(a32+a56);
  a56=(a1*a55);
  a57=(a2*a56);
  a32=(a32+a57);
  a57=(a1*a56);
  a57=(a0*a57);
  a32=(a32+a57);
  if (res[1]!=0) res[1][8]=a32;
  if (res[2]!=0) res[2][0]=a16;
  if (res[2]!=0) res[2][1]=a16;
  if (res[2]!=0) res[2][2]=a16;
  a32=-1.;
  a57=casadi_sq(a24);
  a57=(a32+a57);
  a57=(a57+a57);
  a58=casadi_sign(a25);
  a59=(a58*a24);
  a59=(a59+a59);
  a59=(a35*a59);
  a60=(a27*a24);
  a60=(a60+a60);
  a60=(a27*a60);
  a59=(a59+a60);
  a60=(a24*a57);
  a59=(a59+a60);
  a59=(a24*a59);
  a57=(a57-a59);
  a57=(-a57);
  if (res[2]!=0) res[2][3]=a57;
  a57=(a24*a27);
  a57=(a57+a57);
  a59=(a58*a27);
  a59=(a59+a59);
  a59=(a35*a59);
  a60=casadi_sq(a27);
  a32=(a32+a60);
  a32=(a32+a32);
  a60=(a27*a32);
  a59=(a59+a60);
  a60=(a24*a57);
  a59=(a59+a60);
  a60=(a24*a59);
  a57=(a57-a60);
  a57=(-a57);
  if (res[2]!=0) res[2][4]=a57;
  a60=(a1*a0);
  a60=(a60+a2);
  a61=(a1*a60);
  a61=(a61+a4);
  a62=(a1*a61);
  a62=(a62+a6);
  a63=(a1*a62);
  a63=(a63+a8);
  a64=(a24*a63);
  a65=(a1*a12);
  a65=(a65+a13);
  a66=(a1*a65);
  a66=(a66+a3);
  a67=(a1*a66);
  a67=(a67+a5);
  a68=(a67/a9);
  a69=(a24/a9);
  a7=(a7+a7);
  a7=(a7*a67);
  a22=(a22+a22);
  a70=(a1*a11);
  a70=(a70+a18);
  a71=(a1*a70);
  a71=(a71+a14);
  a72=(a1*a71);
  a72=(a72+a15);
  a22=(a22*a72);
  a7=(a7+a22);
  a22=(a9+a9);
  a7=(a7/a22);
  a69=(a69*a7);
  a68=(a68-a69);
  a69=(a10*a68);
  a64=(a64+a69);
  a69=(a1*a17);
  a69=(a69+a26);
  a22=(a1*a69);
  a22=(a22+a19);
  a73=(a1*a22);
  a73=(a73+a20);
  a74=(a1*a73);
  a74=(a74+a21);
  a75=(a27*a74);
  a76=(a72/a9);
  a77=(a27/a9);
  a77=(a77*a7);
  a76=(a76-a77);
  a77=(a23*a76);
  a75=(a75+a77);
  a64=(a64+a75);
  a75=(a24*a64);
  a77=(a25*a68);
  a75=(a75+a77);
  a75=(a63-a75);
  a75=(a75+a75);
  a77=(a31*a68);
  a58=(a58*a64);
  a58=(a58+a58);
  a35=(a35*a58);
  a58=(a30*a76);
  a78=(a27*a64);
  a79=(a25*a76);
  a78=(a78+a79);
  a78=(a74-a78);
  a78=(a78+a78);
  a79=(a27*a78);
  a58=(a58+a79);
  a35=(a35-a58);
  a58=(a28*a68);
  a79=(a24*a75);
  a58=(a58+a79);
  a35=(a35-a58);
  a24=(a24*a35);
  a77=(a77+a24);
  a77=(a75+a77);
  a24=(-a77);
  if (res[2]!=0) res[2][5]=a24;
  if (res[2]!=0) res[2][6]=a57;
  a59=(a27*a59);
  a32=(a32-a59);
  a32=(-a32);
  if (res[2]!=0) res[2][7]=a32;
  a32=(a31*a76);
  a27=(a27*a35);
  a32=(a32+a27);
  a32=(a78+a32);
  a27=(-a32);
  if (res[2]!=0) res[2][8]=a27;
  if (res[2]!=0) res[2][9]=a24;
  if (res[2]!=0) res[2][10]=a27;
  a73=(a33*a73);
  a21=(a21*a32);
  a73=(a73+a21);
  a16=(a16+a73);
  a22=(a29*a22);
  a32=(a1*a32);
  a33=(a33+a32);
  a20=(a20*a33);
  a22=(a22+a20);
  a16=(a16+a22);
  a69=(a36*a69);
  a33=(a1*a33);
  a29=(a29+a33);
  a19=(a19*a29);
  a69=(a69+a19);
  a16=(a16+a69);
  a69=(a37*a17);
  a29=(a1*a29);
  a36=(a36+a29);
  a26=(a26*a36);
  a69=(a69+a26);
  a16=(a16+a69);
  a36=(a1*a36);
  a37=(a37+a36);
  a17=(a17*a37);
  a16=(a16+a17);
  a71=(a46*a71);
  a74=(a31*a74);
  a23=(a23*a35);
  a74=(a74+a23);
  a30=(a30*a64);
  a78=(a25*a78);
  a30=(a30+a78);
  a74=(a74-a30);
  a30=(a74/a9);
  a39=(a39/a9);
  a39=(a39*a7);
  a30=(a30-a39);
  a72=(a72+a72);
  a72=(a42*a72);
  a76=(a76/a9);
  a39=(a41/a9);
  a39=(a39*a7);
  a76=(a76-a39);
  a38=(a38*a76);
  a41=(a41*a74);
  a38=(a38+a41);
  a68=(a68/a9);
  a41=(a43/a9);
  a41=(a41*a7);
  a68=(a68-a41);
  a44=(a44*a68);
  a31=(a31*a63);
  a10=(a10*a35);
  a31=(a31+a10);
  a28=(a28*a64);
  a25=(a25*a75);
  a28=(a28+a25);
  a31=(a31-a28);
  a43=(a43*a31);
  a44=(a44+a43);
  a38=(a38+a44);
  a38=(a38/a45);
  a45=(a42/a45);
  a44=(a7+a7);
  a45=(a45*a44);
  a38=(a38-a45);
  a40=(a40*a38);
  a72=(a72+a40);
  a30=(a30-a72);
  a15=(a15*a30);
  a71=(a71+a15);
  a16=(a16+a71);
  a70=(a47*a70);
  a30=(a1*a30);
  a46=(a46+a30);
  a14=(a14*a46);
  a70=(a70+a14);
  a16=(a16+a70);
  a70=(a48*a11);
  a46=(a1*a46);
  a47=(a47+a46);
  a18=(a18*a47);
  a70=(a70+a18);
  a16=(a16+a70);
  a47=(a1*a47);
  a48=(a48+a47);
  a11=(a11*a48);
  a16=(a16+a11);
  a66=(a51*a66);
  a31=(a31/a9);
  a49=(a49/a9);
  a49=(a49*a7);
  a31=(a31-a49);
  a67=(a67+a67);
  a42=(a42*a67);
  a50=(a50*a38);
  a42=(a42+a50);
  a31=(a31-a42);
  a5=(a5*a31);
  a66=(a66+a5);
  a16=(a16+a66);
  a65=(a52*a65);
  a31=(a1*a31);
  a51=(a51+a31);
  a3=(a3*a51);
  a65=(a65+a3);
  a16=(a16+a65);
  a65=(a53*a12);
  a51=(a1*a51);
  a52=(a52+a51);
  a13=(a13*a52);
  a65=(a65+a13);
  a16=(a16+a65);
  a52=(a1*a52);
  a53=(a53+a52);
  a12=(a12*a53);
  a16=(a16+a12);
  a62=(a34*a62);
  a8=(a8*a77);
  a62=(a62+a8);
  a16=(a16+a62);
  a61=(a54*a61);
  a77=(a1*a77);
  a34=(a34+a77);
  a6=(a6*a34);
  a61=(a61+a6);
  a16=(a16+a61);
  a60=(a55*a60);
  a34=(a1*a34);
  a54=(a54+a34);
  a4=(a4*a54);
  a60=(a60+a4);
  a16=(a16+a60);
  a60=(a56*a0);
  a54=(a1*a54);
  a55=(a55+a54);
  a2=(a2*a55);
  a60=(a60+a2);
  a16=(a16+a60);
  a1=(a1*a55);
  a56=(a56+a1);
  a0=(a0*a56);
  a16=(a16+a0);
  if (res[2]!=0) res[2][11]=a16;
  return 0;
}

CASADI_SYMBOL_EXPORT int car_kinematic_cost_ext_cost_fun_jac_hess(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int car_kinematic_cost_ext_cost_fun_jac_hess_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int car_kinematic_cost_ext_cost_fun_jac_hess_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void car_kinematic_cost_ext_cost_fun_jac_hess_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int car_kinematic_cost_ext_cost_fun_jac_hess_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void car_kinematic_cost_ext_cost_fun_jac_hess_release(int mem) {
}

CASADI_SYMBOL_EXPORT void car_kinematic_cost_ext_cost_fun_jac_hess_incref(void) {
}

CASADI_SYMBOL_EXPORT void car_kinematic_cost_ext_cost_fun_jac_hess_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int car_kinematic_cost_ext_cost_fun_jac_hess_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int car_kinematic_cost_ext_cost_fun_jac_hess_n_out(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_real car_kinematic_cost_ext_cost_fun_jac_hess_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* car_kinematic_cost_ext_cost_fun_jac_hess_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* car_kinematic_cost_ext_cost_fun_jac_hess_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* car_kinematic_cost_ext_cost_fun_jac_hess_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* car_kinematic_cost_ext_cost_fun_jac_hess_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s3;
    case 1: return casadi_s4;
    case 2: return casadi_s5;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int car_kinematic_cost_ext_cost_fun_jac_hess_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 3;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
