//===--- CxxApiWriterPass.h - Converting LLVM IR to C++ API ------*- C++-*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file define CxxApiWriterPass.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_TOOLS_LLVMCXXAPIWRITERPASS_H
#define LLVM_TOOLS_LLVMCXXAPIWRITERPASS_H

namespace llvm {

class ModulePass;
class raw_ostream;

ModulePass *createCxxApiWriterPass(raw_ostream &OS, bool IR = true);
} // namespace llvm

#endif // LLVM_TOOLS_LLVMCXXAPIWRITERPASS_H
