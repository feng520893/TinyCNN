#pragma once

//////////////////////////////////////////////////////////////////////////
//common tools
#define INNER_DETAIL_NAMESPACE cxxdetail
#define INNER_DETAIL_NAMESPACE_BEGIN namespace INNER_DETAIL_NAMESPACE{
#define INNER_DETAIL_NAMESPACE_END };
INNER_DETAIL_NAMESPACE_BEGIN;
template <typename FuncType>
class InnerScopeExit
{
public:
	InnerScopeExit(const FuncType _func) :func(_func){}
	~InnerScopeExit(){ if (!dismissed){ func(); } }
private:
	FuncType func;
	bool dismissed = false;
};
template <typename F>
InnerScopeExit<F> MakeScopeExit(F f) {
	return InnerScopeExit<F>(f);
};
INNER_DETAIL_NAMESPACE_END;
#define DO_STRING_JOIN(arg1, arg2) arg1 ## arg2
#define STRING_JOIN(arg1, arg2) DO_STRING_JOIN(arg1, arg2)
#define SCOPE_EXIT(code) auto STRING_JOIN(scope_exit_object_, __LINE__) = INNER_DETAIL_NAMESPACE::MakeScopeExit([&](){code;});
#define DELETE_LATER(x) SCOPE_EXIT(delete x)
#define DELETE_ARRAY_LATER(x) SCOPE_EXIT(delete[] x)


//////////////////////////////////////////////////////////////////////////
//common macros
#define TARGET_NAMESPACE tinycnn
#define NAMESPACE_BEGIN namespace TARGET_NAMESPACE{
#define NAMESPACE_END };


//////////////////////////////////////////////////////////////////////////
//common type
#include <cstdint>


//////////////////////////////////////////////////////////////////////////
//common functions
INNER_DETAIL_NAMESPACE_BEGIN;
void assert_exp(const bool exp, const char* msg,const char* file,const char* function,const int line);
INNER_DETAIL_NAMESPACE_END;
#define ASSERT_EXP(exp,msg) cxxdetail::assert_exp((exp),(msg),__FILE__,__FUNCTION__,__LINE__);
