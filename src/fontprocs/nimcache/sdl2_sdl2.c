/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   "C:\Program Files\mingw64-6.3.0\mingw64\bin\gcc.exe" -c  -w -mno-ms-bitfields  -IC:\nim-0.18.0\lib -o C:\Roguelike\src\fontprocs\nimcache\sdl2_sdl2.o C:\Roguelike\src\fontprocs\nimcache\sdl2_sdl2.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
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
typedef struct tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w;
typedef struct tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg;
typedef struct tyObject_TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw tyObject_TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw;
typedef struct tyTuple_Xo4YhcsfLAmbGDNu1Obfcw tyTuple_Xo4YhcsfLAmbGDNu1Obfcw;
typedef struct tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w;
typedef struct tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ;
typedef struct tyObject_PixelFormat_xqbq9cabb4AcV4cRzuGg5Dg tyObject_PixelFormat_xqbq9cabb4AcV4cRzuGg5Dg;
typedef struct tyObject_BlitMapPtrcolonObjectType__uPOUAQyskDVXmxvDq3Wk3g tyObject_BlitMapPtrcolonObjectType__uPOUAQyskDVXmxvDq3Wk3g;
typedef struct tyObject_Palette_D3H7z9cPmFr0tk2z8jKdcYg tyObject_Palette_D3H7z9cPmFr0tk2z8jKdcYg;
typedef NI32 tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w;
typedef NU8 tyArray_Y1pDC6KIrpu9aJMBN9aOQMhw[52];
struct tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug {
tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w kind;
tyArray_Y1pDC6KIrpu9aJMBN9aOQMhw padding;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI32 tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_fvOXafK39cW5YZA9b9bzinu9cw) (int flags);
typedef N_CDECL_PTR(NCSTRING, tyProc_09bvyvHFtWbkzL5AHgf0bKw) (void);
typedef N_CDECL_PTR(tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w*, tyProc_1K9aSViCbSUpZMtRI9aw9a2Rg) (NCSTRING title, int x, int y, int w, int h, NU32 flags);
typedef N_CDECL_PTR(tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg*, tyProc_eGPD9aEHv9b8sVQMCQaPsYkg) (tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w* window, int index, int flags);
typedef N_CDECL_PTR(NIM_BOOL, tyProc_CS9bxA1KE4RHFQ1vMCkCBmg) (NCSTRING name, NCSTRING value);
struct tyObject_TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw {
char dummy;
};
struct tyTuple_Xo4YhcsfLAmbGDNu1Obfcw {
NU8 Field0;
NU8 Field1;
NU8 Field2;
NU8 Field3;
};
typedef N_CDECL_PTR(tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w*, tyProc_jhdVmRFWTpNd1iR9aS9c5hQQ) (int flags, int width, int height, int depth, NU32 Rmask, NU32 Gmask, NU32 BMask, NU32 Amask);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_HHjOD3TYfv9cxd3GBEF7zxg) (tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w* src, tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ* srcrect, tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w* dst, tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ* dstrect);
typedef N_CDECL_PTR(tyObject_TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw*, tyProc_yiZ9abLEqUROCb9aLBrLOHAQ) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w* surface);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_wbFMpEnGfJo5HTFBx413GA) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, tyObject_TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw* texture, tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ* srcrect, tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ* dstrect);
typedef N_CDECL_PTR(int, tyProc_zHpDbFN4o9bvP9cAphXAUHXg) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer);
typedef N_CDECL_PTR(void, tyProc_9a8AalbnAaIxTUMpzQQqpjw) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer);
typedef N_CDECL_PTR(void, tyProc_CGFSM2Hc7U0HyNmEEh3xng) (NU32 ms);
struct tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w {
char dummy;
};
struct tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg {
char dummy;
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
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug defaultEvent_LbtYyFPe9bpTC9bKZ8rWJeKQ;
TNimType NTI_Uzh9aP43ffUpM9aa6vZvNEug_;
TNimType NTI_9ayvRjKFMoE6pV9bOp5OUI5w_;
extern TNimType NTI_k3HXouOuhqAKq0dx450lXQ_;
TNimType NTI_Y1pDC6KIrpu9aJMBN9aOQMhw_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
static void* TM_ZcjcXgoBjElsmUGY1Ljosg_6;
tyProc_fvOXafK39cW5YZA9b9bzinu9cw Dl_146765_;
tyProc_09bvyvHFtWbkzL5AHgf0bKw Dl_147654_;
tyProc_1K9aSViCbSUpZMtRI9aw9a2Rg Dl_147356_;
tyProc_eGPD9aEHv9b8sVQMCQaPsYkg Dl_146811_;
tyProc_CS9bxA1KE4RHFQ1vMCkCBmg Dl_148013_;
TNimType NTI_6n0oqQPDsaMFNhtiJ29bOXw_;
TNimType NTI_X6TOzpP8PAev43Vu8HltPQ_;
tyProc_jhdVmRFWTpNd1iR9aS9c5hQQ Dl_147048_;
tyProc_HHjOD3TYfv9cxd3GBEF7zxg Dl_147202_;
tyProc_yiZ9abLEqUROCb9aLBrLOHAQ Dl_146833_;
tyProc_wbFMpEnGfJo5HTFBx413GA Dl_146988_;
tyProc_zHpDbFN4o9bvP9cAphXAUHXg Dl_147017_;
tyProc_9a8AalbnAaIxTUMpzQQqpjw Dl_147036_;
tyProc_CGFSM2Hc7U0HyNmEEh3xng Dl_147403_;
STRING_LITERAL(TM_ZcjcXgoBjElsmUGY1Ljosg_8, "SDL2.dll", 8);
STRING_LITERAL(TM_ZcjcXgoBjElsmUGY1Ljosg_9, "SDL2.dll", 8);

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

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, toBool_9bg9codirrpaPKZJuSwGJgEg)(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw some) {
	NIM_BOOL result;
	nimfr_("toBool", "sdl2.nim");
	result = (NIM_BOOL)0;
	nimln_(331, "sdl2.nim");
	result = (some == ((tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw) 0));
	popFrame();
	return result;
}

N_LIB_PRIVATE N_CDECL(tyTuple_Xo4YhcsfLAmbGDNu1Obfcw, color_q7CCTpZMpqm0tLIu9aALLzQ)(NI r, NI g, NI b, NI a) {
	tyTuple_Xo4YhcsfLAmbGDNu1Obfcw result;
	nimfr_("color", "sdl2.nim");
	memset((void*)(&result), 0, sizeof(result));
	nimln_(1763, "sdl2.nim");
	result.Field0 = ((NU8) (r));
	result.Field1 = ((NU8) (g));
	result.Field2 = ((NU8) (b));
	result.Field3 = ((NU8) (a));
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, sdl2_sdl2Init000)(void) {
	nimfr_("sdl2", "sdl2.nim");
	nimln_(1800, "sdl2.nim");
	chckNil((void*)(&defaultEvent_LbtYyFPe9bpTC9bKZ8rWJeKQ));
	genericReset((void*)(&defaultEvent_LbtYyFPe9bpTC9bKZ8rWJeKQ), (&NTI_Uzh9aP43ffUpM9aa6vZvNEug_));
	defaultEvent_LbtYyFPe9bpTC9bKZ8rWJeKQ.kind = ((tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w) 256);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, sdl2_sdl2DatInit000)(void) {
static TNimNode* TM_ZcjcXgoBjElsmUGY1Ljosg_2[2];
static TNimNode* TM_ZcjcXgoBjElsmUGY1Ljosg_3[44];
NI TM_ZcjcXgoBjElsmUGY1Ljosg_5;
static char* NIM_CONST TM_ZcjcXgoBjElsmUGY1Ljosg_4[44] = {
"QuitEvent", 
"AppTerminating", 
"AppLowMemory", 
"AppWillEnterBackground", 
"AppDidEnterBackground", 
"AppWillEnterForeground", 
"AppDidEnterForeground", 
"WindowEvent", 
"SysWMEvent", 
"KeyDown", 
"KeyUp", 
"TextEditing", 
"TextInput", 
"MouseMotion", 
"MouseButtonDown", 
"MouseButtonUp", 
"MouseWheel", 
"JoyAxisMotion", 
"JoyBallMotion", 
"JoyHatMotion", 
"JoyButtonDown", 
"JoyButtonUp", 
"JoyDeviceAdded", 
"JoyDeviceRemoved", 
"ControllerAxisMotion", 
"ControllerButtonDown", 
"ControllerButtonUp", 
"ControllerDeviceAdded", 
"ControllerDeviceRemoved", 
"ControllerDeviceRemapped", 
"FingerDown", 
"FingerUp", 
"FingerMotion", 
"DollarGesture", 
"DollarRecord", 
"MultiGesture", 
"ClipboardUpdate", 
"DropFile", 
"UserEvent", 
"UserEvent1", 
"UserEvent2", 
"UserEvent3", 
"UserEvent4", 
"UserEvent5"};
static TNimNode TM_ZcjcXgoBjElsmUGY1Ljosg_0[49];
NTI_Uzh9aP43ffUpM9aa6vZvNEug_.size = sizeof(tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug);
NTI_Uzh9aP43ffUpM9aa6vZvNEug_.kind = 18;
NTI_Uzh9aP43ffUpM9aa6vZvNEug_.base = 0;
NTI_Uzh9aP43ffUpM9aa6vZvNEug_.flags = 3;
TM_ZcjcXgoBjElsmUGY1Ljosg_2[0] = &TM_ZcjcXgoBjElsmUGY1Ljosg_0[1];
NTI_9ayvRjKFMoE6pV9bOp5OUI5w_.size = sizeof(tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w);
NTI_9ayvRjKFMoE6pV9bOp5OUI5w_.kind = 14;
NTI_9ayvRjKFMoE6pV9bOp5OUI5w_.base = 0;
NTI_9ayvRjKFMoE6pV9bOp5OUI5w_.flags = 3;
for (TM_ZcjcXgoBjElsmUGY1Ljosg_5 = 0; TM_ZcjcXgoBjElsmUGY1Ljosg_5 < 44; TM_ZcjcXgoBjElsmUGY1Ljosg_5++) {
TM_ZcjcXgoBjElsmUGY1Ljosg_0[TM_ZcjcXgoBjElsmUGY1Ljosg_5+2].kind = 1;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[TM_ZcjcXgoBjElsmUGY1Ljosg_5+2].offset = TM_ZcjcXgoBjElsmUGY1Ljosg_5;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[TM_ZcjcXgoBjElsmUGY1Ljosg_5+2].name = TM_ZcjcXgoBjElsmUGY1Ljosg_4[TM_ZcjcXgoBjElsmUGY1Ljosg_5];
TM_ZcjcXgoBjElsmUGY1Ljosg_3[TM_ZcjcXgoBjElsmUGY1Ljosg_5] = &TM_ZcjcXgoBjElsmUGY1Ljosg_0[TM_ZcjcXgoBjElsmUGY1Ljosg_5+2];
}
TM_ZcjcXgoBjElsmUGY1Ljosg_0[2].offset = 256;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[3].offset = 257;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[4].offset = 258;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[5].offset = 259;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[6].offset = 260;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[7].offset = 261;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[8].offset = 262;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[9].offset = 512;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[10].offset = 513;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[11].offset = 768;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[12].offset = 769;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[13].offset = 770;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[14].offset = 771;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[15].offset = 1024;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[16].offset = 1025;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[17].offset = 1026;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[18].offset = 1027;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[19].offset = 1536;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[20].offset = 1537;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[21].offset = 1538;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[22].offset = 1539;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[23].offset = 1540;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[24].offset = 1541;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[25].offset = 1542;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[26].offset = 1616;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[27].offset = 1617;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[28].offset = 1618;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[29].offset = 1619;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[30].offset = 1620;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[31].offset = 1621;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[32].offset = 1792;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[33].offset = 1793;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[34].offset = 1794;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[35].offset = 2048;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[36].offset = 2049;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[37].offset = 2050;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[38].offset = 2304;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[39].offset = 4096;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[40].offset = 32768;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[41].offset = 32769;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[42].offset = 32770;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[43].offset = 32771;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[44].offset = 32772;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[45].offset = 32773;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[46].len = 44; TM_ZcjcXgoBjElsmUGY1Ljosg_0[46].kind = 2; TM_ZcjcXgoBjElsmUGY1Ljosg_0[46].sons = &TM_ZcjcXgoBjElsmUGY1Ljosg_3[0];
NTI_9ayvRjKFMoE6pV9bOp5OUI5w_.node = &TM_ZcjcXgoBjElsmUGY1Ljosg_0[46];
NTI_9ayvRjKFMoE6pV9bOp5OUI5w_.flags = 1<<2;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[1].kind = 1;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[1].offset = offsetof(tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug, kind);
TM_ZcjcXgoBjElsmUGY1Ljosg_0[1].typ = (&NTI_9ayvRjKFMoE6pV9bOp5OUI5w_);
TM_ZcjcXgoBjElsmUGY1Ljosg_0[1].name = "kind";
TM_ZcjcXgoBjElsmUGY1Ljosg_2[1] = &TM_ZcjcXgoBjElsmUGY1Ljosg_0[47];
NTI_Y1pDC6KIrpu9aJMBN9aOQMhw_.size = sizeof(tyArray_Y1pDC6KIrpu9aJMBN9aOQMhw);
NTI_Y1pDC6KIrpu9aJMBN9aOQMhw_.kind = 16;
NTI_Y1pDC6KIrpu9aJMBN9aOQMhw_.base = (&NTI_k3HXouOuhqAKq0dx450lXQ_);
NTI_Y1pDC6KIrpu9aJMBN9aOQMhw_.flags = 3;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[47].kind = 1;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[47].offset = offsetof(tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug, padding);
TM_ZcjcXgoBjElsmUGY1Ljosg_0[47].typ = (&NTI_Y1pDC6KIrpu9aJMBN9aOQMhw_);
TM_ZcjcXgoBjElsmUGY1Ljosg_0[47].name = "padding";
TM_ZcjcXgoBjElsmUGY1Ljosg_0[0].len = 2; TM_ZcjcXgoBjElsmUGY1Ljosg_0[0].kind = 2; TM_ZcjcXgoBjElsmUGY1Ljosg_0[0].sons = &TM_ZcjcXgoBjElsmUGY1Ljosg_2[0];
NTI_Uzh9aP43ffUpM9aa6vZvNEug_.node = &TM_ZcjcXgoBjElsmUGY1Ljosg_0[0];
NTI_6n0oqQPDsaMFNhtiJ29bOXw_.size = sizeof(tyObject_TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw);
NTI_6n0oqQPDsaMFNhtiJ29bOXw_.kind = 18;
NTI_6n0oqQPDsaMFNhtiJ29bOXw_.base = 0;
NTI_6n0oqQPDsaMFNhtiJ29bOXw_.flags = 3;
TM_ZcjcXgoBjElsmUGY1Ljosg_0[48].len = 0; TM_ZcjcXgoBjElsmUGY1Ljosg_0[48].kind = 2;
NTI_6n0oqQPDsaMFNhtiJ29bOXw_.node = &TM_ZcjcXgoBjElsmUGY1Ljosg_0[48];
NTI_X6TOzpP8PAev43Vu8HltPQ_.size = sizeof(tyObject_TexturePtrcolonObjectType__6n0oqQPDsaMFNhtiJ29bOXw*);
NTI_X6TOzpP8PAev43Vu8HltPQ_.kind = 21;
NTI_X6TOzpP8PAev43Vu8HltPQ_.base = (&NTI_6n0oqQPDsaMFNhtiJ29bOXw_);
NTI_X6TOzpP8PAev43Vu8HltPQ_.flags = 3;
if (!((TM_ZcjcXgoBjElsmUGY1Ljosg_6 = nimLoadLibrary((NimStringDesc*) &TM_ZcjcXgoBjElsmUGY1Ljosg_8))
)) nimLoadLibraryError((NimStringDesc*) &TM_ZcjcXgoBjElsmUGY1Ljosg_9);
	Dl_146765_ = (tyProc_fvOXafK39cW5YZA9b9bzinu9cw) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_6, "SDL_Init");
	Dl_147654_ = (tyProc_09bvyvHFtWbkzL5AHgf0bKw) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_6, "SDL_GetError");
	Dl_147356_ = (tyProc_1K9aSViCbSUpZMtRI9aw9a2Rg) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_6, "SDL_CreateWindow");
	Dl_146811_ = (tyProc_eGPD9aEHv9b8sVQMCQaPsYkg) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_6, "SDL_CreateRenderer");
	Dl_148013_ = (tyProc_CS9bxA1KE4RHFQ1vMCkCBmg) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_6, "SDL_SetHint");
	Dl_147048_ = (tyProc_jhdVmRFWTpNd1iR9aS9c5hQQ) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_6, "SDL_CreateRGBSurface");
	Dl_147202_ = (tyProc_HHjOD3TYfv9cxd3GBEF7zxg) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_6, "SDL_UpperBlit");
	Dl_146833_ = (tyProc_yiZ9abLEqUROCb9aLBrLOHAQ) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_6, "SDL_CreateTextureFromSurface");
	Dl_146988_ = (tyProc_wbFMpEnGfJo5HTFBx413GA) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_6, "SDL_RenderCopy");
	Dl_147017_ = (tyProc_zHpDbFN4o9bvP9cAphXAUHXg) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_6, "SDL_RenderClear");
	Dl_147036_ = (tyProc_9a8AalbnAaIxTUMpzQQqpjw) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_6, "SDL_RenderPresent");
	Dl_147403_ = (tyProc_CGFSM2Hc7U0HyNmEEh3xng) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_6, "SDL_Delay");
}
