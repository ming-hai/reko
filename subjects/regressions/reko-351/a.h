// a.h
// Generated by decompiling a.out
// using Reko decompiler version 0.6.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (8000270C (ptr code) ptr8000270C) (80002714 (arr (ptr code)) a80002714) (8000271C word32 dw8000271C) (80002724 byte b80002724) (80002726 uint32 dw80002726) (FFFFFFFF code tFFFFFFFF))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_60: (fn void ())
	T_60 (in deregister_tm_clones : ptr32)
	T_61 (in signature of deregister_tm_clones : void)
Eq_140: (fn void ())
	T_140 (in register_tm_clones : ptr32)
	T_141 (in signature of register_tm_clones : void)
	T_153 (in register_tm_clones : ptr32)
Eq_183: (fn void (real64, int32))
	T_183 (in pow_int : ptr32)
	T_184 (in signature of pow_int : void)
	T_195 (in pow_int : ptr32)
Eq_186: (fn void (int32))
	T_186 (in factorial : ptr32)
	T_187 (in signature of factorial : void)
	T_197 (in factorial : ptr32)
Eq_204: (fn void (real64))
	T_204 (in sine_taylor : ptr32)
	T_205 (in signature of sine_taylor : void)
Eq_210: (fn void (real64, real64, Eq_214))
	T_210 (in _sin : ptr32)
	T_211 (in signature of _sin : void)
Eq_214: (union "Eq_214" ((ptr word32) u0) ((ref int32) u1))
	T_214 (in tArg14 : Eq_214)
	T_223 (in fp - 0x00000008 : word32)
Eq_225: (union "Eq_225" (real64 u0) (real80 u1))
	T_225 (in rLoc0C_117 : Eq_225)
	T_228 (in DPB(rLoc0C, SLICE(rArg04, word32, 32), 32) : real64)
	T_251 (in (real64) ((real80) (real64) ((real80) rLoc0C_117 * v9_28) * v9_28) : real64)
Eq_229: (union "Eq_229" (real64 u0) (real80 u1))
	T_229 (in v9_28 : Eq_229)
	T_232 (in (real64) ((real80) rLoc0C_117 * rLoc0C_117) : real64)
Eq_236: (ref int32)
	T_236 (in tArg14 + 0x00000000 : word32)
Eq_241: (union "Eq_241" ((ptr word32) u0) ((ref int32) u1))
	T_241 (in tArg14 + 0x00000000 : word32)
Eq_254: (union "Eq_254" (real64 u0) (real80 u1))
	T_254 (in rLoc14 : real64)
	T_275 (in (real64) ((real80) (real64) ((real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) * (real80) (v24_77 + 0x00000002)) * (real80) (v24_77 + 0x00000003)) : real64)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in true : bool)
  Class: Eq_2
  DataType: bool
  OrigDataType: bool
T_3: (in 00000000 : ptr32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: ptr32
T_4: (in 0x00000000 : word32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: word32
T_5: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in a7_39 : word32)
  Class: Eq_6
  DataType: word32
  OrigDataType: word32
T_7: (in a6_40 : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_8: (in d0_41 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in CVZN_42 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in CVZNX_43 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in d1_44 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in C_45 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in a0_46 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in ZN_47 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in V_48 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in Z_49 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in 00000000 : ptr32)
  Class: Eq_17
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_18: (in d0_11 : int32)
  Class: Eq_18
  DataType: int32
  OrigDataType: int32
T_19: (in 0x00000000 : word32)
  Class: Eq_18
  DataType: int32
  OrigDataType: word32
T_20: (in false : bool)
  Class: Eq_20
  DataType: bool
  OrigDataType: bool
T_21: (in d0_15 : int32)
  Class: Eq_21
  DataType: int32
  OrigDataType: int32
T_22: (in 0x00000001 : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_23: (in d0_11 >> 0x00000001 : word32)
  Class: Eq_21
  DataType: int32
  OrigDataType: int32
T_24: (in 0x00000000 : word32)
  Class: Eq_21
  DataType: int32
  OrigDataType: word32
T_25: (in d0_15 == 0x00000000 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in 0x00000001 : word32)
  Class: Eq_18
  DataType: int32
  OrigDataType: word32
T_27: (in 00000000 : ptr32)
  Class: Eq_27
  DataType: ptr32
  OrigDataType: ptr32
T_28: (in 0x00000000 : word32)
  Class: Eq_27
  DataType: ptr32
  OrigDataType: word32
T_29: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in a7_49 : word32)
  Class: Eq_30
  DataType: word32
  OrigDataType: word32
T_31: (in a6_50 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_32: (in d0_51 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in CVZN_52 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in CVZNX_53 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in N_54 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in Z_55 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in a0_56 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in ZN_57 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in C_58 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in V_59 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in 00000000 : ptr32)
  Class: Eq_41
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_42: (in d2 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in 80002724 : ptr32)
  Class: Eq_43
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_46 t0000)))
T_44: (in 0x00000000 : word32)
  Class: Eq_44
  DataType: word32
  OrigDataType: word32
T_45: (in 0x80002724 + 0x00000000 : word32)
  Class: Eq_45
  DataType: ptr32
  OrigDataType: ptr32
T_46: (in Mem0[0x80002724 + 0x00000000:byte] : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in 0x00 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_48: (in globals->b80002724 != 0x00 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in d0_100 : uint32)
  Class: Eq_49
  DataType: uint32
  OrigDataType: uint32
T_50: (in 80002726 : ptr32)
  Class: Eq_50
  DataType: (ptr uint32)
  OrigDataType: (ptr (struct (0 T_53 t0000)))
T_51: (in 0x00000000 : word32)
  Class: Eq_51
  DataType: word32
  OrigDataType: word32
T_52: (in 0x80002726 + 0x00000000 : word32)
  Class: Eq_52
  DataType: ptr32
  OrigDataType: ptr32
T_53: (in Mem0[0x80002726 + 0x00000000:word32] : word32)
  Class: Eq_49
  DataType: uint32
  OrigDataType: word32
T_54: (in a2_101 : (arr (ptr code)))
  Class: Eq_54
  DataType: (ptr (arr (ptr code)))
  OrigDataType: (ptr (struct (0 (arr T_305) a0000)))
T_55: (in 80002714 : ptr32)
  Class: Eq_54
  DataType: (ptr (arr (ptr code)))
  OrigDataType: ptr32
T_56: (in 0x00000000 : word32)
  Class: Eq_56
  DataType: uint32
  OrigDataType: uint32
T_57: (in 0x00000000 - d0_100 : word32)
  Class: Eq_57
  DataType: uint32
  OrigDataType: uint32
T_58: (in 0x00000000 : word32)
  Class: Eq_57
  DataType: uint32
  OrigDataType: uint32
T_59: (in 0x00000000 - d0_100 <= 0x00000000 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in deregister_tm_clones : ptr32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (fn T_62 ()))
T_61: (in signature of deregister_tm_clones : void)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: 
T_62: (in deregister_tm_clones() : void)
  Class: Eq_62
  DataType: void
  OrigDataType: void
T_63: (in 00000000 : ptr32)
  Class: Eq_63
  DataType: ptr32
  OrigDataType: ptr32
T_64: (in 0x00000000 : word32)
  Class: Eq_63
  DataType: ptr32
  OrigDataType: word32
T_65: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in d0_102 : ui32)
  Class: Eq_66
  DataType: ui32
  OrigDataType: ui32
T_67: (in 0x00000001 : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in d0_100 + 0x00000001 : word32)
  Class: Eq_66
  DataType: ui32
  OrigDataType: word32
T_69: (in 80002726 : ptr32)
  Class: Eq_69
  DataType: (ptr ui32)
  OrigDataType: (ptr (struct (0 T_72 t0000)))
T_70: (in 0x00000000 : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_71: (in 0x80002726 + 0x00000000 : word32)
  Class: Eq_71
  DataType: ptr32
  OrigDataType: ptr32
T_72: (in Mem105[0x80002726 + 0x00000000:word32] : word32)
  Class: Eq_66
  DataType: ui32
  OrigDataType: word32
T_73: (in a0_107 : (ptr code))
  Class: Eq_73
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_74: (in 4 : int32)
  Class: Eq_74
  DataType: int32
  OrigDataType: int32
T_75: (in d0_102 * 4 : word32)
  Class: Eq_75
  DataType: ui32
  OrigDataType: ui32
T_76: (in a2_101[d0_102 * 4] : word32)
  Class: Eq_73
  DataType: (ptr code)
  OrigDataType: word32
T_77: (in a7_108 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_78: (in a6_109 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in CVZN_111 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in d2_112 : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_81: (in ZN_113 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in C_114 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in V_115 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in Z_116 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in d0_117 : word32)
  Class: Eq_85
  DataType: word32
  OrigDataType: word32
T_86: (in CVZNX_118 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in VZ_119 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in a0_120 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in CZ_121 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in 80002726 : ptr32)
  Class: Eq_90
  DataType: (ptr uint32)
  OrigDataType: (ptr (struct (0 T_93 t0000)))
T_91: (in 0x00000000 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_92: (in 0x80002726 + 0x00000000 : word32)
  Class: Eq_92
  DataType: ptr32
  OrigDataType: ptr32
T_93: (in Mem105[0x80002726 + 0x00000000:word32] : word32)
  Class: Eq_49
  DataType: uint32
  OrigDataType: word32
T_94: (in 0x00000000 : word32)
  Class: Eq_94
  DataType: uint32
  OrigDataType: uint32
T_95: (in 0x00000000 - d0_100 : word32)
  Class: Eq_95
  DataType: uint32
  OrigDataType: uint32
T_96: (in 0x00000000 : word32)
  Class: Eq_95
  DataType: uint32
  OrigDataType: uint32
T_97: (in 0x00000000 - d0_100 > 0x00000000 : bool)
  Class: Eq_97
  DataType: bool
  OrigDataType: bool
T_98: (in 0x01 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in 80002724 : ptr32)
  Class: Eq_99
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_102 t0000)))
T_100: (in 0x00000000 : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_101: (in 0x80002724 + 0x00000000 : word32)
  Class: Eq_101
  DataType: ptr32
  OrigDataType: ptr32
T_102: (in Mem81[0x80002724 + 0x00000000:byte] : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_103: (in a7_85 : word32)
  Class: Eq_103
  DataType: word32
  OrigDataType: word32
T_104: (in a6_86 : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in a2_87 : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in CVZN_88 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in d2_89 : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in ZN_90 : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in C_91 : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in V_92 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in Z_93 : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in d0_94 : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_113: (in CVZNX_95 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in VZ_96 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_115: (in a0_97 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in CZ_98 : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in 00000000 : ptr32)
  Class: Eq_117
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_118: (in 00000000 : ptr32)
  Class: Eq_118
  DataType: ptr32
  OrigDataType: ptr32
T_119: (in 0x00000000 : word32)
  Class: Eq_118
  DataType: ptr32
  OrigDataType: word32
T_120: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_120
  DataType: bool
  OrigDataType: bool
T_121: (in 8000271C : ptr32)
  Class: Eq_121
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_124 t0000)))
T_122: (in 0x00000000 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in 0x8000271C + 0x00000000 : word32)
  Class: Eq_123
  DataType: ptr32
  OrigDataType: ptr32
T_124: (in Mem0[0x8000271C + 0x00000000:word32] : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_125: (in 0x00000000 : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_126: (in globals->dw8000271C != 0x00000000 : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in a7_71 : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in a6_72 : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in a0_73 : word32)
  Class: Eq_129
  DataType: word32
  OrigDataType: word32
T_130: (in ZN_74 : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_131: (in C_75 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in V_76 : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_133: (in Z_77 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in a1_78 : word32)
  Class: Eq_134
  DataType: word32
  OrigDataType: word32
T_135: (in CVZN_79 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in 00000000 : ptr32)
  Class: Eq_136
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_137: (in 00000000 : ptr32)
  Class: Eq_137
  DataType: ptr32
  OrigDataType: ptr32
T_138: (in 0x00000000 : word32)
  Class: Eq_137
  DataType: ptr32
  OrigDataType: word32
T_139: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_139
  DataType: bool
  OrigDataType: bool
T_140: (in register_tm_clones : ptr32)
  Class: Eq_140
  DataType: (ptr Eq_140)
  OrigDataType: (ptr (fn T_142 ()))
T_141: (in signature of register_tm_clones : void)
  Class: Eq_140
  DataType: (ptr Eq_140)
  OrigDataType: 
T_142: (in register_tm_clones() : void)
  Class: Eq_142
  DataType: void
  OrigDataType: void
T_143: (in a7_55 : word32)
  Class: Eq_143
  DataType: word32
  OrigDataType: word32
T_144: (in a6_56 : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_145: (in a0_57 : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in ZN_58 : byte)
  Class: Eq_146
  DataType: byte
  OrigDataType: byte
T_147: (in C_59 : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in V_60 : byte)
  Class: Eq_148
  DataType: byte
  OrigDataType: byte
T_149: (in Z_61 : byte)
  Class: Eq_149
  DataType: byte
  OrigDataType: byte
T_150: (in a1_62 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in CVZN_63 : byte)
  Class: Eq_151
  DataType: byte
  OrigDataType: byte
T_152: (in 00000000 : ptr32)
  Class: Eq_152
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_153: (in register_tm_clones : ptr32)
  Class: Eq_140
  DataType: (ptr Eq_140)
  OrigDataType: (ptr (fn T_154 ()))
T_154: (in register_tm_clones() : void)
  Class: Eq_142
  DataType: void
  OrigDataType: void
T_155: (in rArg04 : real64)
  Class: Eq_155
  DataType: real64
  OrigDataType: real64
T_156: (in dwArg04 : int32)
  Class: Eq_156
  DataType: int32
  OrigDataType: int32
T_157: (in dwLoc08_15 : int32)
  Class: Eq_157
  DataType: int32
  OrigDataType: int32
T_158: (in 2 : int32)
  Class: Eq_157
  DataType: int32
  OrigDataType: int32
T_159: (in 0x00000001 : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_160: (in dwLoc08_15 + 0x00000001 : word32)
  Class: Eq_157
  DataType: int32
  OrigDataType: word32
T_161: (in dwLoc08_15 - dwArg04 : word32)
  Class: Eq_161
  DataType: int32
  OrigDataType: int32
T_162: (in 0x00000000 : word32)
  Class: Eq_161
  DataType: int32
  OrigDataType: int32
T_163: (in dwLoc08_15 - dwArg04 > 0x00000000 : bool)
  Class: Eq_163
  DataType: bool
  OrigDataType: bool
T_164: (in rArg04 : real64)
  Class: Eq_164
  DataType: real64
  OrigDataType: real64
T_165: (in dwArg0C : int32)
  Class: Eq_156
  DataType: int32
  OrigDataType: int32
T_166: (in dwLoc08_16 : int32)
  Class: Eq_166
  DataType: int32
  OrigDataType: int32
T_167: (in 0x00000000 : word32)
  Class: Eq_166
  DataType: int32
  OrigDataType: word32
T_168: (in 0x00000001 : word32)
  Class: Eq_168
  DataType: word32
  OrigDataType: word32
T_169: (in dwLoc08_16 + 0x00000001 : word32)
  Class: Eq_166
  DataType: int32
  OrigDataType: word32
T_170: (in dwLoc08_16 - dwArg0C : word32)
  Class: Eq_170
  DataType: int32
  OrigDataType: int32
T_171: (in 0x00000000 : word32)
  Class: Eq_170
  DataType: int32
  OrigDataType: int32
T_172: (in dwLoc08_16 - dwArg0C >= 0x00000000 : bool)
  Class: Eq_172
  DataType: bool
  OrigDataType: bool
T_173: (in rArg04 : real64)
  Class: Eq_173
  DataType: real64
  OrigDataType: real64
T_174: (in dwArg0C : int32)
  Class: Eq_174
  DataType: int32
  OrigDataType: int32
T_175: (in dwArg04_5 : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_176: (in (word32) rArg04 : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_177: (in dwLoc08_24 : int32)
  Class: Eq_156
  DataType: int32
  OrigDataType: int32
T_178: (in 3 : int32)
  Class: Eq_156
  DataType: int32
  OrigDataType: int32
T_179: (in dwLoc08_104 : int32)
  Class: Eq_156
  DataType: int32
  OrigDataType: int32
T_180: (in 5 : int32)
  Class: Eq_156
  DataType: int32
  OrigDataType: int32
T_181: (in rLoc28 : real64)
  Class: Eq_164
  DataType: real64
  OrigDataType: real64
T_182: (in DPB(rLoc28, dwArg04_5, 0) : real64)
  Class: Eq_164
  DataType: real64
  OrigDataType: real64
T_183: (in pow_int : ptr32)
  Class: Eq_183
  DataType: (ptr Eq_183)
  OrigDataType: (ptr (fn T_185 (T_181, T_177)))
T_184: (in signature of pow_int : void)
  Class: Eq_183
  DataType: (ptr Eq_183)
  OrigDataType: 
T_185: (in pow_int(rLoc28, dwLoc08_24) : void)
  Class: Eq_185
  DataType: void
  OrigDataType: void
T_186: (in factorial : ptr32)
  Class: Eq_186
  DataType: (ptr Eq_186)
  OrigDataType: (ptr (fn T_188 (T_177)))
T_187: (in signature of factorial : void)
  Class: Eq_186
  DataType: (ptr Eq_186)
  OrigDataType: 
T_188: (in factorial(dwLoc08_24) : void)
  Class: Eq_188
  DataType: void
  OrigDataType: void
T_189: (in 0x00000004 : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_190: (in dwLoc08_24 + 0x00000004 : word32)
  Class: Eq_156
  DataType: int32
  OrigDataType: word32
T_191: (in dwLoc08_24 - dwArg0C : word32)
  Class: Eq_191
  DataType: int32
  OrigDataType: int32
T_192: (in 0x00000000 : word32)
  Class: Eq_191
  DataType: int32
  OrigDataType: int32
T_193: (in dwLoc08_24 - dwArg0C > 0x00000000 : bool)
  Class: Eq_193
  DataType: bool
  OrigDataType: bool
T_194: (in DPB(rLoc28, dwArg04_5, 0) : real64)
  Class: Eq_164
  DataType: real64
  OrigDataType: real64
T_195: (in pow_int : ptr32)
  Class: Eq_183
  DataType: (ptr Eq_183)
  OrigDataType: (ptr (fn T_196 (T_181, T_179)))
T_196: (in pow_int(rLoc28, dwLoc08_104) : void)
  Class: Eq_185
  DataType: void
  OrigDataType: void
T_197: (in factorial : ptr32)
  Class: Eq_186
  DataType: (ptr Eq_186)
  OrigDataType: (ptr (fn T_198 (T_179)))
T_198: (in factorial(dwLoc08_104) : void)
  Class: Eq_188
  DataType: void
  OrigDataType: void
T_199: (in 0x00000004 : word32)
  Class: Eq_199
  DataType: word32
  OrigDataType: word32
T_200: (in dwLoc08_104 + 0x00000004 : word32)
  Class: Eq_156
  DataType: int32
  OrigDataType: word32
T_201: (in dwLoc08_104 - dwArg0C : word32)
  Class: Eq_201
  DataType: int32
  OrigDataType: int32
T_202: (in 0x00000000 : word32)
  Class: Eq_201
  DataType: int32
  OrigDataType: int32
T_203: (in dwLoc08_104 - dwArg0C > 0x00000000 : bool)
  Class: Eq_203
  DataType: bool
  OrigDataType: bool
T_204: (in sine_taylor : ptr32)
  Class: Eq_204
  DataType: (ptr Eq_204)
  OrigDataType: (ptr (fn T_209 (T_208)))
T_205: (in signature of sine_taylor : void)
  Class: Eq_204
  DataType: (ptr Eq_204)
  OrigDataType: 
T_206: (in rLoc10 : real64)
  Class: Eq_206
  DataType: real64
  OrigDataType: real64
T_207: (in 0x40091EB8 : word32)
  Class: Eq_207
  DataType: word32
  OrigDataType: word32
T_208: (in DPB(rLoc10, 0x40091EB8, 0) : real64)
  Class: Eq_155
  DataType: real64
  OrigDataType: real64
T_209: (in sine_taylor(DPB(rLoc10, 0x40091EB8, 0)) : void)
  Class: Eq_209
  DataType: void
  OrigDataType: void
T_210: (in _sin : ptr32)
  Class: Eq_210
  DataType: (ptr Eq_210)
  OrigDataType: (ptr (fn T_224 (T_217, T_220, T_223)))
T_211: (in signature of _sin : void)
  Class: Eq_210
  DataType: (ptr Eq_210)
  OrigDataType: 
T_212: (in rArg04 : real64)
  Class: Eq_212
  DataType: real64
  OrigDataType: real64
T_213: (in rArg0C : real64)
  Class: Eq_213
  DataType: real64
  OrigDataType: real64
T_214: (in tArg14 : Eq_214)
  Class: Eq_214
  DataType: Eq_214
  OrigDataType: (union ((ptr (struct (0 T_237 t0000))) u1) ((ref int32) u0))
T_215: (in rLoc1C : real64)
  Class: Eq_215
  DataType: real64
  OrigDataType: real64
T_216: (in 0x40091EB8 : word32)
  Class: Eq_216
  DataType: word32
  OrigDataType: word32
T_217: (in DPB(rLoc1C, 0x40091EB8, 0) : real64)
  Class: Eq_212
  DataType: real64
  OrigDataType: real64
T_218: (in rLoc14 : real64)
  Class: Eq_218
  DataType: real64
  OrigDataType: real64
T_219: (in 0x3F689374 : word32)
  Class: Eq_219
  DataType: word32
  OrigDataType: word32
T_220: (in DPB(rLoc14, 0x3F689374, 0) : real64)
  Class: Eq_213
  DataType: real64
  OrigDataType: real64
T_221: (in fp : ptr32)
  Class: Eq_221
  DataType: ptr32
  OrigDataType: ptr32
T_222: (in 0x00000008 : word32)
  Class: Eq_222
  DataType: ui32
  OrigDataType: ui32
T_223: (in fp - 0x00000008 : word32)
  Class: Eq_214
  DataType: Eq_214
  OrigDataType: (union (ptr32 u0) ((ref int32) u1))
T_224: (in _sin(DPB(rLoc1C, 0x40091EB8, 0), DPB(rLoc14, 0x3F689374, 0), fp - 0x00000008) : void)
  Class: Eq_224
  DataType: void
  OrigDataType: void
T_225: (in rLoc0C_117 : Eq_225)
  Class: Eq_225
  DataType: Eq_225
  OrigDataType: (union (real64 u0) (real80 u1))
T_226: (in rLoc0C : real64)
  Class: Eq_226
  DataType: real64
  OrigDataType: real64
T_227: (in SLICE(rArg04, word32, 32) : word32)
  Class: Eq_227
  DataType: Eq_227
  OrigDataType: 
T_228: (in DPB(rLoc0C, SLICE(rArg04, word32, 32), 32) : real64)
  Class: Eq_225
  DataType: Eq_225
  OrigDataType: real64
T_229: (in v9_28 : Eq_229)
  Class: Eq_229
  DataType: Eq_229
  OrigDataType: (union (real64 u0) (real80 u1))
T_230: (in (real80) rLoc0C_117 : real80)
  Class: Eq_230
  DataType: real80
  OrigDataType: real80
T_231: (in (real80) rLoc0C_117 * rLoc0C_117 : real80)
  Class: Eq_231
  DataType: real80
  OrigDataType: real80
T_232: (in (real64) ((real80) rLoc0C_117 * rLoc0C_117) : real64)
  Class: Eq_229
  DataType: Eq_229
  OrigDataType: real64
T_233: (in dwLoc20_132 : int32)
  Class: Eq_233
  DataType: int32
  OrigDataType: int32
T_234: (in 1 : int32)
  Class: Eq_233
  DataType: int32
  OrigDataType: int32
T_235: (in 0x00000000 : word32)
  Class: Eq_235
  DataType: word32
  OrigDataType: word32
T_236: (in tArg14 + 0x00000000 : word32)
  Class: Eq_236
  DataType: Eq_236
  OrigDataType: (ref int32)
T_237: (in Mem0[tArg14 + 0x00000000:word32] : word32)
  Class: Eq_237
  DataType: word32
  OrigDataType: word32
T_238: (in 0x00000001 : word32)
  Class: Eq_238
  DataType: word32
  OrigDataType: word32
T_239: (in Mem0[tArg14 + 0x00000000:word32] + 0x00000001 : word32)
  Class: Eq_237
  DataType: word32
  OrigDataType: word32
T_240: (in 0x00000000 : word32)
  Class: Eq_240
  DataType: word32
  OrigDataType: word32
T_241: (in tArg14 + 0x00000000 : word32)
  Class: Eq_241
  DataType: Eq_241
  OrigDataType: (union ((ptr word32) u1) ((ref int32) u0))
T_242: (in Mem150[tArg14 + 0x00000000:word32] : word32)
  Class: Eq_237
  DataType: Eq_214
  OrigDataType: word32
T_243: (in v24_77 : word32)
  Class: Eq_243
  DataType: word32
  OrigDataType: word32
T_244: (in 0x00000001 : word32)
  Class: Eq_244
  DataType: word32
  OrigDataType: word32
T_245: (in dwLoc20_132 + 0x00000001 : word32)
  Class: Eq_243
  DataType: word32
  OrigDataType: word32
T_246: (in (real80) rLoc0C_117 : real80)
  Class: Eq_246
  DataType: real80
  OrigDataType: real80
T_247: (in (real80) rLoc0C_117 * v9_28 : real80)
  Class: Eq_247
  DataType: real80
  OrigDataType: real80
T_248: (in (real64) ((real80) rLoc0C_117 * v9_28) : real64)
  Class: Eq_248
  DataType: real64
  OrigDataType: real64
T_249: (in (real80) (real64) ((real80) rLoc0C_117 * v9_28) : real80)
  Class: Eq_249
  DataType: real80
  OrigDataType: real80
T_250: (in (real80) (real64) ((real80) rLoc0C_117 * v9_28) * v9_28 : real80)
  Class: Eq_250
  DataType: real80
  OrigDataType: real80
T_251: (in (real64) ((real80) (real64) ((real80) rLoc0C_117 * v9_28) * v9_28) : real64)
  Class: Eq_225
  DataType: Eq_225
  OrigDataType: real64
T_252: (in 0x00000003 : word32)
  Class: Eq_252
  DataType: word32
  OrigDataType: word32
T_253: (in v24_77 + 0x00000003 : word32)
  Class: Eq_233
  DataType: int32
  OrigDataType: word32
T_254: (in rLoc14 : real64)
  Class: Eq_254
  DataType: Eq_254
  OrigDataType: (union (real64 u0) (real80 u1))
T_255: (in (real80) rLoc14 : real80)
  Class: Eq_255
  DataType: real80
  OrigDataType: real80
T_256: (in (real80) v24_77 : real80)
  Class: Eq_256
  DataType: real80
  OrigDataType: real80
T_257: (in (real80) rLoc14 * (real80) v24_77 : real80)
  Class: Eq_257
  DataType: real80
  OrigDataType: real80
T_258: (in (real64) ((real80) rLoc14 * (real80) v24_77) : real64)
  Class: Eq_258
  DataType: real64
  OrigDataType: real64
T_259: (in (real80) (real64) ((real80) rLoc14 * (real80) v24_77) : real80)
  Class: Eq_259
  DataType: real80
  OrigDataType: real80
T_260: (in 0x00000001 : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_261: (in v24_77 + 0x00000001 : word32)
  Class: Eq_261
  DataType: word32
  OrigDataType: word32
T_262: (in (real80) (v24_77 + 0x00000001) : real80)
  Class: Eq_262
  DataType: real80
  OrigDataType: real80
T_263: (in (real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001) : real80)
  Class: Eq_263
  DataType: real80
  OrigDataType: real80
T_264: (in (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) : real64)
  Class: Eq_264
  DataType: real64
  OrigDataType: real64
T_265: (in (real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) : real80)
  Class: Eq_265
  DataType: real80
  OrigDataType: real80
T_266: (in 0x00000002 : word32)
  Class: Eq_266
  DataType: word32
  OrigDataType: word32
T_267: (in v24_77 + 0x00000002 : word32)
  Class: Eq_267
  DataType: word32
  OrigDataType: word32
T_268: (in (real80) (v24_77 + 0x00000002) : real80)
  Class: Eq_268
  DataType: real80
  OrigDataType: real80
T_269: (in (real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) * (real80) (v24_77 + 0x00000002) : real80)
  Class: Eq_269
  DataType: real80
  OrigDataType: real80
T_270: (in (real64) ((real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) * (real80) (v24_77 + 0x00000002)) : real64)
  Class: Eq_270
  DataType: real64
  OrigDataType: real64
T_271: (in (real80) (real64) ((real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) * (real80) (v24_77 + 0x00000002)) : real80)
  Class: Eq_271
  DataType: real80
  OrigDataType: real80
T_272: (in v24_77 + 0x00000003 : word32)
  Class: Eq_272
  DataType: word32
  OrigDataType: word32
T_273: (in (real80) (v24_77 + 0x00000003) : real80)
  Class: Eq_273
  DataType: real80
  OrigDataType: real80
T_274: (in (real80) (real64) ((real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) * (real80) (v24_77 + 0x00000002)) * (real80) (v24_77 + 0x00000003) : real80)
  Class: Eq_274
  DataType: real80
  OrigDataType: real80
T_275: (in (real64) ((real80) (real64) ((real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v24_77) * (real80) (v24_77 + 0x00000001)) * (real80) (v24_77 + 0x00000002)) * (real80) (v24_77 + 0x00000003)) : real64)
  Class: Eq_254
  DataType: Eq_254
  OrigDataType: real64
T_276: (in (real80) rLoc0C_117 : real80)
  Class: Eq_276
  DataType: real80
  OrigDataType: real80
T_277: (in (real80) rLoc0C_117 / rLoc14 : real64)
  Class: Eq_277
  DataType: real80
  OrigDataType: real80
T_278: (in (real64) ((real80) rLoc0C_117 / rLoc14) : real64)
  Class: Eq_213
  DataType: real64
  OrigDataType: real64
T_279: (in (real64) ((real80) rLoc0C_117 / rLoc14) < rArg0C : bool)
  Class: Eq_279
  DataType: bool
  OrigDataType: bool
T_280: (in a0_12 : (ptr code))
  Class: Eq_280
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_281: (in 8000270C : ptr32)
  Class: Eq_281
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_284 t0000)))
T_282: (in 0x00000000 : word32)
  Class: Eq_282
  DataType: word32
  OrigDataType: word32
T_283: (in 0x8000270C + 0x00000000 : word32)
  Class: Eq_283
  DataType: ptr32
  OrigDataType: ptr32
T_284: (in Mem0[0x8000270C + 0x00000000:word32] : word32)
  Class: Eq_280
  DataType: (ptr code)
  OrigDataType: word32
T_285: (in -1 : int32)
  Class: Eq_285
  DataType: int32
  OrigDataType: int32
T_286: (in -1 - a0_12 : word32)
  Class: Eq_286
  DataType: int32
  OrigDataType: int32
T_287: (in 0x00000000 : word32)
  Class: Eq_286
  DataType: int32
  OrigDataType: word32
T_288: (in -1 - a0_12 == 0x00000000 : bool)
  Class: Eq_288
  DataType: bool
  OrigDataType: bool
T_289: (in a7_26 : word32)
  Class: Eq_289
  DataType: word32
  OrigDataType: word32
T_290: (in a6_27 : word32)
  Class: Eq_290
  DataType: word32
  OrigDataType: word32
T_291: (in a2_28 : ptr32)
  Class: Eq_291
  DataType: ptr32
  OrigDataType: ptr32
T_292: (in CVZN_29 : byte)
  Class: Eq_292
  DataType: byte
  OrigDataType: byte
T_293: (in a0_30 : word32)
  Class: Eq_293
  DataType: word32
  OrigDataType: word32
T_294: (in d0_31 : word32)
  Class: Eq_294
  DataType: word32
  OrigDataType: word32
T_295: (in Z_32 : byte)
  Class: Eq_295
  DataType: byte
  OrigDataType: byte
T_296: (in -1 : int32)
  Class: Eq_296
  DataType: int32
  OrigDataType: int32
T_297: (in 0x00000004 : word32)
  Class: Eq_297
  DataType: ui32
  OrigDataType: ui32
T_298: (in a2_28 - 0x00000004 : word32)
  Class: Eq_298
  DataType: (ptr int32)
  OrigDataType: (ptr (struct (0 T_301 t0000)))
T_299: (in 0x00000000 : word32)
  Class: Eq_299
  DataType: word32
  OrigDataType: word32
T_300: (in a2_28 - 0x00000004 + 0x00000000 : word32)
  Class: Eq_300
  DataType: word32
  OrigDataType: word32
T_301: (in Mem0[a2_28 - 0x00000004 + 0x00000000:word32] : word32)
  Class: Eq_301
  DataType: int32
  OrigDataType: int32
T_302: (in -1 - *(a2_28 - 0x00000004) : word32)
  Class: Eq_302
  DataType: int32
  OrigDataType: int32
T_303: (in 0x00000000 : word32)
  Class: Eq_302
  DataType: int32
  OrigDataType: word32
T_304: (in -1 - *(a2_28 - 0x00000004) != 0x00000000 : bool)
  Class: Eq_304
  DataType: bool
  OrigDataType: bool
T_305:
  Class: Eq_305
  DataType: (ptr code)
  OrigDataType: (struct 0004 (0 T_76 t0000))
*/
typedef struct Globals {
	<anonymous> * ptr8000270C;	// 8000270C
	<anonymous> * a80002714[];	// 80002714
	word32 dw8000271C;	// 8000271C
	byte b80002724;	// 80002724
	uint32 dw80002726;	// 80002726
	<anonymous> tFFFFFFFF;	// FFFFFFFF
} Eq_1;

typedef void (Eq_60)();

typedef void (Eq_140)();

typedef void (Eq_183)(real64, int32);

typedef void (Eq_186)(int32);

typedef void (Eq_204)(real64);

typedef void (Eq_210)(real64, real64, Eq_214);

typedef union Eq_214 {
	word32 * u0;
	<anonymous> u1;
} Eq_214;

typedef union Eq_225 {
	real64 u0;
	real80 u1;
} Eq_225;

typedef union Eq_229 {
	real64 u0;
	real80 u1;
} Eq_229;

typedef int32 & Eq_236;

typedef union Eq_241 {
	word32 * u0;
	<anonymous> u1;
} Eq_241;

typedef union Eq_254 {
	real64 u0;
	real80 u1;
} Eq_254;

