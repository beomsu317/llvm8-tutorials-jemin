#ifndef LLVM_TUTORIAL_OPTIMIZATION_TEMPLATE_HELLO_MODULE_H
#define LLVM_TUTORIAL_OPTIMIZATION_TEMPLATE_HELLO_MODULE_H

#include "llvm/IR/Module.h"
#include "llvm/Pass.h"

using namespace llvm;

namespace {
  struct InsertInc : public ModulePass {
    static char ID; // Pass identification, replacement for typeid
    InsertInc() : ModulePass(ID) {}

    bool runOnModule(Module &M) override;

    void getAnalysisUsage(AnalysisUsage &AU) const override;
  };
}

#endif

