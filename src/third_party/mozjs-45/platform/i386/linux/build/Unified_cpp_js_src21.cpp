#define MOZ_UNIFIED_BUILD
#include "jit/x86/BaselineIC-x86.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "jit/x86/BaselineIC-x86.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "jit/x86/BaselineIC-x86.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "jit/x86/CodeGenerator-x86.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "jit/x86/CodeGenerator-x86.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "jit/x86/CodeGenerator-x86.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "jit/x86/Lowering-x86.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "jit/x86/Lowering-x86.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "jit/x86/Lowering-x86.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "jit/x86/MacroAssembler-x86.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "jit/x86/MacroAssembler-x86.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "jit/x86/MacroAssembler-x86.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "jit/x86/SharedIC-x86.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "jit/x86/SharedIC-x86.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "jit/x86/SharedIC-x86.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "jit/x86/Trampoline-x86.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "jit/x86/Trampoline-x86.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "jit/x86/Trampoline-x86.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif