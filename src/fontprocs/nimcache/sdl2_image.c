/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   "C:\Program Files\mingw64-6.3.0\mingw64\bin\gcc.exe" -c  -w -mno-ms-bitfields  -IC:\nim-0.18.0\lib -o C:\Roguelike\src\fontprocs\nimcache\sdl2_image.o C:\Roguelike\src\fontprocs\nimcache\sdl2_image.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct tyObject_SDL_Version_TSwpnMFFrSlvE0uP4RAZ9bA tyObject_SDL_Version_TSwpnMFFrSlvE0uP4RAZ9bA;
typedef struct tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w;
typedef struct tyObject_RWops_CLIyzMHHcrhaNlCqUuM1OA tyObject_RWops_CLIyzMHHcrhaNlCqUuM1OA;
typedef struct tyObject_TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw tyObject_TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw;
typedef struct tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg;
typedef struct tyObject_PixelFormat_xqbq9cabb4AcV4cRzuGg5Dg tyObject_PixelFormat_xqbq9cabb4AcV4cRzuGg5Dg;
typedef struct tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ;
typedef struct tyObject_BlitMapPtrcolonObjectType__uPOUAQyskDVXmxvDq3Wk3g tyObject_BlitMapPtrcolonObjectType__uPOUAQyskDVXmxvDq3Wk3g;
typedef struct tyObject_Mem_Y7I9bNHWVNgY3LblplAgArw tyObject_Mem_Y7I9bNHWVNgY3LblplAgArw;
typedef struct tyObject_Palette_D3H7z9cPmFr0tk2z8jKdcYg tyObject_Palette_D3H7z9cPmFr0tk2z8jKdcYg;
typedef struct tyTuple_Xo4YhcsfLAmbGDNu1Obfcw tyTuple_Xo4YhcsfLAmbGDNu1Obfcw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(tyObject_SDL_Version_TSwpnMFFrSlvE0uP4RAZ9bA*, tyProc_9a2sRVVPZGlas09axAYzMLYQ) (void);
typedef N_CDECL_PTR(int, tyProc_4hSZquf3VZZvlELaYshEWg) (int flags);
typedef N_CDECL_PTR(void, tyProc_ln4kdL5W9bbX4a1xl8nnVXQ) (void);
typedef N_CDECL_PTR(tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w*, tyProc_D4h5EquQZiufq59ct2YWvPQ) (tyObject_RWops_CLIyzMHHcrhaNlCqUuM1OA* src, int freesrc, NCSTRING type_0);
typedef N_CDECL_PTR(tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w*, tyProc_CutCKRsGYuWP0bISx4ziaQ) (NCSTRING file);
typedef N_CDECL_PTR(tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w*, tyProc_nsaGYA1Jhow6uB4SB39bKKg) (tyObject_RWops_CLIyzMHHcrhaNlCqUuM1OA* src, int freesrc);
typedef N_CDECL_PTR(tyObject_TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw*, tyProc_0icUM9coigCdz0HL3vd9bFCw) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NCSTRING file);
typedef N_CDECL_PTR(tyObject_TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw*, tyProc_ganGpGBQnroBRJmckghxgA) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, tyObject_RWops_CLIyzMHHcrhaNlCqUuM1OA* src, int freesrc);
typedef N_CDECL_PTR(tyObject_TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw*, tyProc_AWmJZ842lYeG8W9bG3afafg) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, tyObject_RWops_CLIyzMHHcrhaNlCqUuM1OA* src, int freesrc, NCSTRING type_0);
typedef N_CDECL_PTR(int, tyProc_LaZp89cSat1m2LqumdMScDw) (tyObject_RWops_CLIyzMHHcrhaNlCqUuM1OA* src);
typedef N_CDECL_PTR(tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w*, tyProc_BgXsgNYiju9cShov1QlgIsw) (tyObject_RWops_CLIyzMHHcrhaNlCqUuM1OA* src);
typedef N_CDECL_PTR(tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w*, tyProc_qzpHYtQ7E1sycMZLOtNl3g) (NCSTRING* xpm);
typedef N_CDECL_PTR(int, tyProc_bjumsnIoWszjZSFMuCV9cRg) (tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w* surface, NCSTRING file);
struct tyObject_SDL_Version_TSwpnMFFrSlvE0uP4RAZ9bA {
NU8 major;
NU8 minor;
NU8 patch;
};
struct tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ {
int Field0;
int Field1;
int Field2;
int Field3;
};
struct tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w {
NU32 flags;
tyObject_PixelFormat_xqbq9cabb4AcV4cRzuGg5Dg* format;
NI32 w;
NI32 h;
NI32 pitch;
void* pixels;
void* userdata;
NI32 locked;
void* lock_data;
tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ clip_rect;
tyObject_BlitMapPtrcolonObjectType__uPOUAQyskDVXmxvDq3Wk3g* map;
int refcount;
};
typedef N_CDECL_PTR(NI64, tyProc_pv8LHGd6Yei89cd2Rd8hv8g) (tyObject_RWops_CLIyzMHHcrhaNlCqUuM1OA* context);
typedef N_CDECL_PTR(NI64, tyProc_0zChuivuFV72gZwz2rUkHA) (tyObject_RWops_CLIyzMHHcrhaNlCqUuM1OA* context, NI64 offset, int whence);
typedef N_CDECL_PTR(size_t, tyProc_i5pcx3FBdKHMUS2uvRgvYw) (tyObject_RWops_CLIyzMHHcrhaNlCqUuM1OA* context, void* destination, size_t size, size_t maxnum);
struct tyObject_Mem_Y7I9bNHWVNgY3LblplAgArw {
NU8* base;
NU8* here;
NU8* stop;
};
struct tyObject_RWops_CLIyzMHHcrhaNlCqUuM1OA {
tyProc_pv8LHGd6Yei89cd2Rd8hv8g size;
tyProc_0zChuivuFV72gZwz2rUkHA seek;
tyProc_i5pcx3FBdKHMUS2uvRgvYw read;
tyProc_i5pcx3FBdKHMUS2uvRgvYw write;
tyProc_LaZp89cSat1m2LqumdMScDw close;
int kind;
tyObject_Mem_Y7I9bNHWVNgY3LblplAgArw mem;
};
struct tyObject_TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw {
char dummy;
};
struct tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg {
char dummy;
};
typedef NU8 tyArray_bN9bddWn8oiNSHn2MqEJSZQ[2];
struct tyObject_PixelFormat_xqbq9cabb4AcV4cRzuGg5Dg {
NU32 format;
tyObject_Palette_D3H7z9cPmFr0tk2z8jKdcYg* palette;
NU8 BitsPerPixel;
NU8 BytesPerPixel;
tyArray_bN9bddWn8oiNSHn2MqEJSZQ padding;
NU32 Rmask;
NU32 Gmask;
NU32 Bmask;
NU32 Amask;
NU8 Rloss;
NU8 Gloss;
NU8 Bloss;
NU8 Aloss;
NU8 Rshift;
NU8 Gshift;
NU8 Bshift;
NU8 Ashift;
int refcount;
tyObject_PixelFormat_xqbq9cabb4AcV4cRzuGg5Dg* next;
};
struct tyObject_BlitMapPtrcolonObjectType__uPOUAQyskDVXmxvDq3Wk3g {
char dummy;
};
struct tyObject_Palette_D3H7z9cPmFr0tk2z8jKdcYg {
int ncolors;
tyTuple_Xo4YhcsfLAmbGDNu1Obfcw* colors;
NU32 version;
int refcount;
};
struct tyTuple_Xo4YhcsfLAmbGDNu1Obfcw {
NU8 Field0;
NU8 Field1;
NU8 Field2;
NU8 Field3;
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static void* TM_EK6wIoNHNycCv1LJkkuJvw_2;
tyProc_9a2sRVVPZGlas09axAYzMLYQ Dl_151601_;
tyProc_4hSZquf3VZZvlELaYshEWg Dl_151604_;
tyProc_ln4kdL5W9bbX4a1xl8nnVXQ Dl_151607_;
tyProc_D4h5EquQZiufq59ct2YWvPQ Dl_151609_;
tyProc_CutCKRsGYuWP0bISx4ziaQ Dl_151614_;
tyProc_nsaGYA1Jhow6uB4SB39bKKg Dl_151617_;
tyProc_0icUM9coigCdz0HL3vd9bFCw Dl_151621_;
tyProc_ganGpGBQnroBRJmckghxgA Dl_151625_;
tyProc_AWmJZ842lYeG8W9bG3afafg Dl_151630_;
tyProc_LaZp89cSat1m2LqumdMScDw Dl_151636_;
tyProc_LaZp89cSat1m2LqumdMScDw Dl_151639_;
tyProc_LaZp89cSat1m2LqumdMScDw Dl_151642_;
tyProc_LaZp89cSat1m2LqumdMScDw Dl_151645_;
tyProc_LaZp89cSat1m2LqumdMScDw Dl_151648_;
tyProc_LaZp89cSat1m2LqumdMScDw Dl_151651_;
tyProc_LaZp89cSat1m2LqumdMScDw Dl_151654_;
tyProc_LaZp89cSat1m2LqumdMScDw Dl_151657_;
tyProc_LaZp89cSat1m2LqumdMScDw Dl_151660_;
tyProc_LaZp89cSat1m2LqumdMScDw Dl_151663_;
tyProc_LaZp89cSat1m2LqumdMScDw Dl_151666_;
tyProc_LaZp89cSat1m2LqumdMScDw Dl_151669_;
tyProc_LaZp89cSat1m2LqumdMScDw Dl_151672_;
tyProc_LaZp89cSat1m2LqumdMScDw Dl_151675_;
tyProc_BgXsgNYiju9cShov1QlgIsw Dl_151678_;
tyProc_BgXsgNYiju9cShov1QlgIsw Dl_151681_;
tyProc_BgXsgNYiju9cShov1QlgIsw Dl_151684_;
tyProc_BgXsgNYiju9cShov1QlgIsw Dl_151687_;
tyProc_BgXsgNYiju9cShov1QlgIsw Dl_151690_;
tyProc_BgXsgNYiju9cShov1QlgIsw Dl_151693_;
tyProc_BgXsgNYiju9cShov1QlgIsw Dl_151696_;
tyProc_BgXsgNYiju9cShov1QlgIsw Dl_151699_;
tyProc_BgXsgNYiju9cShov1QlgIsw Dl_151702_;
tyProc_BgXsgNYiju9cShov1QlgIsw Dl_151705_;
tyProc_BgXsgNYiju9cShov1QlgIsw Dl_151708_;
tyProc_BgXsgNYiju9cShov1QlgIsw Dl_151711_;
tyProc_BgXsgNYiju9cShov1QlgIsw Dl_151714_;
tyProc_BgXsgNYiju9cShov1QlgIsw Dl_151717_;
tyProc_BgXsgNYiju9cShov1QlgIsw Dl_151720_;
tyProc_qzpHYtQ7E1sycMZLOtNl3g Dl_151723_;
tyProc_bjumsnIoWszjZSFMuCV9cRg Dl_151726_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_EK6wIoNHNycCv1LJkkuJvw_4, "SDL2_image.dll", 14);
STRING_LITERAL(TM_EK6wIoNHNycCv1LJkkuJvw_5, "SDL2_image.dll", 14);

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}
NIM_EXTERNC N_NOINLINE(void, sdl2_imageInit000)(void) {
	nimfr_("image", "image.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, sdl2_imageDatInit000)(void) {
if (!((TM_EK6wIoNHNycCv1LJkkuJvw_2 = nimLoadLibrary((NimStringDesc*) &TM_EK6wIoNHNycCv1LJkkuJvw_4))
)) nimLoadLibraryError((NimStringDesc*) &TM_EK6wIoNHNycCv1LJkkuJvw_5);
	Dl_151601_ = (tyProc_9a2sRVVPZGlas09axAYzMLYQ) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_Linked_Version");
	Dl_151604_ = (tyProc_4hSZquf3VZZvlELaYshEWg) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_Init");
	Dl_151607_ = (tyProc_ln4kdL5W9bbX4a1xl8nnVXQ) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_Quit");
	Dl_151609_ = (tyProc_D4h5EquQZiufq59ct2YWvPQ) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadTyped_RW");
	Dl_151614_ = (tyProc_CutCKRsGYuWP0bISx4ziaQ) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_Load");
	Dl_151617_ = (tyProc_nsaGYA1Jhow6uB4SB39bKKg) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_Load_RW");
	Dl_151621_ = (tyProc_0icUM9coigCdz0HL3vd9bFCw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadTexture");
	Dl_151625_ = (tyProc_ganGpGBQnroBRJmckghxgA) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadTexture_RW");
	Dl_151630_ = (tyProc_AWmJZ842lYeG8W9bG3afafg) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadTextureTyped_RW");
	Dl_151636_ = (tyProc_LaZp89cSat1m2LqumdMScDw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_isICO");
	Dl_151639_ = (tyProc_LaZp89cSat1m2LqumdMScDw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_isCUR");
	Dl_151642_ = (tyProc_LaZp89cSat1m2LqumdMScDw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_isBMP");
	Dl_151645_ = (tyProc_LaZp89cSat1m2LqumdMScDw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_isGIF");
	Dl_151648_ = (tyProc_LaZp89cSat1m2LqumdMScDw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_isJPG");
	Dl_151651_ = (tyProc_LaZp89cSat1m2LqumdMScDw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_isLBM");
	Dl_151654_ = (tyProc_LaZp89cSat1m2LqumdMScDw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_isPCX");
	Dl_151657_ = (tyProc_LaZp89cSat1m2LqumdMScDw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_isPNG");
	Dl_151660_ = (tyProc_LaZp89cSat1m2LqumdMScDw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_isPNM");
	Dl_151663_ = (tyProc_LaZp89cSat1m2LqumdMScDw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_isTIF");
	Dl_151666_ = (tyProc_LaZp89cSat1m2LqumdMScDw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_isXCF");
	Dl_151669_ = (tyProc_LaZp89cSat1m2LqumdMScDw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_isXPM");
	Dl_151672_ = (tyProc_LaZp89cSat1m2LqumdMScDw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_isXV");
	Dl_151675_ = (tyProc_LaZp89cSat1m2LqumdMScDw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_isWEBP");
	Dl_151678_ = (tyProc_BgXsgNYiju9cShov1QlgIsw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadICO_RW");
	Dl_151681_ = (tyProc_BgXsgNYiju9cShov1QlgIsw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadCUR_RW");
	Dl_151684_ = (tyProc_BgXsgNYiju9cShov1QlgIsw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadBMP_RW");
	Dl_151687_ = (tyProc_BgXsgNYiju9cShov1QlgIsw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadGIF_RW");
	Dl_151690_ = (tyProc_BgXsgNYiju9cShov1QlgIsw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadJPG_RW");
	Dl_151693_ = (tyProc_BgXsgNYiju9cShov1QlgIsw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadLBM_RW");
	Dl_151696_ = (tyProc_BgXsgNYiju9cShov1QlgIsw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadPCX_RW");
	Dl_151699_ = (tyProc_BgXsgNYiju9cShov1QlgIsw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadPNG_RW");
	Dl_151702_ = (tyProc_BgXsgNYiju9cShov1QlgIsw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadPNM_RW");
	Dl_151705_ = (tyProc_BgXsgNYiju9cShov1QlgIsw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadTGA_RW");
	Dl_151708_ = (tyProc_BgXsgNYiju9cShov1QlgIsw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadTIF_RW");
	Dl_151711_ = (tyProc_BgXsgNYiju9cShov1QlgIsw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadXCF_RW");
	Dl_151714_ = (tyProc_BgXsgNYiju9cShov1QlgIsw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadXPM_RW");
	Dl_151717_ = (tyProc_BgXsgNYiju9cShov1QlgIsw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadXV_RW");
	Dl_151720_ = (tyProc_BgXsgNYiju9cShov1QlgIsw) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_LoadWEBP_RW");
	Dl_151723_ = (tyProc_qzpHYtQ7E1sycMZLOtNl3g) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_ReadXPMFromArray");
	Dl_151726_ = (tyProc_bjumsnIoWszjZSFMuCV9cRg) nimGetProcAddr(TM_EK6wIoNHNycCv1LJkkuJvw_2, "IMG_SavePNG");
}
