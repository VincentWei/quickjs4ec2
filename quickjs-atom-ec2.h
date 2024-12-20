#ifdef DEF

/* Note: first atoms are considered as keywords in the parser */
DEF(null, "null", "空") /* must be first */
DEF(false, "false", "假")
DEF(true, "true", "真")
DEF(if, "if", "若始")
DEF(ifel, "ifel", "若又")
DEF(else, "else", "若否")
// DEF(endif, "endif", "若终")
DEF(return, "return", "返回")
// DEF(not, "not", "非")
// DEF(and, "and", "且")
// DEF(or, "or", "或")
DEF(var, "var", "var")
DEF(this, "this", "this")
DEF(delete, "delete", "delete")
DEF(void, "void", "void")
DEF(typeof, "typeof", "typeof")
DEF(new, "new", "新建")
DEF(in, "in", "在")
DEF(instanceof, "instanceof", "instanceof")
DEF(do, "do", "当序")
DEF(while, "while", "当始")
// DEF(endwhile, "endwhile", "当终")
DEF(for, "for", "对始")
// DEF(endfor, "endfor", "对终")
DEF(break, "break", "跳出")
DEF(continue, "continue", "继续")
DEF(switch, "switch", "岔始")
// DEF(endswitch, "endswitch", "岔终")
DEF(case, "case", "岔道")
DEF(default, "default", "主道")
// DEF(namespace, "namespace", "namespace")
// DEF(endns, "endns", "endns")
DEF(throw, "throw", "抛出")
DEF(try, "try", "探始")
DEF(catch, "catch", "探错")
DEF(finally, "finally", "探总")
// DEF(endtry, "endtry", "探终")
DEF(function, "function", "函始")
// DEF(endfunc, "endfunc", "函终")
DEF(debugger, "debugger", "debugger")
DEF(with, "with", "用")
/* FutureReservedWord */
DEF(class, "class", "类始")
// DEF(endclass, "endclass", "类终")
DEF(const, "const", "常量")
DEF(enum, "enum", "enum")
DEF(export, "export", "导出")
DEF(extends, "extends", "extends")
DEF(import, "import", "导入")
DEF(super, "super", "super")
// DEF(declare, "declare", "declare")
// DEF(define, "define", "define")
/* FutureReservedWords when parsing strict mode code */
DEF(implements, "implements", "implements")
DEF(interface, "interface", "interface")
DEF(let, "let", "令")
DEF(package, "package", "package")
DEF(private, "private", "private")
DEF(protected, "protected", "protected")
DEF(public, "public", "public")
DEF(static, "static", "static")
DEF(yield, "yield", "yield")
DEF(await, "await", "await")

/* empty string */
DEF(empty_string, "", "")
/* identifiers */
DEF(length, "length", "length")
DEF(fileName, "fileName", "fileName")
DEF(lineNumber, "lineNumber", "lineNumber")
DEF(message, "message", "message")
DEF(cause, "cause", "cause")
DEF(errors, "errors", "errors")
DEF(stack, "stack", "stack")
DEF(name, "name", "name")
DEF(toString, "toString", "toString")
DEF(toLocaleString, "toLocaleString", "toLocaleString")
DEF(valueOf, "valueOf", "valueOf")
DEF(eval, "eval", "eval")
DEF(prototype, "prototype", "prototype")
DEF(constructor, "constructor", "constructor")
DEF(configurable, "configurable", "configurable")
DEF(writable, "writable", "writable")
DEF(enumerable, "enumerable", "enumerable")
DEF(value, "value", "value")
DEF(get, "get", "get")
DEF(set, "set", "set")
DEF(of, "of", "于")
DEF(__proto__, "__proto__", "__proto__")
DEF(undefined, "undefined", "未定义")
DEF(number, "number", "number")
DEF(boolean, "boolean", "boolean")
DEF(string, "string", "string")
DEF(object, "object", "object")
DEF(symbol, "symbol", "symbol")
DEF(integer, "integer", "integer")
DEF(unknown, "unknown", "unknown")
DEF(arguments, "arguments", "arguments")
DEF(callee, "callee", "callee")
DEF(caller, "caller", "caller")
DEF(_eval_, "<eval>", "<eval>")
DEF(_ret_, "<ret>", "<ret>")
DEF(_var_, "<var>", "<var>")
DEF(_arg_var_, "<arg_var>", "<arg_var>")
DEF(_with_, "<with>", "<with>")
DEF(lastIndex, "lastIndex", "lastIndex")
DEF(target, "target", "target")
DEF(index, "index", "index")
DEF(input, "input", "input")
DEF(defineProperties, "defineProperties", "defineProperties")
DEF(apply, "apply", "apply")
DEF(join, "join", "join")
DEF(concat, "concat", "concat")
DEF(split, "split", "split")
DEF(construct, "construct", "construct")
DEF(getPrototypeOf, "getPrototypeOf", "getPrototypeOf")
DEF(setPrototypeOf, "setPrototypeOf", "setPrototypeOf")
DEF(isExtensible, "isExtensible", "isExtensible")
DEF(preventExtensions, "preventExtensions", "preventExtensions")
DEF(has, "has", "has")
DEF(deleteProperty, "deleteProperty", "deleteProperty")
DEF(defineProperty, "defineProperty", "defineProperty")
DEF(getOwnPropertyDescriptor, "getOwnPropertyDescriptor", "getOwnPropertyDescriptor")
DEF(ownKeys, "ownKeys", "ownKeys")
DEF(add, "add", "add")
DEF(done, "done", "done")
DEF(next, "next", "next")
DEF(values, "values", "values")
DEF(source, "source", "source")
DEF(flags, "flags", "flags")
DEF(global, "global", "global")
DEF(unicode, "unicode", "unicode")
DEF(raw, "raw", "raw")
DEF(new_target, "new.target", "new.target")
DEF(this_active_func, "this.active_func", "this.active_func")
DEF(home_object, "<home_object>", "<home_object>")
DEF(computed_field, "<computed_field>", "<computed_field>")
DEF(static_computed_field, "<static_computed_field>", "<static_computed_field>") /* must come after computed_fields */
DEF(class_fields_init, "<class_fields_init>", "<class_fields_init>")
DEF(brand, "<brand>", "<brand>")
DEF(hash_constructor, "#constructor", "#constructor")
DEF(as, "as", "为")
DEF(from, "from", "from")
DEF(meta, "meta", "meta")
DEF(_default_, "*default*", "*default*")
DEF(_star_, "*", "*")
DEF(Module, "Module", "Module")
DEF(then, "then", "then")
DEF(resolve, "resolve", "resolve")
DEF(reject, "reject", "reject")
DEF(promise, "promise", "promise")
DEF(proxy, "proxy", "proxy")
DEF(revoke, "revoke", "revoke")
DEF(async, "async", "async")
DEF(exec, "exec", "exec")
DEF(groups, "groups", "groups")
DEF(indices, "indices", "indices")
DEF(status, "status", "status")
DEF(reason, "reason", "reason")
DEF(globalThis, "globalThis", "globalThis")
DEF(bigint, "bigint", "bigint")
#ifdef CONFIG_BIGNUM
DEF(bigfloat, "bigfloat", "bigfloat")
DEF(bigdecimal, "bigdecimal", "bigdecimal")
DEF(roundingMode, "roundingMode", "roundingMode")
DEF(maximumSignificantDigits, "maximumSignificantDigits", "maximumSignificantDigits")
DEF(maximumFractionDigits, "maximumFractionDigits", "maximumFractionDigits")
#endif
/* the following 3 atoms are only used with CONFIG_ATOMICS */
DEF(not_equal, "not-equal", "not-equal")
DEF(timed_out, "timed-out", "timed-out")
DEF(ok, "ok", "ok")
/* */
DEF(toJSON, "toJSON", "toJSON")
/* class names */
DEF(Object, "Object", "Object")
DEF(Array, "Array", "Array")
DEF(Error, "Error", "Error")
DEF(Number, "Number", "Number")
DEF(String, "String", "String")
DEF(Boolean, "Boolean", "Boolean")
DEF(Symbol, "Symbol", "Symbol")
DEF(Arguments, "Arguments", "Arguments")
DEF(Math, "Math", "Math")
DEF(JSON, "JSON", "JSON")
DEF(Date, "Date", "Date")
DEF(Function, "Function", "Function")
DEF(GeneratorFunction, "GeneratorFunction", "GeneratorFunction")
DEF(ForInIterator, "ForInIterator", "ForInIterator")
DEF(RegExp, "RegExp", "RegExp")
DEF(ArrayBuffer, "ArrayBuffer", "ArrayBuffer")
DEF(SharedArrayBuffer, "SharedArrayBuffer", "SharedArrayBuffer")
/* must keep same order as class IDs for typed arrays */
DEF(Uint8ClampedArray, "Uint8ClampedArray", "Uint8ClampedArray")
DEF(Int8Array, "Int8Array", "Int8Array")
DEF(Uint8Array, "Uint8Array", "Uint8Array")
DEF(Int16Array, "Int16Array", "Int16Array")
DEF(Uint16Array, "Uint16Array", "Uint16Array")
DEF(Int32Array, "Int32Array", "Int32Array")
DEF(Uint32Array, "Uint32Array", "Uint32Array")
DEF(BigInt64Array, "BigInt64Array", "BigInt64Array")
DEF(BigUint64Array, "BigUint64Array", "BigUint64Array")
DEF(Float32Array, "Float32Array", "Float32Array")
DEF(Float64Array, "Float64Array", "Float64Array")
DEF(DataView, "DataView", "DataView")
DEF(BigInt, "BigInt", "BigInt")
#ifdef CONFIG_BIGNUM
DEF(BigFloat, "BigFloat", "BigFloat")
DEF(BigFloatEnv, "BigFloatEnv", "BigFloatEnv")
DEF(BigDecimal, "BigDecimal", "BigDecimal")
DEF(OperatorSet, "OperatorSet", "OperatorSet")
DEF(Operators, "Operators", "Operators")
#endif
DEF(Map, "Map", "Map")
DEF(Set, "Set", "Set") /* Map + 1 */
DEF(WeakMap, "WeakMap", "WeakMap") /* Map + 2 */
DEF(WeakSet, "WeakSet", "WeakSet") /* Map + 3 */
DEF(Map_Iterator, "Map Iterator", "Map Iterator")
DEF(Set_Iterator, "Set Iterator", "Set Iterator")
DEF(Array_Iterator, "Array Iterator", "Array Iterator")
DEF(String_Iterator, "String Iterator", "String Iterator")
DEF(RegExp_String_Iterator, "RegExp String Iterator", "RegExp String Iterator")
DEF(Generator, "Generator", "Generator")
DEF(Proxy, "Proxy", "Proxy")
DEF(Promise, "Promise", "Promise")
DEF(PromiseResolveFunction, "PromiseResolveFunction", "PromiseResolveFunction")
DEF(PromiseRejectFunction, "PromiseRejectFunction", "PromiseRejectFunction")
DEF(AsyncFunction, "AsyncFunction", "AsyncFunction")
DEF(AsyncFunctionResolve, "AsyncFunctionResolve", "AsyncFunctionResolve")
DEF(AsyncFunctionReject, "AsyncFunctionReject", "AsyncFunctionReject")
DEF(AsyncGeneratorFunction, "AsyncGeneratorFunction", "AsyncGeneratorFunction")
DEF(AsyncGenerator, "AsyncGenerator", "AsyncGenerator")
DEF(EvalError, "EvalError", "EvalError")
DEF(RangeError, "RangeError", "RangeError")
DEF(ReferenceError, "ReferenceError", "ReferenceError")
DEF(SyntaxError, "SyntaxError", "SyntaxError")
DEF(TypeError, "TypeError", "TypeError")
DEF(URIError, "URIError", "URIError")
DEF(InternalError, "InternalError", "InternalError")
/* private symbols */
DEF(Private_brand, "<brand>", "<brand>")
/* symbols */
DEF(Symbol_toPrimitive, "Symbol.toPrimitive", "Symbol.toPrimitive")
DEF(Symbol_iterator, "Symbol.iterator", "Symbol.iterator")
DEF(Symbol_match, "Symbol.match", "Symbol.match")
DEF(Symbol_matchAll, "Symbol.matchAll", "Symbol.matchAll")
DEF(Symbol_replace, "Symbol.replace", "Symbol.replace")
DEF(Symbol_search, "Symbol.search", "Symbol.search")
DEF(Symbol_split, "Symbol.split", "Symbol.split")
DEF(Symbol_toStringTag, "Symbol.toStringTag", "Symbol.toStringTag")
DEF(Symbol_isConcatSpreadable, "Symbol.isConcatSpreadable", "Symbol.isConcatSpreadable")
DEF(Symbol_hasInstance, "Symbol.hasInstance", "Symbol.hasInstance")
DEF(Symbol_species, "Symbol.species", "Symbol.species")
DEF(Symbol_unscopables, "Symbol.unscopables", "Symbol.unscopables")
DEF(Symbol_asyncIterator, "Symbol.asyncIterator", "Symbol.asyncIterator")
#ifdef CONFIG_BIGNUM
DEF(Symbol_operatorSet, "Symbol.operatorSet", "Symbol.operatorSet")
#endif

#endif /* DEF */